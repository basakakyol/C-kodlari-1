#include <stdio.h>

int main(void) {
  int i,b,min,a,d;
  printf("Bir aralık girin\n");
  printf("Aralığın en küçük sayısı:");
  scanf("%d", &min);
  printf("Aralığın en büyük sayısı:");
  scanf("%d", &b);
    
     printf("\nAsal sayılar %d ve %d arasındakiler: ", min, b);
 
  for( a= min; a <= b; a++){
    
    for(i=2;i<a;i++){
      if(a % i == 0) {
        d=0;
        break;
      }
        else{
     d=1;

   }
  }
   if(d==1)
 {
   printf(" %d" , a);
 }  

  }
  return 0;
  }
