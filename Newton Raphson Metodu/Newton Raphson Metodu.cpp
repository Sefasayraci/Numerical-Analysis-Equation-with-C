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
	printf("\t\t\t              Newton Raphson Metodu Programý\n");
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
	printf("\t Newton Raphson Metodu \n");
	printf("\t Katsayýlar Matrisi, Deðer Matrisi ve Baþlangýç Deðer Matrisi Girmrniz Ýstenecektir. \n");
	printf("\t >>Programa Baþlatmak için Herhangi Bir Tuþa Baýnýz... \n");
	getch();
	printf("\n\n");
	#define f(x) exp(x)+x*x-2
	#define df(x) exp(x)+2*x
	int sayi=1;
	float x[sayi], epsilon;
	printf("\t Xo Deðerini Giriniz: ");
	scanf("%f", &x[0]);
	printf("\t Epsilon Deðerini Giriniz: ");
	scanf("%f", &epsilon);
	for(int a=1; ; a++)
	{
		x[a]=(x[a-1])-((f(x[a-1]))/(df(x[a-1])));
		if( fabs((x[a])-(x[a-1]))<epsilon){
			printf("\n\t c = x%d = %9f",a-1,x[a]);
			break;
		}
	}
}
