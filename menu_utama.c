#include <windows.h>
#include <stdio.h>
#include "main_sendiri.c" //Singleplayer
#include "main_bareng.c" //Multiplayer
#include "cara_main.c" //How To
#include "papan_game.c" //papan permainan
#include "cursor.c"
#include "kocok_dadu.c"
#include "bermain.c"

void MenuUtama()
{
/*
Deskripsi		:Menampilkan menu utama permainan
I.S.			:-
F.S.			:Pilihan dimasukkan sesuai dengan pilihan user
*/
	int PilihanUser;
	system("cls");
	gotoxy(50,7); printf("To the 100!");
	gotoxy(45,9); printf("1. Bermain Sendiri");
	gotoxy(45,10); printf("2. Bermain Dengan Teman");
	gotoxy(45,11); printf("3. Cara Bermain");
	gotoxy(45,12); printf("4. Keluar Permainan");

	PilihanUser=Cursor(4,42,9); // Perintah Cursor ini nyambung ke file cursor.c

	switch(PilihanUser)
	{
		case 1:	system("cls"); BermainSendiri(); break;
		case 2:	system("cls"); BermainBersamaTeman(); break;
		case 3: system("cls"); CaraMain(); break;
		case 4: system("cls"); exit(1); break;
		default: system("cls"); printf("Tidak ada dipilihan"); getch(); system("cls"); MenuUtama(); break;
	}
}
