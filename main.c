/*
	Nama Program	: main.c
	Deskripsi		: Tugas Besar DDP, Permainan "Ular Tangga"
	Nama			: Eki Fauzi Firdaus & Muhammad Ganjar Imanudin
	Compiler		: MinGW
*/

#include <stdio.h>
#include <windows.h>
#include "gotoxy.c"
#include "menu_utama.c" //File untuk menampilkan menu utama game


int main()
{
    system("MODE 120,50");
    MenuUtama(); //Menampilkan menu utama game
    getch();

    return 0;
}
