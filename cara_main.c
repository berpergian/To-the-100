#include <stdio.h>

void MenuUtama(); //Agar bisa kebali ke main menu tanpa warning

void CaraMain()
{
/*
Deskripsi		: Menampilkan cara bermain permainan
I.S.			: Pilihan = 3
F.S.			: Menampilkan di layar cara bermain permainan
*/
	FILE *MembukaFile;
	char Kalimat;

	if((MembukaFile=fopen("HowTo.txt","r")) != NULL)
	{
		while((Kalimat=getc(MembukaFile)) != EOF)
		{
			putch(Kalimat);
		}
		getch();
		MenuUtama();
	}
	else
	{
		printf("Tidak Muncul");
		getch();
		MenuUtama();
	}
	fclose(MembukaFile);
}
