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
	printf("\t\t\t               H�zland�r�lm�� Newton Metodu Program�\n");
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
    printf("\t| H�zland�r�lm�� Newton Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Ba�latmak i�in herhangi bir tu�a basiniz\n");
    getch();
    printf("\n\n");
    #define fxy(x,y) a*x+b*exp(y)-c
    #define gxy(x,y) d*(x*x)+e*(y*y)-f
    #define fx(x,y) 1
    #define gy(x,y) 2*y
    float x[30], y[30], epsilon, a, b, c, d, e, f;
    printf("\tax+be^y=c fonksiyonunda a,b ve c degerlerini girin: \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("\tdx^2+ey^2=f fonksiyonunda d,e ve f degerlerini girin: \n");
    scanf("%f%f%f", &d, &e, &f);
    printf("\tXo degerini girin: \n");
    scanf("%f", &x[0]);
    printf("\tYo degerini girin: \n");
    scanf("%f", &y[0]);
    printf("\tEpsilon degerini girin: \n");
    scanf("%f", &epsilon);
    for (int i = 0;; i++) {
        x[i + 1] = x[i] - (fxy(x[i], y[i])) / (fx(x[i], y[i]));
        y[i + 1] = y[i] - (gxy(x[i+1], y[i])) / (gy(x[i+1], y[i]));
        printf("\t(x%d,y%d)=(%f,%f) \n",i,i,x[i+1],y[i+1]);
        if (fabs(x[i + 1] - x[i]) > fabs(y[i + 1] - y[i])) {
            if (fabs(x[i + 1] - x[i]) < epsilon) {
                printf("\n(c,d) = (x%d,y%d) =(%.9f,%.9f) \n",i,i,x[i+1],y[i+1]);
                break;
            }
        }
        if (fabs(y[i + 1] - y[i]) > fabs(x[i + 1] - x[i])) {
            if (fabs(y[i + 1] - y[i]) < epsilon) {
                printf("\n(c,d) = (x%d,y%d) =(%.9f,%.9f) \n", i, i, x[i], y[i]);
                break;
            }
        }
    }

}
