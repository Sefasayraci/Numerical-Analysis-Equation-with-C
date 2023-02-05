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
	printf("\t\t\t                Simpson Metodu Programý\n");
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
    printf("\t|  Simpson Metodu  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
    #define f(x) exp(-x*x)/3
    int n;
    float a,b,h,top;
    printf("\tIntegral alt sinir degeri girin: \n\n");
    scanf("%f",&a);
    printf("\tIntegral ust sinir degeri girin: \n\n");
    scanf("%f", &b);
    printf("\tN degeri girin: \n\n");
    scanf("%d", &n);
    float x[2 * n + 1];
    x[0] = a;
    h = (b-a) / (2*n);
    for (int i = 1; i <= 2*n+1; i++) {
        x[i] = x[0] + i * h;
    }
    for (int i = 0; i < 2*n+1; i++) {
        if (i == 0 || i == 2 * n) {
            top += f(x[i]);
        }
        else if (i % 2 == 0) {
            top += 2* f(x[i]);
        }
        else top+= 4* f(x[i]);
    }

    printf("\t |%.9f", (h/3)*top);
}
