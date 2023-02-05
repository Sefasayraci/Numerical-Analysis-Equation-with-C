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
	printf("\t\t\t              Newton Raphson Metodu Program�\n");
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
	printf("\t Newton Raphson Metodu \n");
	printf("\t Katsay�lar Matrisi, De�er Matrisi ve Ba�lang�� De�er Matrisi Girmrniz �stenecektir. \n");
	printf("\t >>Programa Ba�latmak i�in Herhangi Bir Tu�a Ba�n�z... \n");
	getch();
	printf("\n\n");
	#define f(x) exp(x)+x*x-2
	#define df(x) exp(x)+2*x
	int sayi=1;
	float x[sayi], epsilon;
	printf("\t Xo De�erini Giriniz: ");
	scanf("%f", &x[0]);
	printf("\t Epsilon De�erini Giriniz: ");
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
