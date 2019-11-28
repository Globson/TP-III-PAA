#include "Headers/BMH.h"
#include "Headers/ShiftAnd.h"
#include "Headers/Timing.h"
#include "Headers/LeituraArq.h"
#define DEBUG 1
int main(int argc, char const *argv[]) {
  /*char *Txt = (char*)malloc(sizeof(char));
  printf("Entre com o texto: ");
  scanf("%[^\n]",Txt);
  char Padrao[]="rato";
  */
  //char Txt[]="Em rapido rapto, um rapido rato raptou tres ratos sem deixar rastros";
  Timer timer;
  char *Padrao = (char*)malloc(sizeof(char));
  char Entrada[33];
  printf("Entre com o nome do arquivo de entrada (.txt): ");
  scanf("%s",Entrada);
  char* Txt = LeituraArq(Entrada);
  printf("Entre com o padrao: ");
  scanf("%s",Padrao);
  int P = strlen(Padrao);
  printf("\nAlgoritmo Shift-And: \n");
  if(DEBUG){
    IniciarTimer(&timer);
    ShiftAnd(Padrao,Txt,P,strlen(Txt));
    PararTimer(&timer);
    printf("\n-> O tempo de execucao do algoritmo Shift-And foi de %lf segundos\n\n", TempoTotal(timer));
  }
  else{
    ShiftAnd(Padrao,Txt,P,strlen(Txt));
  }
  //ShiftAnd(Txt,strlen(Txt),Padrao,P);
  printf("Algoritmo BMH: \n");
  if(DEBUG){
    IniciarTimer(&timer);
    BMH(Txt,strlen(Txt),Padrao,P);
    PararTimer(&timer);
    printf("\n-> O tempo de execucao do algoritmo BMH foi de %lf segundos\n\n", TempoTotal(timer));
  }
  else{
    BMH(Txt,strlen(Txt),Padrao,P);
  }
  free(Txt);
  return 0;
}
