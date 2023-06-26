#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <conio.h>
/*
int main(){
    int sayi1 , sayi2 , toplam ;
    printf("Sayi 1'i giriniz :");
    scanf("%d",&sayi1);
    printf("Sayi 2'yi Giriniz:");
    scanf("%d",&sayi2);
    toplam=sayi1+sayi2 ;
    printf("toplam="
           "%d",toplam);

    return 1 ;

}
*/
/*
int main(){
    int  vize , final , vizesonuc , finalsonuc , sonuc ;
    vize=20 ;
    final=45 ;
    vizesonuc=vize*0.40;
    finalsonuc=final*0.60;
    sonuc=vizesonuc+finalsonuc ;
    if(sonuc>50) {
    printf("Gectiniz");}
    else{
    printf("Kaldiniz");}
    return 1 ;
}
///////Ornek Cozumleme-Kısa if ile
 */
/*
int main(){
    int vize , final ,vizesonuc , finalsonuc , sonuc ;
    vize=40;
    final=60;
    vizesonuc=vize*0.70;
    finalsonuc=final*0.30 ;
    sonuc=vizesonuc+finalsonuc ;
    (sonuc<=50) ? puts("Kaldiniz")  : puts("Gectiniz");
}
*/
/////Aynı örnek Sadece klavyeden manuel giriş sağlanarak olması için
/*
int main(){
int vizeNotu , finalNotu ;
    printf("vize:");
    scanf("%d",&vizeNotu);
    printf("final:");
    scanf("%d",&finalNotu);
   if (((vizeNotu*0.40) + (finalNotu*0.60))>50) {
       puts("gectiniz");
   } else{
       puts("kaldiniz");
   }
}
/*
*/
/*
//Verilen 4 sayıdan en büyügünü bulan C programı
int main(){
    int a,b,c,d,enbuyuk ;
    printf("A sayisini giriniz:");
    scanf("%d",&a);
    printf("B sayisini giriniz:");
    scanf("%d",&b);
    printf("C sayisini giriniz:");
    scanf("%d",&c);
    printf("D sayisini giriniz:");
    scanf("%d",&d);
    if(a>b){
        enbuyuk=a;
    } else{
        enbuyuk=b;

    }
    if(enbuyuk<c){
        enbuyuk=c;
    }
    if(enbuyuk<d){
        enbuyuk=d;
    }
    printf("En buyuk %d",enbuyuk);

}
*/
/*
///İf Else Soru Örneği
c
    int sayi;
    printf("Bir sayi giriniz");
    scanf("%d", &sayi);
    if (sayi >= 100) {
        printf("\n Sayi 100'den buyuktur\n");
    } else {
        printf("\n Sayi 100'den kucuktur\n ");
        system("PAUSE");
    }//Main sonu
}
 /////For Dongusu
 */
/*
int main(){
     int c;
    for ( c = 5 ; c <=10   ; ++c) {
        printf("%d",c);
        printf("\n");


    }
}
 */
/*
///Faktoriyel örneği
int main(){
    int sonuc=1;
    int i ;

    for(i=1;    i<=5 ; ++i ) {
    sonuc = sonuc * i;

    }
    printf("5!=%d",sonuc);

}
 ////While döngü örneği
/*
int main(){
    int c=0;
    while (c<=10) {
        printf("%d",c);
        printf("\n");
        c++;
    }
}
*/
/*
/// 1'den 100'e kadar olan tek sayıların toplamı örneği
int main(){
    int toplam=0;
    for(int k=1 ; k<=100 ; k++) {
        if(k%2==1){
            toplam +=k ;
            //ya da
            //toplam=toplam+k;

        }

    }
    printf("Sonuc=%d",toplam);
    }
    */
/*
///10 elemanlı bir dizinin tüm elemanlarının toplamı
int main(){
   int toplam ;
   int d[10]= {14,28,35,42,54,64,17,77,66,15};
   toplam=d[0];
   for( int i=0 ; i<=9  ;i++){
       toplam+=d[i];
       }
    printf("Hepsinin toplami=%d",toplam);
   }
  ////10 elemanlı bir dizinin en büyük elemanını bulan program
  */
/*
int main(){
    int enbuyuk,yeri;
    int d[10]={-1,2,5,6,8,-15,20,25,65,75};
    enbuyuk=d[0];
    yeri=d[0];
    for(int i=1;  i<=9 ; i++  ) {
        if(enbuyuk<d[i]) {
            enbuyuk=d[i];
            yeri=i;
        }
    }
    printf("En buyuk=%d ve yeri %d",enbuyuk,yeri);
}
*/
/*
int main(){
    int enbuyuk,yeri;
    int d[10]={30,40,-80,60,80,750,60,-55,44,78};
    enbuyuk=d[0];
    yeri=0  ;
    for(int i=1 ; i<=9 ;  i++ ){
        if(enbuyuk<d[i]){
            enbuyuk=d[i];
            yeri=i;
        }
    }
    printf("Enbuyuk=%d ve yeri %d",enbuyuk,yeri);
}
 */
/*
///Rastgele sayı üreten program
int main(){
    int sayi;
    srand(time(NULL));//her defasinda fakli sayi üretebilmek için bunu kullanıyoruz.
    sayi=rand();
    printf("sayi=%d",sayi);
}
*/
/*
int main(){
    int sayi;
    srand(time(NULL));
    sayi=rand()%    100 ;
    printf("sayi=%d",sayi);

}
*/
/*
int main(){
    int i,n,zar ;
    srand(time(NULL));
    printf("Zar Atma deneyin\n");
    printf("Zar kaç kere atilsin:");
    scanf("%d",&n);

    for(i=1  ; i<=n ; i++ ){
        zar=(rand()%6)+1;///1-6 arasında sayi üretir.
        printf("%d . atis=%d\n",zar,i);

    }
}
 */
/*
int main(){
    int i,n,toplam ;
    printf("N sayisini giriniz : ");
    scanf("%d",&n);
    toplam=0;
    for(i=1 ; i<=n ; i++ ){
        toplam=toplam+i;
    }
    printf("Toplam =%d",toplam);
}
 */
/*
int main(){
    int i,n,j;
    printf("Satir sayisi:");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++ ){
        for(j=i ;j>=1 ; j--){
            printf("%3d",i);
        }
        printf("\n");
    }
}
 */
/*
int main(){
    int sayi,encokcikansayi=0 ,i,enbuyuksayac=0,dizi[49];
    srand(time(0));
    //dizinin indeksi sayimiz,dizinin degeri tekrar sayisini tutacak
    //ornek dizi [5]=1600   ,5 sayisi 1600 kez uretilmistir.

    //sonuc dizimizi sifirliyalim

    for( i=0 ; i<=49 ; i++ ){
        dizi[i]=0;
    }
  // 1 milyon kez 1-49 arasında sayi uret,dizi de say
for(i=1; i<=1000000 ; i++){
    sayi=rand()%49 +1   ; //1 ile 49 arasında sayi uret
    dizi[sayi]=dizi[sayi]+1 ; //sayiyi dizide isaretle ,say
}
  // diziyi gorelim ,göz kontrol amaclı
  for(i=0; i<=49;i++){
      printf("dizi[%d]=%d\n",i,dizi[i]);
  }
  //en cok hangi sayi cikmis onu bul,enbuyuk bul,ekrana yaz
  for(i=0;i<=49;i++){
      if(enbuyuksayac<dizi[i    ]){
          enbuyuksayac=dizi[i];
          encokcikansayi=i;
      }
  }
    printf("En cok cikan sayi=%d Sayac=%d",encokcikansayi,enbuyuksayac);
 }
 */
/*
/*
int main(){
    int d[10]  ={1,-222,450,300,650,-55,7,9,-93,-1};
    int yedek=0,    islemAdimSayisi=0;
    //diziyi ekranda görelim
    for(int i=0;i<10;i++){
        printf("[%d]:%d,",i,d[i]);
    }
    printf("\n");//alt satıra gec
    //bubble srt
    for(int i=0 ; i<=9;i++){
        for(int c=0;c<=8-i;c++){
            printf(".");//islem yapiyor,kullanıcıya biseyler göster,cani sıkılmasın..
            islemAdimSayisi++;
            if(d[c]>d[c+1]){
                //yer degistir
                yedek=d[c];
                d[c]=d[c+1];
                d[c+1]=yedek;
            }
        }
    }
    printf("\n");//alt satira gec
    for(int i=0;i<10;i++){
        printf("[%d]:%d,",i,d[i]);
    }
    printf("\nSiralama islemi %d adimda tamamlandi.",islemAdimSayisi);
}
*/
/*
int main(){
    int d[10]={1,2,4,300,600,609,700,900,994,999};//dizi sirali olmalı
    int aranan=3300;
    int evetVar=0;
    int baslangic=0;
    int son=9;
    int orta=0;
    while(evetVar==0 && baslangic<=son){
        orta=(baslangic+son)/2;
        printf("basla:%d son:%d orta:%d\n",baslangic,son,orta);
        if(aranan==d[orta]){
            evetVar=1;
        }else{
            if(aranan>d[orta]){
                baslangic=orta+1;
            }else{
                son=orta-1;
            }
        }
    }
    (evetVar==1) ? printf("var")    : printf("yok");

}
/*
*/
#include <stdio.h>
/*
int main() {
    float sayi1, sayi2, sonuc;
    char op;

    printf("Birinci sayiyi girin: ");
    scanf("%f", &sayi1);

    printf("Operatoru girin (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Ikinci sayiyi girin: ");
    scanf("%f", &sayi2);

    if (op == '+') {
        sonuc = sayi1 + sayi2;
    } else if (op == '-') {
        sonuc = sayi1 - sayi2;
    } else if (op == '*') {
        sonuc = sayi1 * sayi2;
    } else if (op == '/') {
        sonuc = sayi1 / sayi2;
    } else {
        printf("Hatali operator girdiniz!");
        return 0;
    }

    printf("%.2f %c %.2f = %.2f", sayi1, op, sayi2, sonuc);
    return 0;
}
/*
*/

