#include <stdio.h>

float hitungKecepatan(float jarak, float waktu){
    float kecepatan = jarak/waktu;
    return kecepatan;
}
float LuasPersegi(float sisi){
    float luas = sisi * sisi;
    return luas;
}
float KelilingPersegi(float sisi){
    float keliling = 4 * sisi;
    return keliling;
}

int main(){
    int menu;
    printf("\n----------------------------------------------------");
    printf("\n||  Program Menghitung Kecepatan dan Menghitung   ||");
    printf("\n||           Luas dan Keliling Persegi            ||");
    printf("\n----------------------------------------------------");
    printf("\nPilih rumus yang digunakan: ");
    printf("\n 1. Kecepatan");
    printf("\n 2. Luas dan Keliling Persegi");
    printf("\n----------------------------------------------------");
    printf("\nInputkan pilihan: ");
    while (scanf("%d", &menu) == 0 || menu < 1 || menu > 2 )
    {
        printf("--------------------------------------------------------------------------");
        printf("\nKarakter yang Anda inputkan salah!");
        printf("\nSilahkan memilih angka 1 atau 2 untuk memilih rumus  ");
        printf("\n------------------------------------------------------------------------");
        printf("\nMasukkan angka untuk memilih rumus yang akan digunakan : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    system("clear");


    if(menu==1){
    printf("\n---------------------------------------------------");
    printf("\n||             Menghitung Kecepatan              ||");
    printf("\n---------------------------------------------------");
    float jarak;
    printf("\n\nMasukan nilai jarak : ");
    scanf("%f",&jarak);
    float waktu;
    printf("\nMasukan nilai waktu : ");
    scanf("%f",&waktu);
    printf("\n-----------------------------------------------");
    printf("\nKecepatannya adalah %.2f m/s", hitungKecepatan(jarak,waktu));
    printf("\n\nProgram Telah Dijalankan!\n\n\n");
    printf("\n-----------------------------------------------");

    }else if(menu==2){
    printf("\n-------------------------------------------------");
    printf("\n||    Menghitung Luas dan Keliling Persegi     ||");
    printf("\n-------------------------------------------------");
    float sisi;
    printf("\n\nMasukan nilai sisi persegi : ");
    scanf("%f", &sisi);
    printf("\n-----------------------------------------------");
    printf("\n\nLuasnya adalah %.2f", LuasPersegi(sisi));
    printf("\nKelilingnya adalah %.2f", KelilingPersegi(sisi));
    printf("\n\nProgramm Telah Dijalankan");
    printf("\n-----------------------------------------------");
    }else{
    printf("\nAngka salah!");
    }
    return 0;
}


