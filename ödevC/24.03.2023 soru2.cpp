#include<stdlib.h>
#include<stdio.h>

int topla(int sayi)
{
	if(sayi==1)
	{
		return 1;
	}
	else
	{
		return sayi+topla(sayi-1);
	}
}

int main()
{
	int sayi;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	printf("toplam:%d",topla(sayi));
}
