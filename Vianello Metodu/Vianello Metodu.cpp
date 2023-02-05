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
	printf("\t\t\t                Vianello Metodu Program�\n");
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
	printf("\t Vianello Metodu \n");
	printf("\t Katsay�lar Matrisi, De�er Matrisi ve Ba�lang�� De�er Matrisi Girmrniz �stenecektir. \n");
	printf("\t >>Programa Ba�latmak i�in Herhangi Bir Tu�a Ba�n�z... \n");
	getch();
	printf("\n\n");
	int iterasyon;
	printf("\t Ka� �terasyon Sonucunda Sonuca Ula��lacakt�r?:");
	scanf("%d",&iterasyon);
	float tersMatris[3][3];
	printf("Katsay�lar Matrisini Giriniz: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("\t A%d%d giriniz: ", i+1,j+1);
			scanf("%f", &tersMatris[i][j]);
		}
	}
	
	float Vmatris[3][iterasyon];
	printf("\t V Ba�lang�� Matrisini Giriniz: \n");
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
	printf("\n\t A Matrisinin En K���k �zde�eri: %9f",1/hafiza3);
}
