#include <stdio.h>  atividade 63
int main(void) {
  int numeros[2][2];
  printf("imprimindo os elementos da matriz\n");
  for(int i = 0;i < 2;i++){
    for (int j = 0;j < 2;j++){
      scanf("%d",&numeros[i][j]);
     
  }
      }
  printf("imprimindo os elementos da matriz\n");
  for(int i = 0;i < 2;i++){
    for (int j = 0;j < 2;j++){
      printf("%d ",numeros[i][j]);
      }
      printf("\n");
      }
      
  return 0 ;
}
 #include <stdio.h> //atividade 64
 int main(void) {
   int numeros[3][3];
    printf("imprimindo a diagonal  3x3\n");
    for(int i = 0;i < 3;i++){
      for (int j = 0;j < 3;j++){
        scanf("%d ",&numeros[i][j]);
    }
        }
   for(int i = 0;i < 3;i++){ 
     printf("%d ",numeros[i][i]);}
   return 0 ;
 }
#include <stdio.h> //atividade 65
int main(void){
int matriz[2][3],soma=0; 
  printf("imprimindo a diagonal  2x3\n");
  for(int i = 0;i < 2;i++){
        for (int j = 0;j < 3;j++){
            scanf("%d",&matriz[i][j]);
}
}  
  for(int i = 0;i < 2;i++){
    for (int j = 0;j < 3;j++){
        soma = soma + matriz[i][j];
} 
} 
   printf("%d e soma de todos os numero ",soma);
  return 0;
}
#include <stdio.h> //atividade 66
int main(void){
int matriz[3][3],maior=0; 
  printf("imprimindo a diagonal  3x3\n");
  for(int i = 0;i < 3;i++){
        for (int j = 0;j < 3;j++){
            scanf("%d",&matriz[i][j]);
}
}
  for(int i = 0;i < 3;i++){
    for (int j = 0;j < 3';j++){
        if(matriz[i][j] > maior)
            maior = matriz[i][j];
    }
  }
  printf("%d",maior); 
  return 0;
}
 #include <stdio.h> //atividade 67
int main(void){
  int matriz[3][2],pares=0;
    printf("imprimindo a diagonal  3x2\n");
    for(int i = 0;i < 3;i++){
          for (int j = 0;j < 2;j++){
              scanf("%d",&matriz[i][j]);
  }
  }
    for(int i = 0;i < 3;i++)
      for (int j = 0;j < 2;j++){
          if(matriz[i][j] % 2 == 0)
              pares++;
  }
  printf("tem %d numeros pares",pares);
  return 0;
}
 #include <stdio.h> //atividade 68
int main(void){
  int matriz[2][2],temp;
  printf("digite os elementos da matriz 2x2\n");
  for(int i = 0;i < 2;i++){
        for (int j = 0;j < 2;j++){
            scanf("%d",&matriz[i][j]);
  } 
    
  }
  for(int i = 0;i < 2;i++)
      for (int j = 0;j < 2;j++)
          if(i < j){
              temp = matriz[i][j];
              matriz[i][j] = matriz[j][i];
              matriz[j][i] = temp;
  }
  printf("matriz apos troca as linhas");
    for(int i = 0;i < 2;i++)
      for (int j = 0;j < 2;j++)
          printf("%d",matriz[i][j]);
  return 0;
}
#include <stdio.h> //atividade 69
int main(void){
int matriz[2][3];
  printf("digite os elementos da matriz 2x3\n");
  for(int i = 0;i < 2;i++){
        for (int j = 0;j < 3;j++){
            scanf("%d",&matriz[i][j]);
  }
  }
  printf("matriz 2x3\n");
  for(int i = 0;i < 2;i++){
      for (int j = 0;j < 3;j++){
          printf("%d",matriz[i][j]);
  }
  printf("\n");
  }
  return 0;
}  
#include <stdio.h> //atividade 70
int main(void){
int matriz[3][3];
  printf("digite os elementos da matriz 3x3\n");
  for(int i = 0;i < 3;i++){
        for (int j = 0;j < 3;j++){
            scanf("%d",&matriz[i][j]);
  }
  }
  for(int i = 0;i < 3;i++){
    int soma=0;
    for (int j = 0;j < 3;j++){
        soma = soma + matriz[i][j];
  
  }
  printf("a soma da linha %d e %d",i,soma);
}
  return 0;
}
