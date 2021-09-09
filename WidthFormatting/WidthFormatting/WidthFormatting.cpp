#include <stdio.h>
#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
#include "functions.h"

int main()
{


    FILE* fp = openFile("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error read file");
        return 0;
    }
   
    FILE* fp_out = formattingTextToWidth(fp);
    closeFile(fp);
    closeFile(fp_out);
    return 0;
}


