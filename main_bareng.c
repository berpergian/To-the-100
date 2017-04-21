#include <stdio.h>

void PapanPermainan();
void Permainan(int PemainYangBermain,int AIYangBermain);

void BermainBersamaTeman()
{
/*
Deskripsi		: Menampilkan jumlah player yang akan bermain
I.S.			: User memilih bermain bersama teman
F.S.			: Memanggil modul bermain
*/
    int JumlahPemain;
    gotoxy(45,8); printf("Pilih Jumlah Pemain:");
    gotoxy(45,9); printf("1. 2 Pemain");
	gotoxy(45,10); printf("2. 3 Pemain");
	gotoxy(45,11); printf("3. 4 Pemain");
	JumlahPemain=Cursor(3,42,9)+1;
	system("cls");
    Permainan(JumlahPemain,0);
}
