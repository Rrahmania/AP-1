#include <stdio.h> //header untuk c, digunakan untuk operasi input dan output standar, seperti printf(), scanf(), putchar(), dan getchar().
#include <conio.h>

int main(){
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World \n"); //keluaran pada c, untuk menampilkan kelayar

    printf("Masukan nama: ");
    gets(nama); //get string, untuk membaca string dalam spasi 

    printf("Masukan nim :");
    scanf("%d", &nim); //fungsi masukan pada c, untuk mengambil data inputan

    printf("Masukan kom : ");
    gets(kom);

    printf("Masukan ip : ");
    scanf("%f", &ip);

    /*Untuk Output*/
    printf("Nama : ");
    puts(nama); //put string digunakan dalam bentuk aray char, untuk menampilkan string dalam layar

    printf("Nim : %d\n ", nim);

    getchar();

    printf("Kom : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any button to conteniu ..");
    getch();


}
