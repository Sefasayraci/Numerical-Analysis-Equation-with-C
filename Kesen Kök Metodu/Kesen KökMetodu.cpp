#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include <iostream>

using namespace std;

double secant_method(double ,double ,double ,int* );
double f(double );

void  menu(), program();
main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	printf("\t\t\t                     GAZÝ ÜNÝVERSÝTESÝ\n");
	printf("\t\t\t                     SAYISAL ANALÝZ\n");
	printf("\t\t\t                     PROGRAM KODLARI\n");
	printf("\t\t\t              Kesen Kök Metodu Programý\n");
	printf("\t\t\t           FLOAT DEÐERLERDE NOKTA KULLANINIZ \n");
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

    double x1,x2,e;
    int iteration_no=0;
    cout<<"\n Birinci baslangic yaklasimini girin: ";
    cin>>x1;    
    cout<<"\n Ikinci baslangic yaklasimini girin: ";
    cin>>x2;
    cout<<"\n Dogruluk derecesini girin:";
    cin>>e;
    
    double res=secant_method(x1, x2, e, &iteration_no);
    cout<<"\n Verilen denklemin koku "<<res; 
    cout<<"\n Iterasyon sayisi "<<iteration_no;
 
    
} 
  
double secant_method(double x1, double x2, double e, int* iteration_no) 
{ 
    double xm1,xm2,k,f1,f2;
  
  do
  {
      f1=f(x1);
      f2=f(x2);

            *iteration_no+=1; 
            xm1 = (x1 * f2 - x2 * f1) / (f2 - f1); 
            k = f(x1) * f(xm1); 
            x1 = x2; 
            x2 = xm1; 
            if (k == 0) break;                
            xm2 = (x1 * f2 - x2 * f1) / (f2 - f1);
            
  }while( fabs(xm2 - xm1) >= e); 
  return xm1;
}
double f(double no) 
{ 
    double res = pow(no, 6) - no - 1; 
    return res; 

}
