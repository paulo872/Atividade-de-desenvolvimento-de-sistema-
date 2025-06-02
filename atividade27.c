#include <stdio.h>
int main() {
  float preço ,taxa1 = 0.1,taxa2=0.2;
  printf("qual valor do produto desejado ?:");
  scanf("%f",&preço);
  if(preço < 100){
     printf("existe uma taxa no seu produto,ele ficara por:%4f", preço*taxa1+preço);
  }
  if(preço >= 100){
      printf("existe uma taxa no seu produto,ele ficara por:%4f",preço*taxa2+preço);
  }
  return 0;
}
