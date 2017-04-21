#include <stdio.h>

int CekAdaUlarAtauTangga(int Petak)
{
	int PetakSebelumnya=Petak, DapetDadu;
	if(Petak==3 || Petak==8 || Petak==19 || Petak==27 || Petak==39 || Petak==50 || Petak==62 || Petak==70)
	{
		gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);
		gotoxy(67,18);printf("Dapatkan dadu berangka 6 agar dapat naik keatas");
	}
	if(Petak==98 || Petak==94 || Petak==92 || Petak==86 || Petak==63 || Petak==61 || Petak==53 || Petak==16)
	{
		gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);
		gotoxy(67,18);printf("Dapatkan dadu berangka 6 agar tidak jadi turun kebawah");
	}
	gotoxy(67,19);printf("tekan enter untuk melanjutkan");
    getch();
    gotoxy(67,17);printf("                                                       ");
	gotoxy(67,18);printf("                                                       ");
	gotoxy(67,19);printf("                                                       ");
    DapetDadu=KocokDadu();
    if(DapetDadu==6)
    {
    	gotoxy(67,17);printf("Berhasil mendapatkan dadu berangka 6!");
    	switch(Petak)
    	{
        	//tangga
        	case 3: Petak=13;break;
        	case 8: Petak=30;break;
        	case 19:Petak=37;break;
        	case 27:Petak=83;break;
        	case 39:Petak=58;break;
        	case 50:Petak=66;break;
        	case 62:Petak=80;break;
        	case 70:Petak=90;break;
        	//ular
        	case 98:Petak=77;break;
        	case 94:Petak=74;break;
        	case 92:Petak=72;break;
        	case 86:Petak=23;break;
        	case 63:Petak=59;break;
        	case 61:Petak=18;break;
        	case 53:Petak=33;break;
        	case 16:Petak=6;break;
        	default:Petak;break;
    	}
    }
    else
    {
    	gotoxy(67,17);printf("Gagal mendapatkan dadu berangka 6!");
    }
    Sleep(2000);
    gotoxy(67,17);printf("                                                       ");
	gotoxy(67,18);printf("                                                       ");
	return Petak;
}



/*int CekAdaUlarTangga(int Petak)
{
	int PetakSebelumnya;
	PetakSebelumnya=Petak;
    switch(Petak)
    {
        //tangga
        case 3: gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=13;break;
        case 8: gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=30;break;
        case 19:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=37;break;
        case 27:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=83;break;
        case 39:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=58;break;
        case 50:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=66;break;
        case 62:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=80;break;
        case 70:gotoxy(67,17);printf("Menemukan tangga di kotak ke-%d",Petak+1);Petak=90;break;
        //ular
        case 98:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=77;break;
        case 94:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=74;break;
        case 92:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=72;break;
        case 86:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=23;break;
        case 63:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=59;break;
        case 61:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=18;break;
        case 53:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=33;break;
        case 16:gotoxy(67,17);printf("Menemukan ular di kotak ke-%d",Petak+1);Petak=6;break;
        default:Petak;break;
    }
	if(Petak>PetakSebelumnya)
	{
		gotoxy(67,18);printf("Naik ke kotak %d",Petak+1);
	}
	else if (Petak<PetakSebelumnya)
	{
		gotoxy(67,18);printf("Turun ke kotak %d",Petak+1);
	}
	else if (Petak==PetakSebelumnya)
    {
        gotoxy(67,18);printf("Ada di kotak %d",Petak+1);
    }
	Sleep(2000);
	gotoxy(67,17);printf("                                        ");
	gotoxy(67,18);printf("                                        ");
    return Petak;
}*/
