#include <stdio.h>
#include <conio.h>
typedef struct Date{
          int dd;
          int mm;
          int yyyy;
        };

typedef struct Time{
          int h;
          int m;
          int s;
        };

typedef struct Login{
          int ID;
          Date tglLogin;
          Time waktuLogin;
        };
int main(){
     Login user[3];

     //3 user
     for(int i=0;i<3;i++){
         printf("\nUSER ke-%d\n",i+1);
         printf("ID : ");scanf("%d",&user[i].ID);
         printf("Tanggal Login\n");
         printf("Hari : ");scanf("%d",&user[i].tglLogin.dd);
         printf("Bulan : ");scanf("%d",&user[i].tglLogin.mm);
         printf("Tahun : ");scanf("%d",&user[i].tglLogin.yyyy);
         printf("Waktu Login\n");
         printf("Jam : ");scanf("%d",&user[i].waktuLogin.h);
         printf("Menit : ");scanf("%d",&user[i].waktuLogin.m);
         printf("Detik : ");scanf("%d",&user[i].waktuLogin.s);
         printf("Terimakasih Atas Pengisiannya\n");

         printf("\nData User ke-%d:\n",i+1);
         printf("Login ID : %d\n",user[i].ID);
         printf("Login Date : %d - %d - %d\n",user[i].tglLogin.dd,user[i].tglLogin.mm,user[i].tglLogin.yyyy);
         printf("Login Time : %d:%d:%d\n",user[i].waktuLogin.h,user[i].waktuLogin.m,user[i].waktuLogin.s);
     }

     getch();
}


//Buatlah program menu yang berisi data-data KTP penduduk yang disimpan dalam array struct 1 dimensi dan dapat dilakukan penambahan data, pencarian data, penampilan data dan penghapusan data.

