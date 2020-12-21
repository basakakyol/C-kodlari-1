#include <stdio.h>

int main(void) {
  int i,b,min,a,flag;
      printf("Bir aralık girin\n");
      printf("Aralığın en küçük sayısı:");
  scanf("%d", &min);
      printf("Aralığın en büyük sayısı:");
  scanf("%d", &b);
    
       printf("\nAsal sayılar %d ve %d arasındakiler: ", min, b);
 
  for( a= min; a <= b; a++){
    
    for(i=2;i<=a/2;i++){
         flag = 1;
      if(a % i == 0) {
         flag = 0;
                break;
      }
  }
   if (flag == 1)
        printf(" %d" , a);
  }
  return 0;
  }
