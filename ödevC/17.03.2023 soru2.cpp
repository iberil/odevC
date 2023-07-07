#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	FILE*dosya,*dos;
	dosya=fopen("sayilar1.txt","w");
	dos=fopen("sayilar0.txt","w");
	int i;
	int sayi[100];
	
	srand(time(NULL));
	
	for(i=0;i<100;i++)
	{
		sayi[i]= rand()%100;
    }

	for(i=0;i<100;i++)
	{
		if(sayi[i] &(1<<5))
		{
			sayi[i]&= ~(1<<3);
			fprintf(dosya,"%d\n",sayi[i]);
		}
		else //5. bit 0 olanlar
		{
			sayi[i] |= (1<<4);
			fprintf(dos,"%d\n",sayi[i]);	
		}
    }
	fclose(dosya);
	fclose(dos);
}
