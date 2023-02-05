#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>
using namespace std;

void  menu(), program();

int faktoriyel(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
float ileriye(float m, int n) {
    float k = m;
    for (int i = 1; i < n; i++) {
        k = k * (m - i);
    }
    return k;
}
float geriye(float m, int n) {
    float k = m;
    for (int i = 1; i < n; i++) {
        k = k * (m + i);
    }
    return k;
}


main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t               Newton Geri Ýnterpolasyon Metodu Programý\n");
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
    printf("\t|   Newton Geri Ýnterpolasyon Metodu  |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
    int n;
    printf("\tKac adet X degeri girilecek: \n\n");
    scanf("%d",&n);
    float x[20], y[20][20],yaklasim;
    printf("\n\tX degerlerini giriniz: \n");
    for (int a = 0; a < n; a++) {
        printf("\tx%d=", a);
        scanf("%f", &x[a]);
    }
    printf("\n\tf(x) degerlerini giriniz: \n");
    for (int b = 0; b < n; b++) {
        printf("\tf%d=", b);
        scanf("%f", &y[b]);
    }
    printf("\nHangi degere yaklasmak istiyorsunuz?:");
    scanf("%f",&yaklasim);
    if (n % 2 == 0) {
        if (yaklasim < x[n/2]) {
            for (int i = 1; i < n; i++) {
                for (int j = 0; j < n - i;j++) {
                    y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
                }
            }
            printf("\nÝleri Fark Tablosu:\n");
            for (int i = 0; i < n; i++) {
                printf("%.4f\t",x[i]);
                for (int j = 0; j < n - i; j++) {
                    printf("%.4f\t", y[i][j]);
                }
                printf("\n\n");
            }
            float sonuc = y[0][0];
            float m;
            m = (yaklasim - x[0]) / (x[1] - x[0]);
            for (int i = 1; i < n; i++) {
                sonuc += (ileriye(m, i) * y[0][i]) / faktoriyel(i);
            }
            printf("\nx=%f degerindeki yaklasim %.9f\n", yaklasim, sonuc);
            getch();
        }
        else {
            for (int i = 1; i < n; i++) {
                for (int j = n-1; j >= i; j--) {
                    y[j][i] = y[j][i - 1] - y[j-1][i - 1];
                }
            }
            printf("\nÝleri Fark Tablosu:\n");
            for (int i = 0; i < n; i++) {
                printf("%.4f\t", x[i]);
                for (int j = 0; j <= i; j++) {
                    printf("%.4f\t", y[i][j]);
                }
            }
            float T = y[n - 1][0];
            float m = (yaklasim - x[n-1]) / (x[1] - x[0]);
            for (int i = 1; i < n; i++) {
                T += (geriye(m, i) * y[n-1][i]) / faktoriyel(i);
            }
            printf("\n fonksiyonun x=%.4f'deki yaklasimi: %.9f\n", yaklasim, T);
            getch();
        }
    }  

}
