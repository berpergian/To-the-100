#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

void setcolor (unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

/*MODUL UNTUK MEMBUAT HEADER===================================================================================================*/
void Header()
{
    int x,y,i,j;

    //Box Pertama
    gotoxy(x=66,y=4); printf("��������������������������������������������������ͻ");
    for (i=0;i<3;i++)
    {
        gotoxy(x=66,y=5+i); printf("�                                                  �");
    }
    gotoxy(x=66,y=5+i); printf("��������������������������������������������������ͼ");
    gotoxy(x=70,y=(1+i)); printf("�Ular Tangga�");
    gotoxy(x=83,y=(3+i)); printf("Menuju 100!");

    //Box kedua
    gotoxy(x=66,y=7+i); printf("��������������������������������������������������ͻ");
    for (j=0;j<(43-(7+i));j++)
    {
        gotoxy(x=66,y=(8+i)+j); printf("�                                                  �");
    }
    gotoxy(x=66,y=((8+i)+j)); printf("��������������������������������������������������ͼ");
    gotoxy(x=68,y=(8+i+(j-7))); printf("Legend:");
    gotoxy(x=68,y=(9+i+(j-6))); printf("� : Kepala Ular");
    gotoxy(x=68,y=(10+i+(j-5))); printf("� : Ekor Ular");
    gotoxy(x=68,y=(11+i+(j-4))); printf("� : Tangga");
}

/*MODUL UNTUK MEMBUAT PAPAN====================================================================================================*/
void Papan()
{
    int x,y,i,j,nomor;
    //board vertikal
    for (i=0;i<=10;i++)
    {
        for (j=0;j<39;j++)
        {
            gotoxy(x=4+(6*i),y=5+j); printf("�");
        }
    }
    //board horizontal
    for (i=0;i<11;i++)
    {
        for (j=0;j<10;j++)
        {
            gotoxy(x=4+(6*j),y=4+(4*i));
            printf("�������");
        }
    }
    //NOMOR
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            gotoxy(x=5+(6*j),y=41-(4*i));
            nomor=((i+1)/2)*20+((i+1)%2)+(pow(-1,((i+1)-1))*((j+1)-1));
            printf("%d",nomor);
        }
    }
}

/*MODUL UNTUK MENENTUKAN POSISI ULAR DAN TANGGA===============================================================================*/
void PosisiUlarDanTangga()
{
    int x,y;
    //Posisi Ular (Ekor)
    gotoxy(x=45,y=41); setcolor(8); printf("�"); setcolor(7);
    gotoxy(x=15,y=37); setcolor(9); printf("�"); setcolor(7);
    gotoxy(x=27,y=33); setcolor(10); printf("�"); setcolor(7);
    gotoxy(x=45,y=29);  setcolor(11); printf("�"); setcolor(7);
    gotoxy(x=9,y=21); setcolor(12); printf("�"); setcolor(7);
    gotoxy(x=51,y=13); setcolor(13); printf("�"); setcolor(7);
    gotoxy(x=39,y=13); setcolor(14); printf("�"); setcolor(7);
    gotoxy(x=21,y=13); setcolor(15); printf("�"); setcolor(7);
    //Posisi Ular ( Kepala)
    gotoxy(x=27,y=37); setcolor(8); printf("�"); setcolor(7);
    gotoxy(x=15,y=17); setcolor(9); printf("�"); setcolor(7);
    gotoxy(x=45,y=9); setcolor(10); printf("�"); setcolor(7);
    gotoxy(x=45,y=21); setcolor(11); printf("�"); setcolor(7);
    gotoxy(x=27,y=17); setcolor(12); printf("�"); setcolor(7);
    gotoxy(x=51,y=5); setcolor(13); printf("�"); setcolor(7);
    gotoxy(x=39,y=5); setcolor(14); printf("�"); setcolor(7);
    gotoxy(x=15,y=5); setcolor(15); printf("�"); setcolor(7);

    //Posisi Tangga (Awal Naik)
    gotoxy(x=27,y=41); setcolor(8); printf("�"); setcolor(7);
    gotoxy(x=57,y=41); setcolor(9); printf("�"); setcolor(7);
    gotoxy(x=9,y=37); setcolor(10); printf("�"); setcolor(7);
    gotoxy(x=51,y=33); setcolor(11); printf("�"); setcolor(7);
    gotoxy(x=9,y=29); setcolor(12); printf("�"); setcolor(7);
    gotoxy(x=63,y=21); setcolor(13); printf("�"); setcolor(7);
    gotoxy(x=21,y=17); setcolor(14); printf("�"); setcolor(7);
    gotoxy(x=63,y=13); setcolor(15); printf("�"); setcolor(7);

    //Posisi Tangga (Akhir Naik)
    gotoxy(x=45,y=37); setcolor(8); printf("�"); setcolor(7);
    gotoxy(x=63,y=29); setcolor(9); printf("�"); setcolor(7);
    gotoxy(x=21,y=29); setcolor(10); printf("�"); setcolor(7);
    gotoxy(x=27,y=9); setcolor(11); printf("�"); setcolor(7);
    gotoxy(x=15,y=21); setcolor(12); printf("�"); setcolor(7);
    gotoxy(x=45,y=17); setcolor(13); printf("�"); setcolor(7);
    gotoxy(x=9,y=9); setcolor(14); printf("�"); setcolor(7);
    gotoxy(x=63,y=5); setcolor(15); printf("�"); setcolor(7);

}

/*PROGRAM UTAMA================================================================================================================*/
void PapanPermainan()
{
    Header();
    Papan();
    PosisiUlarDanTangga();
}
