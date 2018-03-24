#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED



#endif // OUTPUT_H_INCLUDED
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#define BACKGROUND_WHITE BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY
HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
void mv(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

static void output_menu_line()
{
    printf("��������������������������������������������\n");
    printf("��      Postfix notation Calculator       ��\n");
    printf("��������������������������������������������\n");
    printf("                                            \n");
    printf("������<Operator>����������������������������\n");
    printf("��     1.+    2.-    3.*    4./           ��\n");
    printf("��     5.R    6.!    7.^    8.d           ��\n");
    printf("��     9.C   10.\\   11.||                 ��\n");
    printf("��������������������������������������������\n");
    printf("                                            \n");
}
static void output_io(double res)
{
    printf("������<Input.>������������������������������\n");
    printf("��                                        ��\n");
    printf("��                                        ��\n");
    printf("������<Output>������������������������������\n");
    printf("��                                        ��\n");
    printf("��������������������������������������������\n\n");
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN|BACKGROUND_WHITE);
    mv(3,14);
    printf("%.5f",res);
}//����������������

static void output_help()
{
    int x = 43;
    int y = 0;
    mv(x,y++);
    printf(" ������<Help>������������������������\n");
        mv(x,y++);
    printf(" ��  Postfix operator [v1.5.8]     ��\n");
    mv(x,y++);
    printf(" ��  (c)2015 DIMI8 Corporation     ��\n");
    mv(x,y++);
    printf(" ��  ALL rights reserved.          ��\n");
    mv(x,y++);
    printf(" ��                                ��\n");
        mv(x,y++);
    printf(" ��  The list of operators         ��\n");
        mv(x,y++);
    printf(" ��  1.+(plus)   2.-(minus)        ��\n");
        mv(x,y++);
    printf(" ��  3.*(multiply)  4./(division)  ��\n");
        mv(x,y++);
    printf(" ��  5.R(SQRT)   6.!(factorial)    ��\n");
        mv(x,y++);
    printf(" ��  7.C(CLEAR)   8.\\(EXIT)        ��\n");
        mv(x,y++);
    printf(" ��  9.^(Involution)               ��\n");
        mv(x,y++);
    printf(" ��  10.d(do nothing)              ��\n");
        mv(x,y++);
    printf(" ��  11.||(abs)                    ��\n");
        mv(x,y++);
    printf(" ��                                ��\n");
        mv(x,y++);
    printf(" ��                                ��\n");
        mv(x,y++);
    printf(" ������������������������������������\n\n");
}//����������������
void output_howto()
{
    printf("��������������������������������������������������������������������������������");
    printf("��                                                                            ��");
    printf("��  How can I use this calculator?                                            ��");
    printf("��  1.Enter the length of mathematical formula.                               ��");
    printf("��  2.Enter operands and operators.                                           ��");
    printf("��  3.Then the result will return.                                            ��");
    printf("��                                                                            ��");
    printf("��  ex) Input : 3 \\n 2 5 +    Output : 7.00000                                ��");
    printf("��������������������������������������������������������������������������������");
}
