#include<stdio.h>
binaryArama(int dizi[], int N, int aranan)
{
	int orta,sol=0,sag=N-1;
	while(sol<=sag)
	{
		orta=(sol+sag)/2;
		if(aranan==dizi[orta])
			return orta;
		else if(aranan>dizi[orta])
			sol=orta+1;
		else
			sag=orta-1;
	}
	return -1;
}
int main()
{
	int dizi[20] = {1, 2, 3, 5, 8, 9, 10, 12, 13, 16, 18, 21, 22, 23, 24, 25, 27, 28, 30, 32};
	int ara;
	printf("aranan degeri giriniz :");
	scanf("%d",&ara);
	int indis=binaryArama(dizi,20,ara);
	printf("Aranılan degerin indisi =%d",indis);
}
