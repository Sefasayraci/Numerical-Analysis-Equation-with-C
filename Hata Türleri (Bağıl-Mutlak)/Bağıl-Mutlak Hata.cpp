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
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t                     Hata Türleri (Baðýl ve Mutlak Hata) Programý\n");
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
    printf("\t|  Hata Türleri (Baðýl ve Mutlak Hata)  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
	
	float acilim, kok, xdeger, hesaplama, gercekdeger, mutlak, bagil;
	printf("\t Açýlým Serisinde Ýlk Kaç Terimden Faydalanacaksýnýz? : ");
	scanf("%f", &acilim);
	printf("\t Ýfadedeki Kökün Derecesi? : ");
	scanf("%f", &kok);
	printf("\t (1+x) Ýfadesinde x Deðeri? : ");
	scanf("%f", &xdeger);
	hesaplama = hesap(kok,acilim,xdeger);
	gercekdeger=pow((1+xdeger),(1.0/kok));
	mutlak=fabs(gercekdeger-hesaplama);
	bagil=fabs(mutlak/gercekdeger);
	printf("\n\t%f^(1/%d) Deðeri Hesabýnda\n", 1+xdeger,(int)kok);
	printf("\t Mutlak Hata: %9f\n", mutlak);
	printf("\t Baðýl Hata: %9f\n", bagil);
	
	}
