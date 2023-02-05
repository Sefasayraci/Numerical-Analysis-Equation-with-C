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
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t               Euler Metodu Programý\n");
	printf("\t\t\t     FLOAT DEÐERLERDE NOKTA YERÝNE VÝRGÜL KULLANINIZ \n");
	printf("\t\t\t     TÜRKÇE DÝL DESTEÐÝ NEDENÝYLE VÝRGÜL KULLANILMAMALIDIR\n");
	printf("\t\t\t                    Doç. Dr. HASAN HÜSEYÝN SAYAN\n");
	printf("\t\t\t                    HAZIRLAYAN: SEFA SAYRACI\n");
	printf("\t\t\t                    Herhangi Bir Tuþa Basýnýz\n");
	getch();
	menu();
}



void menu(){
	char sec;
	system("cls");
	printf("\tProgram Menüsü\n");
	printf("\t 1>Programa Gir\n");
	printf("\t 2>Çýkýþ\n");
	printf("\t   Seçiniz...\n");
	sec=getch();
	if(sec=='1') program();
	if(sec=='2') exit(1);
}


void program(){
	
    system("cls");
    printf("\t|  Euler Metodu  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
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
    for (i = 0; i <= n; i++) {
        x[i+1] = x[0] + (i+1) * h;
    }
    for (a = 0; a <= n; a++) {
        y[a + 1] = y[a] + h*x[a]*exp(x[a])-y[a]*y[a];
    }

    printf("\n\t y%d degeri: %.9f",a, y[a]);
}
