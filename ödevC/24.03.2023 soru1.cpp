#include<stdio.h>
#include<stdlib.h>

int ebob(int sayi1,int sayi2)
{
	if(sayi1<sayi2)
	{
		if(sayi1!=0)
		{
			return ebob(sayi1,sayi2%sayi1);
		}
		else
		{
			return sayi2;
		}
	}
	else
	{
		if(sayi2!=0)
		{
			return ebob(sayi1%sayi2,sayi2);
		}
		else
		{
			return sayi1;
		}
		
	}
	
}

int main()
{
	int s1,s2;
	
	printf("ebobunu alacaginiz sayilari girininz:");
	scanf("%d %d",&s1,&s2);
	
	printf("ebob:%d",ebob(s1,s2));
}
