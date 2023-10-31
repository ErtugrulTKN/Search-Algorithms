#include<stdio.h>

// pivot sağa dayanır baştan k ve j artarak sıralar anladın sen sonra ortadan ayırır sağa sola D:

quickSort(int dizi[], int sol, int sag)
{
	int k,j;
	int ortadaki,gecici;
	
	k=sol;
	j=sag;
	ortadaki=dizi[(sol+sag)/2];
	do{
		while(dizi[k]<ortadaki && k<sag)
			k++;
		while(ortadaki<dizi[j] && j>sol)
			j--;
		if(k<=j){
			gecici=dizi[k];
			dizi[k]=dizi[j];
			dizi[j]=gecici;
			k++;  j--;
		}
	}while(k<=j);
	
	if(sol<j) quickSort(dizi,sol,j);
	if(k<sag) quickSort(dizi,k,sag);	
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
    
    quickSort(dizi,0,sinir-1);
    
    //Dizinin sıralanmış halini ekrana yazdırır
    printf("Dizinin Yeni Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
	return 0;
}
