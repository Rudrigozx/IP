#ifndef PONTOS_H
#define  PONTOS_H
#include "TIME.H"

struct ponto{	
int pontuacao;	
int pontuacaoBrasileiro;
int pontuacaoCopabrasil;
int pontuacaoLibertadores;
int pontuacaoMundial;

};

struct pontuacao{
  struct ponto  pontos[100];
int indice1 ;
};
void calcularPontuacao(struct titulos *ti,struct pontuacao *p);
void exibirPontuacao(struct titulos *ti,struct pontuacao *p);
#endif
