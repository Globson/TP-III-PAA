#ifndef SHIFTAND_H
#define SHIFTAND_H
#define MAXTAMTEXTO 1000
#define MAXTAMPADRAO 10
#define MAXCHAR 256
#define NUMMAXERROS 10
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
typedef char TipoTexto [MAXTAMTEXTO];
typedef char TipoPadrao[MAXTAMPADRAO];
void ShiftAndAproximado(TipoTexto T, long n, TipoPadrao P, long m, long k,int Operacoes[]);
#endif
