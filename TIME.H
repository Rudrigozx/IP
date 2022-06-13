#ifndef TIME_H
#define TIME_H

//ESTRUTURA DOS TIMES(INDIVIDUALMENTE)

struct time{
char nometime[25];	
int numeroLibertadores;	
int numeroMundial;
int numeroBrasileiro;
int numeroCopabrasil;		
};

//ESTRUTURA PARA ARMAZENAR OS TIMES

struct titulos{
  struct time tabela[100];
int indice ;	
int indice2;				
};

void cadastrarTimes(struct titulos *t);
void exibirTimes(struct titulos *t);

#endif
