#include <stdio.h>
#include <time.h>
#include <math.h>
#include "cekulartangga.c"
#include "pemenang.c"
//#include "Inisialisasi_RuteG.c"

//void Inisialisasi_RuteG(int *AngkaPetak);
void PapanPermainan();
void Pemenang(int SiapaMenang,int MenangPemain,int JumlahPemain,int MenangAI);


void Permainan(int PemainYangBermain,int AIYangBermain)
{
/*
Deskripsi		: Modul berjalannnya permainan
I.S.			: Jumlah pemain dan jumlah AI
F.S.			: Masuk ke dalam modul pemenang
*/
    PapanPermainan();
    int DapetDadu,i,j,k,l,m,n,o,p,q;
	int GiliranPemain=PemainYangBermain,GiliranAI=AIYangBermain;
	int Status=1,StatusSelesai=0,AngkaPetak,Sebelum,Sesudah,SebelumAI=0,SesudahAI=0;

    //data struct untuk pemain dan komputer
    struct
    {
        int Rute;
    }Pemain[4],AI[4];

    struct
    {
        struct
        {
            int x;
            int y;
        }SiPemain[4],SiAI[4];
    }PapanPermainan[100];

	//Inisialisasi_RuteG(&Petak); //Modul mengisi rute berjalan di papan pada layar
	for (n=0;n<4;n++)
    {
        for (l=0;l<10;l++)
        {
            for (m=0;m<10;m++)
            {
                AngkaPetak=((l+1)/2)*20+((l+1)%2)+(pow(-1,((l+1)-1))*((m+1)-1));
                PapanPermainan[AngkaPetak-1].SiPemain[n].x=(5+(n%2))+(6*m);
                PapanPermainan[AngkaPetak-1].SiPemain[n].y=(42+(floor(n/2)))-(4*l);
                PapanPermainan[AngkaPetak-1].SiAI[n].x=(5+(n%2))+(6*m);
                PapanPermainan[AngkaPetak-1].SiAI[n].y=(42+(floor(n/2)))-(4*l);
            }
        }
    }

    for (o=0;o<GiliranPemain;o++)
    {
        gotoxy(PapanPermainan[0].SiPemain[o].x,PapanPermainan[0].SiPemain[o].y);printf("%c",o+3);
    }
    for (p=0;p<GiliranAI;p++)
    {
        gotoxy(PapanPermainan[0].SiAI[p+1].x,PapanPermainan[0].SiAI[p+1].y);printf("%c",p+4);
    }

    for (k=0;k<=3;k++) //Mengisi rute berjalan
    {
        Pemain[k].Rute=0;
        AI[k].Rute=0;
    }

    do
    {
        if(Status==1) //Status diisi 1 menandakan giliran pemain
        {
            srand(time(0000));
            for(i=0;i<GiliranPemain;i++)
            {
                gotoxy(67,11);printf("                                                  ");
                gotoxy(67,11);printf("=PEMAIN %c=,tekan enter untuk mengocok dadu",i+3);
                getch();
                Sebelum=Pemain[i].Rute;
                DapetDadu=KocokDadu();
                Pemain[i].Rute= Pemain[i].Rute + DapetDadu;
                //Pemain[i].Rute= cekulartangga(Pemain[i].Rute);
                if (Pemain[i].Rute==99)
                {
                    Sesudah=Pemain[i].Rute;
                    gotoxy(PapanPermainan[Sebelum].SiPemain[i].x,PapanPermainan[Sebelum].SiPemain[i].y);printf(" ");
                    gotoxy(PapanPermainan[Sesudah].SiPemain[i].x,PapanPermainan[Sesudah].SiPemain[i].y);printf("%c",i+3);
                    gotoxy(80,12+i);printf("pemain %c ada di kotak %d",i+3,Sesudah+1);
                    StatusSelesai=1;
                    Pemenang(Status,i+1,PemainYangBermain+AIYangBermain,j); break;
                    //gotoxy(67,17);printf("PEMAIN %c MENANG",i+3);break;
                }
                else if (Pemain[i].Rute>99)
                {
                    Pemain[i].Rute=99-((Pemain[i].Rute)-99);
                    Sesudah=Pemain[i].Rute;
                    for (q=Sebelum;q<Sesudah;q++)
                    {
                        gotoxy(PapanPermainan[q].SiPemain[i].x,PapanPermainan[q].SiPemain[i].y);printf(" ");
                        gotoxy(PapanPermainan[q+1].SiPemain[i].x,PapanPermainan[q+1].SiPemain[i].y);printf("%c",i+3);
                        Sleep(500);
                    }
                    Pemain[i].Rute= CekAdaUlarAtauTangga(Pemain[i].Rute);
                    gotoxy(PapanPermainan[Sesudah].SiPemain[i].x,PapanPermainan[Sesudah].SiPemain[i].y);printf(" ");
                    gotoxy(PapanPermainan[Pemain[i].Rute].SiPemain[i].x,PapanPermainan[Pemain[i].Rute].SiPemain[i].y);printf("%c",i+3);
                }
                else if (Pemain[i].Rute<99)
                {
                    Sesudah=Pemain[i].Rute;
                    for (q=Sebelum;q<Sesudah;q++)
                    {
                        gotoxy(PapanPermainan[q].SiPemain[i].x,PapanPermainan[q].SiPemain[i].y);printf(" ");
                        gotoxy(PapanPermainan[q+1].SiPemain[i].x,PapanPermainan[q+1].SiPemain[i].y);printf("%c",i+3);
                        Sleep(500);
                    }
                    Pemain[i].Rute= CekAdaUlarAtauTangga(Pemain[i].Rute);
                    gotoxy(PapanPermainan[Sesudah].SiPemain[i].x,PapanPermainan[Sesudah].SiPemain[i].y);printf(" ");
                    gotoxy(PapanPermainan[Pemain[i].Rute].SiPemain[i].x,PapanPermainan[Pemain[i].Rute].SiPemain[i].y);printf("%c",i+3);
                }
                gotoxy(80,12+i);
                if (Pemain[i].Rute < 10)
                {
                    printf("pemain %c ada di kotak  %d",i+3,Pemain[i].Rute+1);
                }
                else if (Pemain[i].Rute >= 10)
                {
                    printf("pemain %c ada di kotak %d",i+3,Pemain[i].Rute+1);
                }
                gotoxy(80,16);printf("                              ");
                gotoxy(67,17);printf("tekan enter untuk melanjutkan");
                getch();
                gotoxy(67,17);printf("                              ");
                Sebelum=0;
                Sesudah=0;
            }
            if ((i=GiliranPemain) && (AIYangBermain !=0 ))
            {
                    Status=0;
            }
        }
        else if(Status==0)//Giliran AI
        {
            srand(time(0000));
            for(j=0;j<GiliranAI;j++)
            {
                gotoxy(67,11);printf("                                                  ");
                gotoxy(67,11);printf("=KOMPUTER %c= sedang bermain",j+4);
                SebelumAI=AI[j].Rute;
                DapetDadu=KocokDadu();
                AI[j].Rute = AI[j].Rute + DapetDadu;
                //AI[j].Rute = cekulartangga(AI[j].Rute);
                if (AI[j].Rute==99)
                {
                    SesudahAI=AI[j].Rute;
                    gotoxy(PapanPermainan[SebelumAI].SiAI[j+1].x,PapanPermainan[SebelumAI].SiAI[j+1].y);printf(" ");
                    gotoxy(PapanPermainan[SesudahAI].SiAI[j+1].x,PapanPermainan[SebelumAI].SiAI[j+1].y);printf("%c",j+4);
                    gotoxy(80,13+j);printf("CPU %c ada di posisi %d",j+4,SesudahAI+1);
                    StatusSelesai=1;
                    Pemenang(Status,i+1,PemainYangBermain+AIYangBermain,j); break;
                }
                else if (AI[j].Rute>99)
                {
                    AI[j].Rute=99-((AI[j].Rute)-99);
                    SesudahAI=AI[j].Rute;
                    for (q=SebelumAI;q<SesudahAI;q++)
                    {
                        gotoxy(PapanPermainan[q].SiAI[j+1].x,PapanPermainan[q].SiAI[j+1].y);printf(" ");
                        gotoxy(PapanPermainan[q+1].SiAI[j+1].x,PapanPermainan[q+1].SiAI[j+1].y);printf("%c",j+4);
                        Sleep(500);
                    }
                    AI[j].Rute = CekAdaUlarAtauTangga(AI[j].Rute);
                    gotoxy(PapanPermainan[SesudahAI].SiAI[j+1].x,PapanPermainan[q].SiAI[j+1].y);printf(" ");
                    gotoxy(PapanPermainan[AI[j].Rute].SiAI[j+1].x,PapanPermainan[AI[j].Rute].SiAI[j+1].y);printf("%c",j+4);
                }
                else if (AI[j].Rute<99)
                {
                    SesudahAI=AI[j].Rute;
                    for (q=SebelumAI;q<SesudahAI;q++)
                    {
                        gotoxy(PapanPermainan[q].SiAI[j+1].x,PapanPermainan[q].SiAI[j+1].y);printf(" ");
                        gotoxy(PapanPermainan[q+1].SiAI[j+1].x,PapanPermainan[q+1].SiAI[j+1].y);printf("%c",j+4);
                        Sleep(500);
                    }
                    AI[j].Rute = CekAdaUlarAtauTangga(AI[j].Rute);
                    gotoxy(PapanPermainan[SesudahAI].SiAI[j+1].x,PapanPermainan[q].SiAI[j+1].y);printf(" ");
                    gotoxy(PapanPermainan[AI[j].Rute].SiAI[j+1].x,PapanPermainan[AI[j].Rute].SiAI[j+1].y);printf("%c",j+4);
                }
                //gotoxy(67,11);printf("=KOMPUTER %c= sedang bermain",j+4);
                gotoxy(80,13+j);
                if (AI[j].Rute < 10)
                {
                    printf("KOMPUTER %c ada di posisi  %d",j+4,AI[j].Rute+1);
                }
                else if (AI[j].Rute >= 10)
                {
                    printf("KOMPUTER %c ada di posisi %d",j+4,AI[j].Rute+1);
                }
                Sleep(1500);
                SebelumAI=0;
                SesudahAI=0;
            }
            if ((j=GiliranPemain))
            {
                Status=1;
            }
        }
    }while(StatusSelesai != 1);
}
