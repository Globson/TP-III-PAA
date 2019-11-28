#ifndef BMH_H
#define BMH_H
#include <stdio.h>
#include <stdlib.h>
#define MAXTAMTEXTO 1000
#define MAXTAMPADRAO 10
#define MAXCHAR 256
typedef char TipoTexto [MAXTAMTEXTO];
typedef char TipoPadrao[MAXTAMPADRAO];
void BMH(TipoTexto T, long n, TipoPadrao P, long m);
#endif
