#include <stdio.h>
int main() {
int nota=1,tamanho=0;
  float media=0;
  while(nota > 0){
    printf("Digite sua nota:");
    scanf("%d",&nota);
   if(nota >=0){ media += nota;
    tamanho++;
  }
  }
  printf("A media das notas digitadas e :%1.1f",media / tamanho);
return  0;
}
