#include <stdio.h>
#include <conio.h>
typedef int angka;
typedef float pecahan;
typedef char huruf;
int main(){
	angka umur;
	pecahan pecah;
    huruf h;

huruf nama[10];
	printf("masukkan umur anda : ");scanf("%d",&umur);
	printf("Umur anda adalah %d",umur);
	printf("\nmasukkan bilangan pecahan : ");scanf("%f",&pecah);
	printf("Bilangan pecahan %f",pecah);
	printf("\nmasukkan huruf : ");h=getche();
	printf("\nHuruf anda %c",h);
	printf("\nmasukkan nama : ");scanf("%s",nama);
	printf("Nama anda %s",nama);
	getch();
}
