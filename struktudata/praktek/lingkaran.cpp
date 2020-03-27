#include <stdio.h>
#include <conio.h>
#define phi 22/7
//langsung dianggap variabel 'lingkaran'
struct {
  float jari2;
  float keliling;
  float luas;
} lingkaran;
//fungsi void untuk menghitung luas ingkaran
/*void*/ int luasLingkaran(){
//langsung menggunakan luas lingkaran asli
     lingkaran.luas = lingkaran.jari2 * lingkaran.jari2 * phi;
     printf("\nLuas lingkaran = %f",lingkaran.luas);
}
//fungsi yang mengembalikan nilai float untuk menghitung keliling lingkaran
float kelLingkaran(float j){
      return 2*phi*lingkaran.jari2;
}
int main(){
//     clrscr();
     printf("Jari-jari = ");scanf("%f",&lingkaran.jari2);
//panggil fungsi luasLingkaran
     luasLingkaran();
//panggil fungsi keliling, nilai kembaliannya dikirim ke keliling lingkaran asli
     lingkaran.keliling = kelLingkaran(lingkaran.jari2);
//tampilkan keliling lingkaran asli
     printf("\nKeliling lingkaran = %f",lingkaran.keliling);
     getch();
}

