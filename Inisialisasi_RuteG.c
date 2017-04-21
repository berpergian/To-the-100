#include <stdio.h>

void Inisialisasi_RuteG(int *num)
{
	int n,l,m;
	for (n=0;n<4;n++)
    {
        for (l=0;l<10;l++)
        {
            for (m=0;m<10;m++)
            {
                *num=((l+1)/2)*20+((l+1)%2)+(pow(-1,((l+1)-1))*((m+1)-1));
                papangame[*num-1].pemain[n].x=(5+(n%2))+(6*m);
                papangame[*num-1].pemain[n].y=(42+(floor(n/2)))-(4*l);
                papangame[*num-1].komputer[n].x=(5+(n%2))+(6*m);
                papangame[*num-1].komputer[n].y=(42+(floor(n/2)))-(4*l);
            }
        }
    }
}
