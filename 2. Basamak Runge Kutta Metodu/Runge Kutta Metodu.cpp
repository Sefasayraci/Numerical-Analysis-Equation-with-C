#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>

using namespace std;


void  menu(), program();
main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZ� �N�VERS�TES�\n");
	printf("\t\t\t                     SAYISAL ANAL�Z\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t             Runge Kutta Metodu Program�\n");
	printf("\t\t\t     FLOAT DE�ERLERDE NOKTA YER�NE V�RG�L KULLANINIZ \n");
	printf("\t\t\t     T�RK�E D�L DESTE�� NEDEN�YLE V�RG�L KULLANILMAMALIDIR\n");
	printf("\t\t\t                    Do�. Dr. HASAN H�SEY�N SAYAN\n");
	printf("\t\t\t                    HAZIRLAYAN: SEFA SAYRACI\n");
	printf("\t\t\t                    Herhangi Bir Tu�a Bas�n�z\n");
	getch();
	menu();
}

void menu(){
	char sec;
	system("cls");
	printf("\tProgram Men�s�\n");
	printf("\t 1>Programa Gir\n");
	printf("\t 2>��k��\n");
	printf("\t   Se�iniz...\n");
	sec=getch();
	if(sec=='1') program();
	if(sec=='2') exit(1);
}
void program(){
    system("cls");
    printf("\t|  Runge Kutta Metodu  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
    getch();
    printf("\n\n");
    int i,a;
    float x[i],y[i],Xn,h,n;
    printf("\t h degeri girin: \n\n");
    scanf("%f",&h);
    printf("\t Xn degeri girin: \n\n");
    scanf("%f", &Xn);
    printf("\t Yo degeri girin: \n\n");
    scanf("%f", &y[0]);
    printf("\t Xo degeri girin: \n\n");
    scanf("%f", &x[0]);

    n = (Xn - x[0]) / h;
    for (i = 1; i < n+1 ; i++) {
        x[i+1] = x[0] + i * h;
    }
    float k1, k2;
    for (a = 0; a < n; a++) {
        k1 = h * x[a] * exp(x[a]);
        k2 = h * x[a+1] * exp(x[a+1]);
        y[a + 1] = y[a] + (k1+k2)/2;
    }

    printf("\n\t y%d degeri: %.9f",a, y[a]);

}
