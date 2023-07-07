#include <stdio.h>
#include <string.h>

void riRoShi(char *ptr, int n, int kaydir) {
    char dizi[100];
    char *ptr2=dizi;
    
    strcpy(ptr2, ptr);
    strcat(ptr2, ptr);
    
    for (int i = 0; i < n; i++) 
      ptr[i]=ptr2[i +n-kaydir] ;
       
    printf("%s\n",ptr);
}

int main() {

    char metin[100];
    int k;
    
    printf("metin giriniz:");
    gets(metin);
    
    printf("kaydirma miktarini giriniz:");
    scanf("%d",&k);
    
    int boyut =  strlen(metin);
    riRoShi(metin, boyut, k);
	  
    return 0;
}
