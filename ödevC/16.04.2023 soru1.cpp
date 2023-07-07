#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	FILE*dosya;
	int *ptr;
	int dizi[100];
	
	dosya=fopen("sayi.txt","w");
	
	srand(time(NULL));
	
	for(int i=0;i<100;i++)
	{
		dizi[i]= rand()%100;
	}
	
	
	for(int i=0;i<100;i++)
	{
		fprintf(dosya,"%d\n",dizi[i]);
	}
	
	int sayac=0;
	int *ptr2;

	ptr=(int*)malloc(100*sizeof(int));
	
	for(int i=0;i<100;i++)
	{
		if(dizi[i]&1<<5)
		{
		}
		else
		{
			*(ptr+sayac)=dizi[i];
			sayac++;
			
		}
    }
	
	
	for(int i=0;i<sayac;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
	
	
}
