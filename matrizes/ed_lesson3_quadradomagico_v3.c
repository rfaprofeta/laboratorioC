#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int c,l,v=0,i=0;
  int vet[10];
  int mat[4][4];

  for(c=0;c<10;c++)
    vet[c]=0;

  for(l=0;l<4;l++)
    for(c=0;c<4;c++){
      mat[l][c] = atoi(argv[v+1]);
      vet[c] += mat[l][c];
      vet[l+4] += mat[l][c];
      v++;
      if(c == l){
        vet[8] += mat[l][c];
      }else if(l+c == 3){
        vet[9] += mat[l][c];
      }
    }

  for(l=0;l<4;l++){
    for(c=0;c<4;c++)
      printf("%d\t",mat[l][c]);
    printf("\n");
  }

  while(i<10){
    if(vet[i] != 34){
      printf("Não é um quadrado magico.\n");
      break;
    } else if(i == 9){
      printf("É um quadrado mágico.\n");
    }
    i++;
  }
  return 0;
}
