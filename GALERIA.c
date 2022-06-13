#include "TIME.H"
#include "PONTOS.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibirMenu();
void salvarDados(struct titulos *t,
                 struct pontuacao *p);

void carregarDados(struct titulos *t,
                   struct pontuacao *p);


int main(){
struct titulos times;
struct pontuacao pont;	
int opcao;
int sair;	

times.indice=0;
pont.indice1=0;
times.indice2=0;

carregarDados(&times,&pont);



while(1) {


exibirMenu();
scanf("%d",&opcao);
fflush(stdin);
switch(opcao){
	
case 1:
     cadastrarTimes(&times);
     calcularPontuacao(&times,&pont);
     salvarDados(&times,&pont);
break;	

case 2:
	 exibirTimes(&times); 
	 getchar();
     break;	
	
case 3:

	 	 
     exibirPontuacao(&times,&pont);
     salvarDados(&times,&pont);
     getchar();
     break;
case 0:
system("cls");
printf("digite - 0 - para sair ou qualquer numero para voltar pra o menu: ");
scanf("%d",&sair);
if(sair==0){
exit(0);
}else{
void exibirMenu();	
}
	
case 10:
	
     salvarDados(&times,&pont);	
     break;
     
default:
     puts("Opcao incorreta");
     getchar();
}

}
	
}

void exibirMenu(){
system("cls");
puts("-   Galeria dos campeoes   -");
puts("- Bem vindo a Galeria dos campeoes escolha uma das opcoes do menu:   ");
puts("\n");	
puts("1  -  CADASTRAR TIMES");		
puts("2  -  EXIBIR TIMES E TITULOS");
puts("3  -  EXIBIR PONTUACOES");
puts("0  -  SAIR");		
puts("10 -  SALVAR DADOS");
}



void salvarDados(struct titulos *t,struct pontuacao *p) {
FILE *arquivo;
    
arquivo = fopen("listas.dat", "wb");

if(arquivo != NULL) {
     
fwrite(t, sizeof(struct titulos), 1, arquivo);
fwrite(p, sizeof(struct pontuacao), 1, arquivo);
        
fclose(arquivo);
}
}

void carregarDados(struct titulos *t,struct pontuacao *p) {
    
FILE *arquivo;
   
arquivo = fopen("listas.dat", "rb");
   
if(arquivo != NULL) {

fread(t, sizeof(struct titulos), 1, arquivo);
fread(p, sizeof(struct pontuacao), 1, arquivo);
        

fclose(arquivo);
}

}
