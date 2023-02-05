#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

void  menu(), program();
main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t                     Gauss Eliminasyom Programý\n");
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
    printf("\t| Gauss Elimination Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
    int i, j, k, n; 
    float a[10][10], b, x[10];
    printf("\n matris boyutunu girin: ");
    scanf("%d", &n);
    printf("\n matrisi girin:\n");
    printf("B Matris Girdisi Ýlk Satýrý Bitirdikten Sonra Gireceksiniz:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << "A[" << i << ", " << j << " ]=";
            cin >> a[i][j];
        }
    }

    for (j = 1; j <= n; j++) {
        for (i = 1; i <= n; i++) {
            if (i != j) {
                b = a[i][j] / a[j][j];
                for (k = 1; k <= n + 1; k++) {
                    a[i][k] = a[i][k] - b * a[j][k];
                }
            }
        }
    }
    cout << "\nCozum:\n";
    for (i = 1; i <= n; i++) {
        x[i] = a[i][n + 1] / a[i][i];
        cout << "x" << i << "=" << x[i] << " ";
    }
    

}
