#include <stdio.h>

int Cursor(int BanyakPilihan,int x,int y)
{
/*
Deskripsi		: Modul petunjuk dalam pemilihan menu
Input			: Banyak pilihan, koordinat X dan Y
Output			: Pilihan yang dipilih oleh user

Ide awal modul cursor ini dari Waffi Faturrahman JTK 2014 D-4
Dengan pengembangan algoritma dan implementasi ke bahasa C oleh saya (Ganjar)
*/
	int Pilih=1,ysel=(BanyakPilihan+y-1)-y;
	char cursor;
	gotoxy(x,y); printf("%c",62);

	do
	{
		cursor=getch();
		if(cursor == 80)
		{
			if(Pilih+1 > BanyakPilihan)
			{
				gotoxy(x,y); printf(" ");
				y=y-ysel;
				Pilih=1;
				gotoxy(x,y); printf("%c",62);
			}
			else
			{
				gotoxy(x,y); printf(" ");
				Pilih ++;
				y++;
				gotoxy(x,y); printf("%c",62);
			}
		}

		if(cursor == 72)
		{
			if(Pilih-1 == 0)
			{
				gotoxy(x,y); printf(" ");
				y=y+ysel;
				Pilih=BanyakPilihan;
				gotoxy(x,y); printf("%c",62);
			}
			else
			{
				gotoxy(x,y); printf(" ");
				Pilih --;
				y --;
				gotoxy(x,y); printf("%c",62);
			}
		}
	}while(cursor != 13);

	return Pilih;
}
