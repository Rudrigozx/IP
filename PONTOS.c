#include "TIME.H"
#include "PONTOS.H"
#include <stdio.h>


void calcularPontuacao(struct titulos *ti,struct pontuacao *p){

p->pontos[p->indice1].pontuacaoBrasileiro=ti->tabela[ti->indice2].numeroBrasileiro*2;

p->pontos[p->indice1].pontuacaoCopabrasil=ti->tabela[ti->indice2].numeroCopabrasil*2;
	
p->pontos[p->indice1].pontuacaoLibertadores=ti->tabela[ti->indice2].numeroLibertadores*3;
	
p->pontos[p->indice1].pontuacaoMundial=ti->tabela[ti->indice2].numeroMundial*5;
	
p->pontos[p->indice1].pontuacao=p->pontos[p->indice1].pontuacaoBrasileiro + p->pontos[p->indice1].pontuacaoCopabrasil + p->pontos[p->indice1].pontuacaoLibertadores + p->pontos[p->indice1].pontuacaoMundial;

p->indice1++;
ti->indice2++;

}

void exibirPontuacao(struct titulos *ti,struct pontuacao *p){
int i;
system("cls");
printf("-----PONTUACAO-----\n");
printf("veja as pontuacoes dos times cadastrados a seguir:");
printf("\n");	
for(i=0;i<ti->indice;i++){
printf("\n");	
printf("%s - %d  pontos\n",ti->tabela[i].nometime,p->pontos[i].pontuacao);
printf("\n");	
}
}




	
	










