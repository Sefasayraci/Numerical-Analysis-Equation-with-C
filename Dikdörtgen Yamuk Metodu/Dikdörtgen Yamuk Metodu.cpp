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
	printf("\t\t\t                Dikt�rtgen Yamuk Metodu Program�\n");
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
    #define f(x) exp(-x*x)/3
    int n;
    float h,b,x[50], dikdortgen,yamuk=0;
    printf("\tIntegral alt sinir degeri girin: ");
    scanf("%f",&x[0]);
    printf("\tIntegral ust sinir degeri girin: ");
    scanf("%f", &b);
    printf("\tN degeri girin: ");
    scanf("%d", &n);
    h = (b-x[0]) / n;
    printf("\n\t h degeri su sekilde bulunur:%f\n",h);
    for (int i = 0; i < n; i++) {
        x[i] = x[0] + i * h;
    }
    float fx[n + 1];
    for (int i = 0; i <= n; i++) {
        fx[i] = f(x[i]);
    }
    for (int i = 0; i < n; i++) {
        dikdortgen += fx[i];
    }
    printf("\n\t Dikdortgen metoduna g�re= %.9f\n", h*dikdortgen);
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n)yamuk += fx[i] / 2;
        else yamuk += fx[i];
    }
    printf("\n\t Yamuk metoduna g�re= %.9f\n", h * yamuk);


}
