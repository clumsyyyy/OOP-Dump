/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : Overview of C Language
*Percobaan        : -
*Hari dan Tanggal : Kamis, 17 Februari 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

struct input{
    int harga_input;
    int jam_input;
} input1;



int main(){
    int data, i = 0, pilihan, j = 1;

    printf("Masukkan banyaknya data = ");
    scanf("%d", &data);

    printf("Silahkan mulai pengisian data:\n");
    struct input inputList[data];

    for (i = 0; i < data; i++){
        printf("Masukkan data ke-%d (harga, lama perjalanan) = ", i + 1);
        scanf("%d, %d", &inputList[i].harga_input, &inputList[i].jam_input);
    }

    printf("Pilihan menu\n");
    printf("1. Harga termurah\n");
    printf("2. Perjalanan tersingkat\n");
    printf("3. Tampilkan keduanya\n");

    printf("Pilih menu? (1/2/3) = ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        int index_murah = 0;
        for (i = 1; i < data; i++){
            if (inputList[i].harga_input < inputList[index_murah].harga_input){
                index_murah = i;
            }
        }
        printf("Berikut adalah detail pilihan harga termurah yang disarankan:\n");
        printf("Harga = Rp %d\n", inputList[index_murah].harga_input);
        printf("Lama perjalanan = %d Jam\n", inputList[index_murah].jam_input);
    }
    else if (pilihan == 2)
    {
        int index_cepat = 0;
        for (i = 1; i < data; i++){
            if (inputList[i].jam_input < inputList[index_cepat].jam_input){
                index_cepat = i;
            }
        }
        printf("Berikut adalah detail pilihan perjalanan tersingkat yang disarankan:\n");
        printf("Harga = Rp %d\n", inputList[index_cepat].harga_input);
        printf("Lama perjalanan = %d Jam\n", inputList[index_cepat].jam_input);
    }
    else if (pilihan == 3)
    {
        int index_murah = 0;
        for (i = 1; i < data; i++){
            if (inputList[i].harga_input < inputList[index_murah].harga_input){
                index_murah = i;
            }
        }
        int index_cepat = 0;
        for (i = 1; i < data; i++){
            if (inputList[i].jam_input < inputList[index_cepat].jam_input){
                index_cepat = i;
            }
        }
        printf("Berikut adalah detail pilihan yang disarankan:\n");
        printf("Harga termurah:\n");
        printf("Harga = Rp %d\n", inputList[index_murah].harga_input);
        printf("Lama perjalanan = %d Jam\n", inputList[index_murah].jam_input);
        printf("Perjalanan tersingkat:\n");
        printf("Harga = Rp %d\n", inputList[index_cepat].harga_input);
        printf("Lama perjalanan = %d Jam\n", inputList[index_cepat].jam_input);
    } else {
        printf("Pilihan tidak dikenali!\n");
    }
    return 0;
}
