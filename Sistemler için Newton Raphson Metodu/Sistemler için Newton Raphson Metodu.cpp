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
	printf("\t\t\t                Sistemler i�in Newton Raphson Metodu Program�\n");
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
    printf("\t| Sistemler i�in Newton Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
    getch();
    printf("\n\n");
    #define fxy(x,y) a*(x*x)+b*(y*y)-c
    #define gxy(x,y) d*(x*x)-e*(y*y)-f
    #define fx(x) a*2*x
    #define fy(y) b*2*y
    #define gx(x) d*2*x
    #define gy(y) (-2)*y*e
    int iterasyon;
    float a, b, c, d, e, f;
    printf("\tax^2+by^2=c fonksiyonunda a,b ve c degerlerini girin: \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("\tdx^2-ey^2=f fonksiyonunda d,e ve f degerlerini girin: \n");
    scanf("%f%f%f", &d, &e, &f);
    printf("\iterasyon degerini girin: \n");
    scanf("%d", &iterasyon);
    float x[iterasyon], y[iterasyon];
    printf("\tXo degerini girin: \n");
    scanf("%f", &x[0]);
    printf("\tYo degerini girin: \n");
    scanf("%f", &y[0]);
    
    for (int i = 0;i<iterasyon; i++) {
        float fxy = fxy(x[i], y[i]);
        float gxy = gxy(x[i], y[i]);
        float fx = fx(x[i]);
        float fy = fy(y[i]);
        float gx = gx(x[i]);
        float gy = gy(y[i]);

        x[i + 1] = x[i] - (((fxy * gy) - (gxy * fy)) / ((fx * gy) - (fy * gx)));
        y[i + 1] = y[i] - (((gxy * fx) - (fxy * gx)) / ((fx * gy) - (fy * gx)));       
    }
    printf("\n\tYaklasik Cozum(x%d,y%d) = (%.9f,%.9f)\n", iterasyon, iterasyon, x[iterasyon], y[iterasyon]);
}




