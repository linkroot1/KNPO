#pragma once
/**
* Открывает файл с названием nameFile в режиме mode.
* @param [in] *nameFile имя файла.
* @param [in] *mode режим открытия.
* @return Указатель на открытый файл.
*/
FILE* openFile(const char* nameFile, const char* mode);


/**
* Выравнивает текст по ширине.
* @param [in] FILE* fp указатель на неотформатированный по ширине файл.
* @return указатель на отформатированный по ширине файл.
*/
FILE* formattingTextToWidth(FILE* fp);


/**
* Закрывает файл.
* @param [in] FILE* p указатель на файл.
*/
void closeFile(FILE* p);


/**
* Находит длину самой длинной строки в файле.
* @param [in] FILE* fp указатель на файл.
* @return длина самой длинной строки.
*/
int getMaxLen(FILE* fp);


/**
* Находит колличество пробелов в строке.
* @param [in] FILE* fp указатель на файл.
* @param [in] *space указатель на колличество пробелов в строке.
* @param [out] *space указатель на колличество пробелов в строке.
* @return Длина строки.
*/
int getSpacesCount(FILE* fp, int* space);


/**
* Находит колличество пробелов которое нужно добавить.
* @param [in] m Длина самой большой строки.
* @param [in] len Длина текущей строки.
* @param [in] space колличество пробелов в текущей строке.
* @return колличество пробелов которые нужно добавить.
*/
int calculateSpacesCount(int m, int len, int space);


/**
* Записывает в выходной файл строку из входной добавляя нужное колличество пробелов.
* @param [in] FILE* fp Указатель на входной файл.
* @param [in] FILE* fp_out Указатель на выходной файл.
* @param [in] m Длина самой большой строки.
* @param [in] len Длина текущей строки.
* @param [in] space колличество пробелов в текущей строке.
*/
void copyLine(FILE* fp, FILE* fp_out, int m, int len, int space);
