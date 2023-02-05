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
	printf("\t\t\t             Reg�le Falsi (De�i�ken Kesen) Metodu Program�\n");
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
    printf("\t| Regula Falsi Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
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
