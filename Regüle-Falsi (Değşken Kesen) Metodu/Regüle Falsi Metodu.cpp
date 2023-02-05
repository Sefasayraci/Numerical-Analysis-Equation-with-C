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
	printf("\t\t\t             Regüle Falsi (Deðiþken Kesen) Metodu Programý\n");
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
    printf("\t| Regula Falsi Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
    int iterasyon;
    printf("\titerasyon degerini girin: ");
    scanf("%d", &iterasyon);
    float x[3];
    #define f(x) log(x)-exp(-x)
    printf("\t XO giriniz:");
    scanf("%f", &x[0]);
    printf("\t X1 giriniz:");
    scanf("%f", &x[1]);

    for (int i = 1; i <=iterasyon; i++) {
        x[2] = (((x[0]) * (f(x[1]))) - ((x[1]) * (f(x[0])))) / ((f(x[1])) - (f(x[0])));
        if (f(x[0]) * f(x[2]) < 0) x[1] = x[2];
        else x[0] = x[2];
    }
    
    printf("\n%d. iterasyon sonucu = %.9f\n", iterasyon,x[2]);

}
