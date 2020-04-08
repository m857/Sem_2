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
          char user[20];
          Date tglLogin;
          Time waktuLogin;
        };
int main(){
     Login user1;

     printf("USER 1\n");
     printf("ID : ");scanf("%d",&user1.ID);
     printf("User Name : "); scanf("%s", &user1.user);
     printf("Tanggal Login\n");
     printf("Tanggal : ");scanf("%d",&user1.tglLogin.dd);
     printf("Bulan : ");scanf("%d",&user1.tglLogin.mm);
     printf("Tahun : ");scanf("%d",&user1.tglLogin.yyyy);
     printf("Waktu Login\n");
     printf("Jam : ");scanf("%d",&user1.waktuLogin.h);
     printf("Menit : ");scanf("%d",&user1.waktuLogin.m);
     printf("Detik : ");scanf("%d",&user1.waktuLogin.s);
     printf("Terimakasih\n");

     printf("Data Anda :\n");
     printf("ID : %d\n",user1.ID);
     printf("User Name : %s\n", user1.user);
     printf("Date : %d - %d - %d\n",user1.tglLogin.dd,user1.tglLogin.mm,user1.tglLogin.yyyy);
     printf("Time : %d:%d:%d\n",user1.waktuLogin.h,user1.waktuLogin.m,user1.waktuLogin.s);

     getch();
}

