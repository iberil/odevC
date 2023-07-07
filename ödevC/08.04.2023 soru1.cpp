#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int sayi[20];
	int n,i,j;
	int *ptr;
	
	srand(time(NULL));
	
	for(n=0;n<20;n++)
	{
		sayi[n]= rand()%100;
	}
	
	ptr=sayi;
	
	for(i=0;i<19;i++)
	{
		for(j=i;j<20;j++)
		{
			if(*(ptr+j)>*(ptr+i))
			{
				int gecici;
	            gecici=*(ptr+i);
	            *(ptr+i)=*(ptr+j);
	            *(ptr+j)=gecici;
			}	
		}	
	}	
	for(i=0;i<20;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
