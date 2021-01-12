#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "sentence.h"
#include "matrix.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    for(;;) ///бесконечный цикл, в котором работает основная программа
    {
        printf("Для запуска программы нажмите любую кнопку\n");
        getchar();
        matrixStart();
        printf("Вы вышли из программы\n\n\n");
        getchar();
    }
    return 0;
}
