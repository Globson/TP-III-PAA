#include "Headers/ShiftAnd.h"
#include "Headers/LeituraArq.h"

int main(int argc, char const *argv[]) {
  /*char *Txt = (char*)malloc(sizeof(char));
  char *Padrao = (char*)malloc(sizeof(char));
  printf("Entre com o texto: ");
  scanf("%[^\n]",Txt);
  printf("Entre com o padrao: ");
  scanf("%s",Padrao);
  char Txt[]="Em rapido rapto, um rapido rato raptou tres ratos sem deixar rastros";
  char Padrao[]="rapido";
  */
  int k;
  char *Padrao = (char*)malloc(sizeof(char));
  char Entrada[33];
  printf("Entre com o nome do arquivo de entrada (.txt): ");
  scanf("%s",Entrada);
  char* Txt = LeituraArq(Entrada);
  printf("Entre com o padrao: ");
  scanf("%s",Padrao);
  int Operacoes[3];
  int p = strlen(Padrao);
  printf("Entre com o tamanho de k: ");
  scanf("%d",&k);
  if(k>=p){
    printf("O tamanho de k é maior ou igual ao tamanho do padrão!\n");
  }
  printf("Deseja utilizar operacao de insercao?\n\t1 - Sim\n\t0 - Nao\n");
  do{
    printf("Entre: ");
    scanf("%d",&Operacoes[0]);
    if(Operacoes[0]!=1 && Operacoes[0]!=0){
      printf("Erro! Entrada invalida!\n");
    }
  }while(Operacoes[0]!=1 && Operacoes[0]!=0);

  printf("Deseja utilizar operacao de remocao?\n\t1 - Sim\n\t0 - Nao\n");
  do{
    printf("Entre: ");
    scanf("%d",&Operacoes[1]);
    if(Operacoes[1]!=1 && Operacoes[1]!=0){
      printf("Erro! Entrada invalida!\n");
    }
  }while(Operacoes[1]!=1 && Operacoes[1]!=0);

  printf("Deseja utilizar operacao de substituicao?\n\t1 - Sim\n\t0 - Nao\n");
  do{
    printf("Entre: ");
    scanf("%d",&Operacoes[2]);
    if(Operacoes[2]!=1 && Operacoes[2]!=0){
      printf("Erro! Entrada invalida!\n");
    }
  }while(Operacoes[2]!=1 && Operacoes[2]!=0);

  ShiftAndAproximado(Txt,strlen(Txt),Padrao,p,k,Operacoes);
  return 0;
}
