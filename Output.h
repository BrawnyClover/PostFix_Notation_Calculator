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
    printf("旨收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早      Postfix notation Calculator       早\n");
    printf("曲收收收收收收收收收收收收收收收收收收收收旭\n");
    printf("                                            \n");
    printf("旨收收<Operator>收收收收收收收收收收收收收旬\n");
    printf("早     1.+    2.-    3.*    4./           早\n");
    printf("早     5.R    6.!    7.^    8.d           早\n");
    printf("早     9.C   10.\\   11.||                 早\n");
    printf("曲收收收收收收收收收收收收收收收收收收收收旭\n");
    printf("                                            \n");
}
static void output_io(double res)
{
    printf("旨收收<Input.>收收收收收收收收收收收收收收旬\n");
    printf("早                                        早\n");
    printf("早                                        早\n");
    printf("曳收收<Output>收收收收收收收收收收收收收收朽\n");
    printf("早                                        早\n");
    printf("曲收收收收收收收收收收收收收收收收收收收收旭\n\n");
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN|BACKGROUND_WHITE);
    mv(3,14);
    printf("%.5f",res);
}//收旬曲旭旨早曳朽

static void output_help()
{
    int x = 43;
    int y = 0;
    mv(x,y++);
    printf(" 旨收收<Help>收收收收收收收收收收收旬\n");
        mv(x,y++);
    printf(" 早  Postfix operator [v1.5.8]     早\n");
    mv(x,y++);
    printf(" 早  (c)2015 DIMI8 Corporation     早\n");
    mv(x,y++);
    printf(" 早  ALL rights reserved.          早\n");
    mv(x,y++);
    printf(" 早                                早\n");
        mv(x,y++);
    printf(" 早  The list of operators         早\n");
        mv(x,y++);
    printf(" 早  1.+(plus)   2.-(minus)        早\n");
        mv(x,y++);
    printf(" 早  3.*(multiply)  4./(division)  早\n");
        mv(x,y++);
    printf(" 早  5.R(SQRT)   6.!(factorial)    早\n");
        mv(x,y++);
    printf(" 早  7.C(CLEAR)   8.\\(EXIT)        早\n");
        mv(x,y++);
    printf(" 早  9.^(Involution)               早\n");
        mv(x,y++);
    printf(" 早  10.d(do nothing)              早\n");
        mv(x,y++);
    printf(" 早  11.||(abs)                    早\n");
        mv(x,y++);
    printf(" 早                                早\n");
        mv(x,y++);
    printf(" 早                                早\n");
        mv(x,y++);
    printf(" 曲收收收收收收收收收收收收收收收收旭\n\n");
}//收旬曲旭旨早曳朽
void output_howto()
{
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
    printf("早                                                                            早");
    printf("早  How can I use this calculator?                                            早");
    printf("早  1.Enter the length of mathematical formula.                               早");
    printf("早  2.Enter operands and operators.                                           早");
    printf("早  3.Then the result will return.                                            早");
    printf("早                                                                            早");
    printf("早  ex) Input : 3 \\n 2 5 +    Output : 7.00000                                早");
    printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
}
