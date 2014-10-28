#include <stdio.h>
int main (){
	
	float a;
	float b;
	float c;
	int secim;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("ne yapayim sahip ?\n");
	printf("toplama icin 1\n");
	printf("cikarma icin 2\n");
	printf("carpma icin 3\n");
	printf("bolme icin 4\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			c = a + b;
			break;
		case 2:
			c = a - b;
			break;
		case 3:
			c = a * b;
			break;
		case 4:
			c = a / b;
			break;
			
		//belirlenen caselerden biri seçilmediği durumda default case çalışır.
		default:
			printf("Yanlış bir seçim yaptınız.");
			break;
	}
	printf("sonuc : %f ",c);
		
	getch(); 
}
