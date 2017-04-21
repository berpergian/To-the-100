#include <stdio.h>

void Pemenang(int SiapaMenang,int MenangPemain,int Jml_Pemain,int MenangAI)
{
/*
Deskripsi		: Menampilkan ke layar pemenang permainan
I.S.			: Siapa yang menang (Player atau AI), Yang menang pemain keberapa, Jumlah Player, dan Jumlah AI
F.S.			: Menampilkan ke layar 
*/
	if(SiapaMenang == 0)
	{
		gotoxy(67,17);printf("Sayang Sekali~");
		gotoxy(67,18);printf("Kamu Kalah!!");
		gotoxy(67,19);printf("Pemenangnya adalah CPU %d",MenangAI);
	}
	else if(SiapaMenang == 1)
	{
		if(Jml_Pemain > 1)
		{
			gotoxy(67,17);printf("Selamat Pemain %d!!!",MenangPemain);
			gotoxy(67,18);printf("Kamu lah takdir sang juara!");
		}
		else if(Jml_Pemain == 1)
		{
			gotoxy(67,17);printf("Waaaaaahhhhhhhh");
			gotoxy(67,18);printf("Kamu Menang!! Sugoi!");
		}
	}
}
