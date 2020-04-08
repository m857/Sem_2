#include <stdio.h>
#include <conio.h>
//Pendeklarasian tipe data baru struct Mahasiswa
//typedef struct Mahasiswa{
//         char NIM[9];
//         char nama[30];
//      float ipk;
//        };
    struct {
        char nama[30];
        char NIM[9];
        float ipk;
        } mhs, mhs1;

int main(){
	//Buat variabel mhs bertipe data Mahasiswa
//     	Mahasiswa mhs, mhs1;
     	//clrscr();
     	printf("Data Mahasiswa 1\n");
        printf("NIM = ");scanf("%s",mhs.NIM);
     	printf("Nama = ");scanf("%s", mhs.nama);
     	printf("IPK = ");scanf("%f",&mhs.ipk);
     	printf("Data Mahasiswa 2\n");
        printf("NIM = ");scanf("%s",mhs1.NIM);
     	printf("Nama = ");scanf("%s", mhs1.nama);
     	printf("IPK = ");scanf("%f",&mhs1.ipk);

     	printf("Data Mahasiswa 1 : \n");
     	printf("NIM : %s\n",mhs.NIM);
     	printf("Nama : %s\n",mhs.nama);
     	printf("IPK : %f\n",mhs.ipk);
     	printf("Data Mahasiswa 2 : \n");
     	printf("NIM : %s\n",mhs1.NIM);
     	printf("Nama : %s\n",mhs1.nama);
     	printf("IPK : %f\n",mhs1.ipk);
     	getch();
}
