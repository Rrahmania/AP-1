#include <stdio.h> //header untuk c
#include <conio.h>

int main(){
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World \n"); //keluaran pada c

    printf("Masukan nama: ");
    gets(nama); //get string

    printf("Masukan nim :");
    scanf("%d", &nim); //fungsi masukan pada c

    printf("Masukan kom : ");
    gets(kom);

    printf("Masukan ip : ");
    scanf("%f", &ip);

    /*Untuk Output*/
    printf("Nama : ");
    puts(nama); //put string digunakan dalam bentuk aray char

    printf("Nim : %d\n ", nim);

    getchar();

    printf("Kom : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any button to conteniu ..");
    getch();


}