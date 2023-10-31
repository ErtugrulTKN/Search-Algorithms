#include<stdio.h>

// Baştan sona kontrol ediyor küçüğü başa atıyor

selectionSort(int D[], int N)
{
	int i,index,j,enkucuk;
	for(i=0;i<N-1;i++)
	{
		enkucuk=D[N-1];
		index=N-1;
		for(j=i;j<N-1;j++)
		{
			if(D[j]<enkucuk)
			{
				enkucuk=D[j];
				index=j;
			}
		}
		D[index]=D[i];
		D[i]=enkucuk;
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
    
    selectionSort(dizi,sinir);
    
    //Dizinin sıralanmış halini ekrana yazdırır
    printf("Dizinin Yeni Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
	return 0;
}
