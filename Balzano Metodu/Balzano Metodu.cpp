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
	printf("\t\t\t                Balzano Metodu Program�\n");
	printf("\t\t\t     FLOAT DE�ERLERDE NOKTA YER�NE V�RG�L KULLANINIZ \n");
	printf("\t\t\t     T�RK�E D�L DESTE�� NEDEN�YLE V�RG�L KULLANILMAMALIDIR\n");
	printf("\t\t\t                    Do�. Dr. HASAN H�SEY�N SAYAN\n");
	printf("\t\t\t                    HAZIRLAYAN: SEFA SAYRACI\n");
	printf("\t\t\t                    Herhangi Bir Tu�a Bas�n�z\n");
	getch();
	menu();
}

#define EP 0.01

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
	
	double a = 0, b = 0.5;
    #define f(x) 3*x+sin(x)+2

    double c = a;
    while ((b - a) >= EP) {
        c = (a + b) / 2;
        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "K�k�n De�eri : " << c;

}
