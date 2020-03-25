#include <stdio.h>
#include <conio.h>
typedef int angka;
typedef float pecahan;
typedef char huruf;
void main(){
	clrscr();
	angka umur;
	pecahan pecah;
	huruf h;

huruf nama[10];
	printf("masukkan umur anda : ");scanf("%d",&umur);
	printf("Umur anda adalah %d",umur);
	printf("\n masukkan bilangan pecahan : ");scanf("%f",&pecah);
	printf("Bilangan pecahan %f",pecah);
	printf("\n masukkan huruf : ");h=getche();
	printf("\n Huruf anda %c",h);
	printf("\n masukkan nama : ");scanf("%s",nama);
	printf("Nama anda %s",nama);
	getch();
}
