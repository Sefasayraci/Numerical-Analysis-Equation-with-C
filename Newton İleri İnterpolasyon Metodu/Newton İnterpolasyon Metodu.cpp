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
	printf("\t\t\t               Newton �nterpolasyon Metodu Program�\n");
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
    printf("\t| Newton �nterpolasyon Metodu  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
    getch();
    printf("\n\n");
    float x[25],y[25][25],delta[30];
    float f, h, s, xdeger;
    int k = 4;
    printf("\tX degerini girin: \n\n");
    for (int i = 0; i < k;i++) {
        printf("\tx%d=", i);
        scanf("%f",&x[i]);
    }
    printf("\n");
    printf("\tY degerini girin: \n\n");
    for (int j = 0; j < k; j++) {
        printf("\tx%d=", j);
        scanf("%f", &y[0][j]);
    }
    printf("\nHangi degere yaklasmak istiyorsunuz?:");
    scanf("%f",&xdeger);
    
    for (int i = 1; i < k;i++) {
        for (int j = 0; j < k - i; j++) {
            y[i][j] = ( y[i-1][j+1]-y[i-1][j]);
            if (y[i][j] < 0.0000005 && y[i][j]>0 || y[i][j] > -0.0000005 && y[i][j]<0) {
                y[i][j] = 0;
            }
        }
    }
    printf("\n|  |\t|xi|\t|f(x)|\t");
    for (int i = 0; i < k - 1; i++) {
        printf("|f%d(x)|\t",i+1);
    }
    printf("\n\n");
    for (int i = 0; i < k ; i++) {
        printf("%d.\t%.2f\t", i + 1,x[i]);
        for (int j = 0; j < k - i; j++) {
            printf("%.4f\t", y[j][i]);
            printf("\n");
        }
    }
    h = x[1] - x[0];
    s = (xdeger - x[0]) / h;
    for (int i = 1; i < 30; i++) {
        if (i < k) delta[i] = y[i][0];
        else delta[i] = 0;
    }
    f = 1 / h * (delta[1] + 1 / 2.0 * (2 * s - 1) * delta[2] + 1 / (6.0) * (3 * s * s - 6 * s + 2) * delta[3] + 1 / (24.0) * (4 * s * s * s - 18 * s * s + 22 * s - 6) * delta[4]);
    printf("\nf'(%f) = %.9f\n",xdeger,f);

}
