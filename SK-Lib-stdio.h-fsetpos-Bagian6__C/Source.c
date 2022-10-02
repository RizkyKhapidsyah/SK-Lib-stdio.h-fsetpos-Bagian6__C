#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    //buka file dalam mode tulis dan baca
    FILE* pFile = fopen("test.txt", "w+");
    fpos_t position;
    int c;

    //dapatkan posisi awal
    fgetpos(pFile, &position);
    fputs("Halo Manusia!.", pFile);

    //atur posisi ke awal
    fsetpos(pFile, &position);

    //menampilkan isi file
    c = getc(pFile);

    while (c != EOF) {
        putchar(c);
        c = getc(pFile);
    }

    //tutup file
    fclose(pFile);

    _getch();
    return 0;
}