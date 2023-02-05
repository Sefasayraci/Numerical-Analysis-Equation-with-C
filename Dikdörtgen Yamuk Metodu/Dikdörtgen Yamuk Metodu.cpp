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
	printf("\t\t\t                Diktörtgen Yamuk Metodu Programý\n");
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
    printf("\n\t Dikdortgen metoduna göre= %.9f\n", h*dikdortgen);
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n)yamuk += fx[i] / 2;
        else yamuk += fx[i];
    }
    printf("\n\t Yamuk metoduna göre= %.9f\n", h * yamuk);


}
