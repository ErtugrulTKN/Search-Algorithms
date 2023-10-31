#include<stdio.h>
int main()
{
	int sayac,N,fak=1;                  //1
	printf("Sayi giriniz :");   
	scanf("%d",&N);                     //1
	for(sayac=2;sayac<=N;sayac++)       //(2n+1)
	{
		fak=fak*sayac;                   //(n-1)
	}
	printf("%d faktoriyeli =%d,",N,fak); //1
	return 0;                            //3n+3
}
