#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>
using namespace std;

bool kontrol1(float a[3][3]) {
    bool k1 = fabs(a[0][0]) > fabs(a[0][1]) + fabs(a[0][2]);
    bool k2 = fabs(a[1][1]) > fabs(a[1][0]) + fabs(a[1][2]);
    bool k3 = fabs(a[2][2]) > fabs(a[2][0]) + fabs(a[2][1]);
    if (k1 == true && k2 == true && k3 == true) return true;
    else return false;
}

void  menu(), program();
main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t                Gauss Seidal Metodu Programý\n");
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
    printf("\t| Gauss Seidal Metodu |\n");
    printf("\t|-------------------------------\n");
    printf("\t>>Baþlatmak için herhangi bir tuþa basiniz\n");
    getch();
    printf("\n\n");
    int iterasyon;
    printf("\iterasyon degerini girin: \n");
    scanf("%d", &iterasyon);
    float katsayilar[3][3];
    printf("\t katsayilar matrisini girin: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\t A%d%d giriniz:", i + 1, j + 1);
            scanf("%f", &katsayilar[i][j]);
        }
    }
    if (kontrol1(katsayilar) == true) goto ileri;
    else printf("\t girilen matris kosegensel degil! Bir tusa basin"); getch(); program();
    ileri:
    float deger[3];
    printf("\t deger matrisini girin: \n");
    for (int k = 0; k < 3; k++) {
        printf("\t B%d giriniz:", k + 1);
        scanf("%f", &deger[k]);
    }
    float xdeger[3][iterasyon];
    printf("\t Baslangic deger matrisini girin: \n");
    for (int m = 0; m < 3; m++) {
        printf("\t X%d giriniz:", m + 1);
        scanf("%f", &xdeger[m][0]);
    }
    for (int t = 1; t <= iterasyon ; t++) {
        xdeger[0][t] = (deger[0] - ((katsayilar[0][1] * xdeger[1][t - 1]) + (katsayilar[0][2] * xdeger[2][t - 1]))) / katsayilar[0][0];
        xdeger[1][t] = (deger[1] - ((katsayilar[1][0] * xdeger[0][t]) + (katsayilar[1][2] * xdeger[2][t - 1]))) / katsayilar[1][1];
        xdeger[2][t] = (deger[2] - ((katsayilar[2][0] * xdeger[0][t]) + (katsayilar[2][1] * xdeger[2][t]))) / katsayilar[2][2];
    }
    for (int a = 1; a <= iterasyon; a++) {
        printf("\n%d. iterasyon sonucu = %.9f | %.9f | %.9f\n", a,xdeger[0][a], xdeger[1][a], xdeger[2][a]);
    }

}
