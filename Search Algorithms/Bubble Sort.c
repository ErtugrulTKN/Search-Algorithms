#include<stdio.h>

// Baştan ikili karşılaştırıyor küçük olanı sola atıyor

bubbleSort(int D[],int N)
{
	int gecici,k,i;
	for(i=0;i<=N-1;i++)
	{
		for(k=0;k<N-1-i;k++)
		{
			if(D[k]>D[k+1])
			{
				gecici=D[k];
				D[k]=D[k+1];
				D[k+1]=gecici;
			}
		}
	}
}


/*int main()
{
	int sinir, j, sakla;
    int dizi[100];
    
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Kaç adet sayı girileceği kullanıcıdan öğrenilir
 
    //Kullanıcıdan sayılar alınır
    for(int i=0; i<sinir; i++){
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Alınan sayılar ekrana yazdırılır
    printf("Dizinin Eski Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); // sayılar yazdırıldıktan sonra 2 satır aşağı iner
    
    bubbleSort(dizi,sinir);
    
    //Dizinin sıralanmış halini ekrana yazdırır
    printf("Dizinin Yeni Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
	return 0;
}
