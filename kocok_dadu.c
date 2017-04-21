#include <stdio.h>
#include <time.h>

void Dadu1(int angka);
void Dadu2(int angka);
void Dadu3(int angka);
void Dadu4(int angka);
void Dadu5(int angka);
void Dadu6(int angka);

int KocokDadu()
{
/*
Deskripsi		: Modul mengocok dadu pada saat bermain
Input			: -
Output			: Dadu yang terpilih secara acak
*/
    int dadu=rand()%6+1;
    switch(dadu)
    {
    	case 1: Dadu1(dadu); break;
        case 2: Dadu2(dadu); break;
        case 3: Dadu3(dadu); break;
        case 4: Dadu4(dadu); break;
        case 5: Dadu5(dadu); break;
        case 6: Dadu6(dadu); break;
    }

    return dadu;
}

void Dadu1(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 1
I.S.			: Angka yang terpilih secara acak adalah 1
F.S.			: menampilkan ke layar dadu berangka 1
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|         |\n");
    gotoxy(67,14);printf("|   (-)   |\n");
    gotoxy(67,15);printf("|         |\n");
    gotoxy(67,16);printf("+---------+\n");
}


void Dadu2(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 2
I.S.			: Angka yang terpilih secara acak adalah 2
F.S.			: menampilkan ke layar dadu berangka 2
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|(-)      |\n");
    gotoxy(67,14);printf("|         |\n");
    gotoxy(67,15);printf("|      (-)|\n");
    gotoxy(67,16);printf("+---------+\n");
}

void Dadu3(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 3
I.S.			: Angka yang terpilih secara acak adalah 3
F.S.			: menampilkan ke layar dadu berangka 3
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|      (-)|\n");
    gotoxy(67,14);printf("|   (-)   |\n");
    gotoxy(67,15);printf("|(-)      |\n");
    gotoxy(67,16);printf("+---------+\n");
}

void Dadu4(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 4
I.S.			: Angka yang terpilih secara acak adalah 4
F.S.			: menampilkan ke layar dadu berangka 4
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|(-)   (-)|\n");
    gotoxy(67,14);printf("|         |\n");
    gotoxy(67,15);printf("|(-)   (-)|\n");
    gotoxy(67,16);printf("+---------+\n");
}

void Dadu5(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 5
I.S.			: Angka yang terpilih secara acak adalah 5
F.S.			: menampilkan ke layar dadu berangka 5
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|(-)   (-)|\n");
    gotoxy(67,14);printf("|   (-)   |\n");
    gotoxy(67,15);printf("|(-)   (-)|\n");
    gotoxy(67,16);printf("+---------+\n");
}

void Dadu6(int angka)
{
/*
Deskripsi		: Menampilkan ke layar dadu berangka 6
I.S.			: Angka yang terpilih secara acak adalah 6
F.S.			: menampilkan ke layar dadu berangka 6
*/
	gotoxy(67,12);printf("+---------+\n");
    gotoxy(67,13);printf("|(-)   (-)|\n");
    gotoxy(67,14);printf("|(-)   (-)|\n");
    gotoxy(67,15);printf("|(-)   (-)|\n");
    gotoxy(67,16);printf("+---------+\n");
}
