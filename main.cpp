#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Output.h"
#pragma warning(disable:4996)

char su[150][15];
double num[5];
int leng[15];

void resetsu()
{
    int i,j;
    for(i=0;i<150;i++){
            for(j=0;j<50;j++){
                    su[i][j] = '\0';
            }
    }
}
void reset()
{
    int i;
    for(i=0;i<5;i++)num[i] = 0.0;
}

double mul(double a, int n)
{
    int i;
    double r = 1.0;
    for(i=0;i<n;i++){
        r*=a;
    }
    return r;
}

int fact(int a)
{
    int i,re=1;
    if(a<0)return -1;
    for(i=a; i>=2; i--){
        re*=i;
    }
    return re;
}
int fpoint(int arrn)
{
    int i;
    for(i=0; i<strlen(su[arrn]);i++){
        if(su[arrn][i] == '.')return i;
    }
    return i;
}
double numberlize(int arrn,int de)
{
    int len = strlen(su[arrn]);
    int i;
    double res = 0,dec=1.0;
    double dc = 0.1;
    if(de == 1){
        dec*=(-1);
        dc*=(-1);
    }
    int pointnum = fpoint(arrn);
    for(i=pointnum-1;i>=de;i--){
        res+=(su[arrn][i]-'0')*dec;
        dec*=10;
    }
    for(i=pointnum+1;i<len;i++){
        res+=(su[arrn][i]-'0')*dc;
        dc/=10;
    }
    return res;
}
void calc(int stack_start_number, int a)
{
	int i;
	int t1;
	t1 = stack_start_number;
	for(i=0; i<a; i++){
		if(su[i][0] == '+'){
			num[t1-2] = num[t1-2]+num[t1-1];
			t1--;
		}
		else if(su[i][0] == '-'){
            if(su[i][1]!='\0'){
                num[t1++] = numberlize(i,1);
                continue;
            }
			num[t1-2] = num[t1-2]-num[t1-1];
			t1--;
		}
		else if(su[i][0] == '*'){
			num[t1-2] = num[t1-2]*num[t1-1];
			t1--;
		}
		else if(su[i][0] == '/'){
			num[t1-2] = num[t1-2]/num[t1-1];
			t1--;
		}
		else if(su[i][0] == 'R'){
            num[0] = sqrt(num[0]);
		}
		else if(su[i][0] == '!'){
            num[0] = (double)fact((int)num[0]);
		}
		else if(su[i][0] == '^'){
            num[t1-2] = mul(num[t1-2],(int)num[t1-1]);
		}
		else if(su[i][0] == 'd'){
                continue;
        }
        else if(strcmp(su[i],"||") == 0){
                num[0] = (double)(num[0]);
        }
		else{
			num[t1] = numberlize(i,0);
			t1++;
		}
	}
}
int main()
{
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut,BACKGROUND_WHITE);
    output_help();
	mv(0,0);
    output_menu_line();
    mv(0,16);
    output_howto();
    start:
	int i,len;
	int ro = 0;
	while(1){
	    mv(0,10);
        SetConsoleTextAttribute(hOut,BACKGROUND_WHITE);
        output_io(num[0]);
        SetConsoleTextAttribute(hOut,BACKGROUND_WHITE);
        double temp = num[0];
        mv(3,11);
        scanf("%d",&len);
        mv(3,12);
        resetsu();
        num[0] = temp;
        for(i=0;i<len;i++){
            scanf("%s",su[i]);
            if(su[i][0] == '\\')return 0;
            if(su[i][0] == 'C'){
                reset();
                resetsu();
                goto start;
            }
        }
        calc(ro,len);
        ro=1;
    }
	return 0;
}
