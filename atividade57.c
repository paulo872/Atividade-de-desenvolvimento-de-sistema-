#include <stdio.h>
int main() {
int senha=0;
  while(senha != 123){
    printf("Digite sua senha\n");
    scanf("%d",&senha);
    if(senha == 123){
      printf("senha correta senhor\n");
    }else {
      printf("tente novamente\n");
          }
  }
  return 0;
}
