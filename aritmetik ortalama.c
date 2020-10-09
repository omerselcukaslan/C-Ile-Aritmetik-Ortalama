#include<stdio.h>

int main() {
    float sayilar[5];
    int i;
    float toplam = 0;
    for(i= 1; i<6;i++){
      printf( "%d.sayıyı gir: ",i);
      scanf("%f",&sayilar[i]);
      toplam = toplam + sayilar[i];
}
    printf("Ortalama: %.2f  ",toplam/5);
    return 0;   
}
