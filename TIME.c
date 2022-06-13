#include "TIME.H"
#include "PONTOS.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void cadastrarTimes(struct titulos *t){
system("cls");	
printf("Vamos cadastrar um time!\n ");
printf("\n ");


printf("digite o nome do time: ");
fgets(t->tabela[t->indice].nometime,25,stdin);
fflush(stdin);
printf("digite o numero de titulos do Brasileirão (ou  qualquer outro campeonato nacional ): ");	
scanf("%d",&t->tabela[t->indice].numeroBrasileiro);
printf("digite o numero de titulos da Copa do Brasil (ou qualquer outra copa nacional): ");	
scanf("%d",&t->tabela[t->indice].numeroCopabrasil);
printf("digite o numero de titulos da Libertadores(ou champions League): ");	
scanf("%d",&t->tabela[t->indice].numeroLibertadores);
printf("digite o numero de titulos do Mundial: ");	
scanf("%d",&t->tabela[t->indice].numeroMundial);


t->indice++;	
}

void exibirTimes(struct titulos *t){
int i;
system("cls");
printf("-----GALERIA DOS CAMPEOES-----\n");
printf("\n");	
for(i=0;i< t->indice;i++){
printf("%s",t->tabela[i].nometime);
printf("\n");
printf("Titulos:");
printf("\n");
printf("Brasileirão (ou  qualquer outro campeonato nacional ): %d\n",t->tabela[i].numeroBrasileiro);
printf("\n");
printf("Copa do Brasil (ou qualquer outra copa nacional): %d\n",t->tabela[i].numeroCopabrasil);
printf("\n");
printf("Libertadores(ou champions League): %d\n",t->tabela[i].numeroLibertadores);
printf("\n");
printf("Mundial: %d\n",t->tabela[i].numeroMundial);
printf("\n");
printf("\n");
printf("\n");	
}
}
	

