#include "../Headers/ShiftAnd.h"

int * FazMascara(char * P,int m){
  int * M;
  M = (int *)calloc(256, sizeof(int)); //128
  for(int i=0;i < m; i++){
    M[P[i]] = M[P[i]] | 1 << (m-i-1);
  }
  return M;
}
void ShiftAnd(char * P, char * T,int m,int n){
  int R;
  int i;
  int * M;
  M =FazMascara(P,m);
  R = 0;
  for(i = 0; i < n; i++){
      R = (((R >> 1) | (1 << (m-1)) ) & M[T[i]]);
      if((R & 1) != 0){
          printf("\t--> Casamento na posicao: %3d <--\n", i - m + 2);
      }
  }
  free(M);
}
/*
void PreMasc(unsigned long int ** M, const char * P, unsigned int m)
{
    unsigned int i;
    for (i = 0; i < m; i++) {
        (*M)[P[i]] = (*M)[P[i]] | (1ul << i);
    }
}

void ShiftAnd(const char * T, unsigned int n, const char * P, unsigned int m)
{
    unsigned long int * M;
    M = (unsigned long int *)calloc(128,sizeof(unsigned long int));

    PreMasc(&M, P, m);

    unsigned long int R = 0;
    unsigned long int z = 1ul << m - 1;
    for (unsigned int i = 0; i < n; i++) {
        R = ((R << 1) | 1ul) & M[T[i]];
        if (R & z) {
            printf("\t--> Casamento no caractere: %u <--\n", i - m + 2);
        }
    }
    free(M);
}
*/
