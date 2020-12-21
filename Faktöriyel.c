#include <stdio.h>

int main(void) {
  int a,b,sonuc=1;

      printf("Sayı giriniz:");
scanf("%d",&a );

for(b=1;b<=a;b++){
  sonuc=sonuc*b;
}
       printf("%d",sonuc);

  return 0;
}
