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
	printf("\t\t\t                Vianello Metodu Programý\n");
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
	printf("\t Vianello Metodu \n");
	printf("\t Katsayýlar Matrisi, Deðer Matrisi ve Baþlangýç Deðer Matrisi Girmrniz Ýstenecektir. \n");
	printf("\t >>Programa Baþlatmak için Herhangi Bir Tuþa Baýnýz... \n");
	getch();
	printf("\n\n");
	int iterasyon;
	printf("\t Kaç Ýterasyon Sonucunda Sonuca Ulaþýlacaktýr?:");
	scanf("%d",&iterasyon);
	float tersMatris[3][3];
	printf("Katsayýlar Matrisini Giriniz: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("\t A%d%d giriniz: ", i+1,j+1);
			scanf("%f", &tersMatris[i][j]);
		}
	}
	
	float Vmatris[3][iterasyon];
	printf("\t V Baþlangýç Matrisini Giriniz: \n");
	for(int n=0; n<3; n++){
		printf("\t V%d Giriniz:", n+1);
		scanf("%f", &Vmatris[n][0]);
	}
	float hafiza1, hafiza2, hafiza3, hafiza4;
	for(int i=0; i<=iterasyon; i++){
		for(int j=0; j<1; j++){
			hafiza1=tersMatris[0][0]*Vmatris[0][i-1]+tersMatris[0][1]*Vmatris[1][i-1]+tersMatris[0][2]*Vmatris[2][i-1];
			hafiza2=tersMatris[1][0]*Vmatris[0][i-1]+tersMatris[1][1]*Vmatris[1][i-1]+tersMatris[1][2]*Vmatris[2][i-1];
			hafiza3=tersMatris[2][0]*Vmatris[0][i-1]+tersMatris[2][1]*Vmatris[1][i-1]+tersMatris[2][2]*Vmatris[2][i-1];
			Vmatris[j][i]=hafiza1/hafiza3;
			Vmatris[j+1][i]=hafiza2/hafiza3;
			Vmatris[j+2][i]=hafiza3/hafiza3;
		}
	}
	printf("\n\t A Matrisinin En Küçük Özdeðeri: %9f",1/hafiza3);
}
