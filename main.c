#include <stdio.h>
#include <stdlib.h>
    void ekle(int A[],int sirano,int deger,int elemansayisi)
    {
        int i;
        if(sirano<=elemansayisi+1)
        {
            for(i=elemansayisi;i>=sirano;i--)
            {
                A[i]=A[i-1];
            }
            A[sirano-1]=deger;
            printf("Dizimizin eklenmis hali :\n");
            for(i=0;i<=elemansayisi;i++)
            {
                printf("%3d\n",A[i]);
            }
        }
        else{
            printf("Gecerli bir sira numarasi giriniz.\n");
        }
    }
int main()
{
   //Rastgele dizilerin icerisine yeni eleman ekleyen programi bulunuz.
   int i,sirasi;
   int n,deger;
   printf("Kac adet sayi uretilecek?\n\n");
   scanf("%d",&n);
   int dizi[n];
   srand(time(0));
   for(i=0;i<n;i++)
   {
       dizi[i]=rand()%100;// 100 tane farkli sayi uretebilir.max

   }
   for(i=0; i<n; i++)
   {
      printf("%d\n",dizi[i]);

   }
   printf("Eklemek istediginiz degeri ve sirayi giriniz:\n");
    scanf("%d %d", &deger, &sirasi);

    ekle(dizi, sirasi, deger, n);
}
