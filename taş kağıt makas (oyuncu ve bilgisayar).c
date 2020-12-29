#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int t=1,m=2,k=3,i;
  int oyuncu=0,Bilgisayar=0;
  float secim;
srand(time(NULL));
  printf("Taş için 1, makas için 2,kağıt için 3'e basınız, kazanan 1 puan alacak ,berabere de her iki taraf da puan almayacak. Oyun 5 el olacak en çok puanı olan kazanacak.\n");

  for(i=0;i<5;i++){
    printf("Seciminizi Girin:\n");
scanf("%f" , &secim);
int bilgisayar=1+rand()%3;
printf("Bilgisayarın seçimi %d \n" , bilgisayar);

if(secim==1){
   if(bilgisayar==1){
     printf("Berabere\n"); }
   if (bilgisayar==2){
      printf("Bilgisayar kazandı, 1 puan eklendi\n");
        Bilgisayar = Bilgisayar + 1;}
   if(bilgisayar==3){
     printf("Oyuncu kazandı,1 puan eklendi\n");
       oyuncu=oyuncu + 1;}
}
else if(secim==2){
   if(bilgisayar==1){
      printf("Bilgisayar kazandı, 1 puan eklendi\n");
         Bilgisayar = Bilgisayar + 1;}
   if(bilgisayar==2){
       printf("Berabere\n"); }
   if(bilgisayar==3){
       printf("Oyuncu kazandı,1 puan eklendi\n");
         oyuncu=oyuncu + 1;}
}
else if(secim==3){
   if(bilgisayar==1){
      printf("Oyuncu kazandı,1 puan eklendi\n");
         oyuncu=oyuncu + 1;}
   if(bilgisayar==2){
       printf("Bilgisayar kazandı, 1 puan eklendi\n");
          Bilgisayar = Bilgisayar + 1;}
   if(bilgisayar==3){
       printf("Berabere\n"); }
}
else{
    printf("Hatalı giriş yaptınız,bilgisayara 1 puan eklendi\n");
    Bilgisayar = Bilgisayar + 1;}
}
if(Bilgisayar > oyuncu ){
 printf("Bilgisayar Kazandi(bilgisayar: %d  ve oyuncu: %d) \n",Bilgisayar,oyuncu);
}
else if(Bilgisayar < oyuncu ){
  printf("Oyuncu Kazandi (oyuncu: %d ve bilgisayar: %d )\n",oyuncu,Bilgisayar);
}
else if(Bilgisayar =  oyuncu ){
printf("Kazanan yok berabere bitti (oyuncu: %d ve bilgisayar: %d )\n",oyuncu,Bilgisayar);
}
  return 0;
}
