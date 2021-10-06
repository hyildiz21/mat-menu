#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//mat menüsü yapma
	
	int a,sayi1,sayi2,alan,cevre,islem,pi,secim;
	
	printf("---MATEMATIK MENUSU---\n\n");
	printf("***************\n\n");
	
	printf("1-KAREDE ALAN VE CEVRE HESABI\n");
	printf("2-GIRILEN SAYININ KUPU\n");
	printf("3-CEMBER DE ALAN VE CEVRE HESABI\n");
	printf("4-DIKDORTGEN DE ALAN VE CEVRE HESABI\n");
	printf("5-5x*x+7x+9 DENK. X E GORE SONUCU\n\n");
	printf("Sonucunu bulmak istediginiz soruyu secin: ");
	
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: printf("Karenin bir kenarini girin: ");
				scanf("%d",&sayi1);
				alan=sayi1*sayi1;
				cevre=sayi1*4;
				printf("Cevre: %d\n",cevre);
				printf("Alan: %d",alan);break;
		
		case 2: printf("Bir Sayi Giriniz: ");
				scanf("%d",&sayi1);
				islem=sayi1*sayi1*sayi1;
				printf("Sonuc: %d",islem);break;
		
		case 3: printf("Yaricap giriniz: ");
				scanf("%d",&sayi1);
				pi=3;
				alan=pi*sayi1*sayi1;
				cevre=2*pi*sayi1;
				printf("Alan: %d\n",alan);
				printf("Sonuc: %d",cevre);break;
				
		case 4: printf("Kisa Kenari Giriniz: ");
				scanf("%d",&sayi1);
				printf("Uzun Kenari Giriniz: ");
				scanf("%d",&sayi2);
				alan=sayi1*sayi2;
				cevre=(sayi1*2)+(sayi2*2);
				printf("Alan: %d\n",alan);
				printf("Cevre: %d",cevre);break;
		
		case 5: printf("X yerine yazilacak sayi: ");
				scanf("%d",&sayi1);
				islem=5*sayi1*sayi1+7*sayi1+9;
				printf("Sonuc: %d",islem);break;
				
		default: printf("\nGECERSIZ ISLEM :) ");		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
