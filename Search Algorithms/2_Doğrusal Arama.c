#include<stdio.h>

// dizide aramak istediğimiz değeri giriyoruz baştan kontrol ediyor

dogrusalArama(int dizi[],int N, int aranan)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(dizi[i]==aranan)
			return i;
	}
	return -1;
}
int main()
{
	int dizi[20] = {1, 2, 3, 5, 8, 9, 10, 12, 13, 16, 18, 21, 22, 23, 24, 25, 27, 28, 30, 32};
	int ara;
	printf("aranan degeri giriniz :");
	scanf("%d",&ara);
	int indis=dogrusalArama(dizi,20,ara);
	printf("Aranılan degerin indisi =%d",indis+1);
}
