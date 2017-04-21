#include <stdio.h>

void Permainan(int PemainYangBermain,int AIYangBermain);

void BermainSendiri()
{
/*
Deskripsi		: Menampilkan jumlah AI yang akan bermain
I.S.			: User memilih bermain sendiri
F.S.			: Mendapatkan jumlah AI yang bermain
*/
    int JumlahAI;
    gotoxy(45,8); printf("Pilih Jumlah CPU yang akan dilawan:");
    gotoxy(45,9); printf("1. VS 1 CPU");
	gotoxy(45,10); printf("2. VS 2 CPU");
	gotoxy(45,11); printf("3. VS 3 CPU");
	JumlahAI=Cursor(3,42,9);
	system("cls");
	Permainan(1,JumlahAI);
}
