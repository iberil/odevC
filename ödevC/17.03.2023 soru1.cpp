#include<stdlib.h>
#include<stdio.h>



int leRoShi(int sayi,int bit)
{
	int maske1,maske2;
	
	maske1= sayi<<bit;
	maske2= sayi>>(32-bit);
	
	return (maske1|maske2); 
}
	
	
int main()
{
	int sayi1,sayi2;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	
	printf("kaydirma miktari icin sayi giriniz:");
	scanf("%d",&sayi2);
	
	printf("son hali: %d",leRoShi(sayi1,sayi2));
	
	return 0;
	
}
