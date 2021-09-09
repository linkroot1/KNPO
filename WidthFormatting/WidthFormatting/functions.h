#pragma once
/**
* ��������� ���� � ��������� nameFile � ������ mode.
* @param [in] *nameFile ��� �����.
* @param [in] *mode ����� ��������.
* @return ��������� �� �������� ����.
*/
FILE* openFile(const char* nameFile, const char* mode);


/**
* ����������� ����� �� ������.
* @param [in] FILE* fp ��������� �� ������������������� �� ������ ����.
* @return ��������� �� ����������������� �� ������ ����.
*/
FILE* formattingTextToWidth(FILE* fp);


/**
* ��������� ����.
* @param [in] FILE* p ��������� �� ����.
*/
void closeFile(FILE* p);


/**
* ������� ����� ����� ������� ������ � �����.
* @param [in] FILE* fp ��������� �� ����.
* @return ����� ����� ������� ������.
*/
int getMaxLen(FILE* fp);


/**
* ������� ����������� �������� � ������.
* @param [in] FILE* fp ��������� �� ����.
* @param [in] *space ��������� �� ����������� �������� � ������.
* @param [out] *space ��������� �� ����������� �������� � ������.
* @return ����� ������.
*/
int getSpacesCount(FILE* fp, int* space);


/**
* ������� ����������� �������� ������� ����� ��������.
* @param [in] m ����� ����� ������� ������.
* @param [in] len ����� ������� ������.
* @param [in] space ����������� �������� � ������� ������.
* @return ����������� �������� ������� ����� ��������.
*/
int calculateSpacesCount(int m, int len, int space);


/**
* ���������� � �������� ���� ������ �� ������� �������� ������ ����������� ��������.
* @param [in] FILE* fp ��������� �� ������� ����.
* @param [in] FILE* fp_out ��������� �� �������� ����.
* @param [in] m ����� ����� ������� ������.
* @param [in] len ����� ������� ������.
* @param [in] space ����������� �������� � ������� ������.
*/
void copyLine(FILE* fp, FILE* fp_out, int m, int len, int space);
