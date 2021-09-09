#include <stdio.h>
#include <string.h>
#include "functions.h"
#pragma warning(disable : 4996)


FILE* openFile(const char* nameFile, const char* mode)
{
	FILE* fp;
	fopen_s(&fp, nameFile, mode);
	return fp;
}


FILE* formattingTextToWidth(FILE* fp)
{
    int m = 0, k = 0, i;
    
    m = getMaxLen(fp);

    FILE* fp_out = openFile("output.txt", "w");
    int space, len, beginning_line; //���-�� ��������, ����� � ��������� �� ������ ������� ������
    char c;
    do
    {
        //��������� ����������� ��������
        len = getSpacesCount(fp, &space);

        copyLine(fp, fp_out, m, len, space);

    } while (!feof(fp));
    return fp_out;
}

void closeFile(FILE* p)
{
    fclose(p);
}

int getMaxLen(FILE* fp)
{
    int m, k;
    m = k = 0;
    do
    {
        while ((getc(fp) != '\n') && (!feof(fp)))
            k++;
        if (k > m) m = k;
        k = 0;
    } while (!feof(fp));
    rewind(fp);
    return m;
}

int getSpacesCount(FILE* fp, int* space)
{
    
    int  len, beginning_line;
    beginning_line = ftell(fp);
    char c;

    
    *space = 0;
    len = 0;
    while (((c = getc(fp)) != '\n') && (!feof(fp)))
    {
        
        if (c == ' ') (*space)++;
        len++;
    }
    fseek(fp, beginning_line, SEEK_SET);
    return len;
}


int calculateSpacesCount(int m, int len, int space)
{
    int k = 0;
    if ((m - len) % space) //���� ������� � ����� ������������ ������ � ������� �� ������� ������ �� ���������� �������� � ������� ������
    {
        k = (m - len) / space + 2; //+1 �������� ������ � +1 ������ �� ������� �������, ������� +2
        len++; //����� ������ �� ������� � ��� ����� ����, ��� ��������� ������ ������
    }
    else k = (m - len) / space + 1; //+1 ��� �� ��������� �������� ������, �� ������� �������
    return k;
}


void copyLine(FILE* fp, FILE* fp_out, int m, int len, int space)
{
    char c;
    while (((c = getc(fp)) != '\n') && (!feof(fp)))
    {
        if (c != ' ') fprintf(fp_out, "%c", c);
        else
        {
            //k - ���������� ��������, ������� ����� �������

            int k = calculateSpacesCount(m, len, space);
            for (int i = 0; i < k; i++)
                fprintf(fp_out, " ");
        }
    }
    fprintf(fp_out, "\n");

}