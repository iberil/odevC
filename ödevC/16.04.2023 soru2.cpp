#include<stdlib.h>
#include<stdio.h>

int main()
{
	int sayi,*p1=NULL,sayac=0,i;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>=0)
	{
		
		if(sayi%3==0 || sayi%5==0)
		{
			sayac++;
			p1=(int*)realloc(p1,sayac*sizeof(int));
			*(p1+sayac-1)=sayi;
		}	
		
		
		printf("sayi giriniz:");
		scanf("%d",&sayi);	
	}
    
	printf("\n3 veya 5e bolunenler:\n");		
	for(i=0;i<sayac;i++)
	{
		printf("%d\n",*(p1+i));
	}
	
	free(p1);
}
