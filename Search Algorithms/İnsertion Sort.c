#include<stdio.h>

// baştan iki sayıyı kıyaslıyor ve yer değiştiriyor sonra ilk 3 sayısı kontrol ediyor yer değiştiriyor sonra ilk 4 sayısı kontrol ediyor.
// sıkıntı yoksa yerdeğiştirmiyor.

insertSort(int D[], int N)
{
	int i, k, ekle;
	for(i=1;i<N;i++)
	{
		ekle=D[i];
		for(k=i-1;k>=0 && ekle<=D[k];k--)
		{
			D[k+1]=D[k];
		}		
 		D[k+1]=ekle;
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
    
    insertSort (dizi,sinir);
    
    //Dizinin sıralanmış halini ekrana yazdırır
    printf("Dizinin Yeni Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
	return 0;
}
