#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>

using namespace std;


void  menu(), program();

	float sdegerHesapla(float gelen1, int gelen2)
	{
		float hafiza = gelen1;
		for (int i =1; i< gelen2; i++) hafiza *= (gelen1 - i);
		return hafiza;
	}
	int faktoriyelhesabi(int gelen)
	{
		int fakt = 1;
		for (int i = 2; i<= gelen; i++) fakt *= i;
	}
	float hesap(float x, float y, float z)
	{
		float sayac=1;
		for(int i=1; i<y; i++){
			sayac += (sdegerHesapla(1.0/x, i)*pow(z,i)/faktoriyelhesabi(i));
		}
					return sayac;
	}
	
main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZ� �N�VERS�TES�\n");
	printf("\t\t\t                     SAYISAL ANAL�Z\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t                     Hata T�rleri (Ba��l ve Mutlak Hata) Program�\n");
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
    printf("\t|  Hata T�rleri (Ba��l ve Mutlak Hata)  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
    getch();
    printf("\n\n");
	
	float acilim, kok, xdeger, hesaplama, gercekdeger, mutlak, bagil;
	printf("\t A��l�m Serisinde �lk Ka� Terimden Faydalanacaks�n�z? : ");
	scanf("%f", &acilim);
	printf("\t �fadedeki K�k�n Derecesi? : ");
	scanf("%f", &kok);
	printf("\t (1+x) �fadesinde x De�eri? : ");
	scanf("%f", &xdeger);
	hesaplama = hesap(kok,acilim,xdeger);
	gercekdeger=pow((1+xdeger),(1.0/kok));
	mutlak=fabs(gercekdeger-hesaplama);
	bagil=fabs(mutlak/gercekdeger);
	printf("\n\t%f^(1/%d) De�eri Hesab�nda\n", 1+xdeger,(int)kok);
	printf("\t Mutlak Hata: %9f\n", mutlak);
	printf("\t Ba��l Hata: %9f\n", bagil);
	
	}
