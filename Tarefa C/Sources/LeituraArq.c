#include "../Headers/LeituraArq.h"
char* LeituraArq(char * Entrada){
  FILE * f;
  char Buffer[33];
  char * ArqSaida = (char*)calloc(1000000,sizeof(char)); //Texto maximo suportado: 1000000 de caracteres;
  f = fopen(Entrada,"r");
  if(f==NULL){
    printf("Erro durante abertura de arquivo!\n");
    return NULL;
  }
  else{
    strcpy(ArqSaida,"\0");
    strcpy(Buffer,"\0");
    while(fscanf(f,"%s",Buffer)!=EOF){
      strcat(ArqSaida,Buffer);
      strcat(ArqSaida," ");
      strcpy(Buffer,"\0");
    }
    strcat(ArqSaida,"\0");
    return ArqSaida;
  }
}
