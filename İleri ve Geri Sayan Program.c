#include <stdio.h>

int main(void) {
  int a,b;
        printf("Kaça kadar ileri saymamı istersin(1 den başlayacağım): ");
    scanf("%d", &a);
  for(b=1;b<=a;b++){
      printf(" %d", b);
  }
        printf("\n");
        printf("Şimdi geri sayıyorum:");
       printf("\n");
  for(b=a;b>0;b--){
       printf(" %d",b);
  }
  return 0;
}
