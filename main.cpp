#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "sentence.h"
#include "matrix.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    for(;;) ///����������� ����, � ������� �������� �������� ���������
    {
        printf("��� ������� ��������� ������� ����� ������\n");
        getchar();
        matrixStart();
        printf("�� ����� �� ���������\n\n\n");
        getchar();
    }
    return 0;
}
