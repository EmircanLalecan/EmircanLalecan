#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int hesaplama();
int liste();
int toplama();
int cikarma();
int carpma();
int bolme();
int ustAlma();
int sine();
int cosine();
int tangent();
int faktoryel();
int devam();
int yanlisDevam();
int yanlis();

int main() 
{
	liste();
	hesaplama();
}
int hesaplama()
{
	char secim[25];		
	printf("biseyler sec\n");
	scanf("%s",secim);
	if(strcmp(secim,"toplama")==0)
	{
		toplama();
	}
	else if(strcmp(secim,"cikarma")==0)
	{
		cikarma();
	}
	else if(strcmp(secim,"carpma")==0)
	{
		carpma();
	}
	else if(strcmp(secim,"bolme")==0)
	{
		bolme();
	}
	else if(strcmp(secim,"ust-alma")==0)
	{
		ustAlma();
	}
	else if(strcmp(secim,"sinus")==0)
	{
		sine();
	}
	else if(strcmp(secim,"cosinus")==0)
	{
		cosine();
	}
	else if(strcmp(secim,"tanjant")==0)
	{
		tangent();
	}
	else if(strcmp(secim,"faktoryel")==0)
	{
		faktoryel();
	}
	else
	{
		yanlis();
	}
	devam();
}
int liste()
{
	printf("1-toplama	6-sinus		 11-\n");
	printf("2-cikarma	7-cosinus	 12-\n");
	printf("3-carpma	8-tanjant	 13-\n");
	printf("4-bolme		9-faktoryel	 14-\n");
	printf("5-ust-alma	10-	 	 15-\n\n!!islemleri yazi olarak giriniz!!\n\n\n");
}
int toplama()
{
	float adet,sayi,sayi2,sonuc;
	printf("\nkac adet sayi toplamak istersiniz\n");
	scanf("%f",&adet);
	printf("------------\n");
	sonuc=0;
	while(adet>0)
	{
		scanf("%f",&sayi);
		sonuc=sonuc+sayi;
		sayi2=sonuc-sayi;
		printf("%0.2f+%0.2f=%f\n",sayi2,sayi,sonuc);
		adet=adet-1;
	}
	printf("\nsonuc %f\n",sonuc);
}
int cikarma()
{
	float sayi2,adet,sayi,sonuc;
	printf("\ncikartma yapmak istediginiz ilk sayiyi giriniz\n");
    scanf("%f",&sayi2);
    sonuc=sayi2;
    printf("\nkac adet sayi cikartmak istiyorsunuz\n");
    scanf("%f",&adet);
    printf("-----------------------------------\n");
    while(adet>0)
    {
        scanf("%f",&sayi);
        sonuc=sonuc-sayi;
        printf("%0.2f-%0.2f=%f\n",sayi2,sayi,sonuc);
        sayi2=sonuc;
        adet=adet-1;
    }
    printf("\nsonuc=%0.2f\n",sonuc);
}
int carpma()
{
	float sayi1,sayi2,sonuc,adet;
	printf("\nkac adet sayi carpmak istiyorsunuz\n");
	scanf("%f",&adet);
	sonuc=1;
	printf("-----------------------------------\n");
	while(adet>0)
	{
		scanf("%f",&sayi1);
		sonuc=sonuc*sayi1;
		sayi2=sonuc/sayi1;
		printf("%0.2fx%0.2f=%0.2f\n",sayi2,sayi1,sonuc);
		adet--;
	}
	printf("\nsonuc= %0.2f\n",sonuc);
}
int bolme()
{
	float sayi,sayi2,sonuc;
	printf("\nbolmek istediginiz sayiyi giriniz\n");
	scanf("%f",&sayi);
	printf("kaca bolmek istersiniz\n");
	scanf("%f",&sayi2);
	sonuc=sayi/sayi2;
	printf("\nsonuc=%0.2f\n",sonuc);
}
int ustAlma()
{
	int sayi,ust;
	printf("\nustu alinacak sayiyi giriniz\n");
	scanf("%d",&sayi);
	printf("sayinin ussunu giriniz\n");
	scanf("%d",&ust);
	long sonuc = 1;
    while(ust>0)
	{
    	sonuc = sonuc*sayi;
    	ust--;
	}
	printf("\nsonuc %ld\n",sonuc);
}
int sine()
{
	int deg;
	float rad,result,pi;
	pi=3.14;
	printf("\naciyi giriniz\n");
	scanf("%d",&deg);
	rad = deg * (M_PI/180);
	result=sin(rad);
	printf("\nresult= %f",result);
}
int cosine()
{
	int deg;
	float rad,result,pi;
	pi=3.14;
	printf("\naciyi giriniz\n");
	scanf("%d",&deg);
	rad = deg * (M_PI/180);
	result=cos(rad);
	printf("\nresult= %f",result);
}
int tangent()
{
	int deg;
	float rad,result,pi;
	pi=3.14;
	printf("\naciyi giriniz\n");
	scanf("%d",&deg);
	rad = deg * (M_PI/180);
	result=tan(rad);
	printf("\nresult= %f",result);
}
int faktoryel()
{
	int sayi,i;
	float fac=1;
	printf("\nsayi giriniz\n"); 
	scanf("%d",&sayi);
	if(sayi<0)
	{
		printf("negatif sayilarin faktoryeli olmaz\n");
	}
	else
	{
		for(i=1; i<=sayi;i++)
		{
			fac=fac*i;
		}
	}
	printf("\nsonuc=%0.2f\n",fac);
}
int yanlis()
{
	printf("yanlis islem sectiniz lutfen tekrar seciniz\n");
	hesaplama();
}
int devam()
{
	printf("\ndevam etmek ister misiniz? (evet/hayir) \n");
	char devam[10];
		scanf("%s",devam);
		if(strcmp(devam,"evet")==0)
		{
			hesaplama();
		}
		else if(strcmp(devam,"hayir")==0)
		{
			printf("\ncikis yapiliyor...\n");
			printf("gule gule\n");
			return 0;
		}
		else
		{
			yanlisDevam();
		}
}
int yanlisDevam()
{
	printf("\nbilinmeyen cevap. lutfen yeniden yaziniz\n");
	devam();
}
