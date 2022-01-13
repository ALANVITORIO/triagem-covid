#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>

char nome[200];
char cpf[20];
int idade;
char sexo[2];
int main();

struct elemento{
	char pergunta[200];
	int pontuacao;
};

struct elemento questoes[]={
	{.pergunta="Tem febre? \n",.pontuacao=5},
	{.pergunta="Tem dor de cabeca?\n",.pontuacao=1},
	{.pergunta="Tem secrecao nasal ou espirros?\n",.pontuacao=1},
	{.pergunta="Tem dor/irritacao na garganta??\n",.pontuacao=1},
	{.pergunta="Tem tosse seca:?\n",.pontuacao=3},
	{.pergunta="Tem dificuldade para respirar?\n",.pontuacao=10},
	{.pergunta="Tem dor no corpo?\n",. pontuacao=1},
	{.pergunta="Tem diarreia?\n",.pontuacao=1},
	{.pergunta="Estevem em contato, nos ultimos 14 dias, com um caso diagnosticado com Covid-19?\n",.pontuacao=10},
	{.pergunta="Esteve em locais com grande aglomeracao?\n",.pontuacao=3},

};


void perguntas(){
	
	char res;
	int i=0;
	int soma=0;
	
	FILE *arquivoTxt;
	arquivoTxt=fopen("dataBase.tx","a");
	if(arquivoTxt==NULL){
	
	printf("Seu arquivo deu erro");
	}
	
	system("cls");
	printf("Responda as perguntas abaixo com S (sim)ou n (Nao)\n");
	printf("---------------------------------------------\n");
	for(i=0;i<10;i++){
		printf("%s",questoes[i].pergunta);
		scanf("%c",&res);
		fflush(stdin);
		fprintf(arquivoTxt,"%s %c \n",questoes[i].pergunta,res);
		
		if(res=='S'||res=='s'){
			soma=soma+questoes[i].pontuacao;
			}
		
	}
	fprintf(arquivoTxt,"Pontuacao total :%d",soma);
	fclose(arquivoTxt);
	system("cls");
	
	if (soma>=0&&soma<10){
		printf("Voce somou %d pontos e deve se encaminhar para a ala de baixo risco\n",soma);
	}
			if (soma>=10&&soma<20){
		printf("Voce somou %d pontos e deve se encaminhar para a ala de medio risco\n",soma);
		
	}
		if (soma>=20){
		printf("Voce somou %d pontos e deve se encaminhar para a ala de alto risco\n",soma);
		
	}
		printf("Pressione enter para voltar ao menu \n");
		system ("pause");
		main();
}


void cadastrar_paciente(){
	
	FILE*arquivoTxt;
	arquivoTxt=fopen("dataBase.txt","a");
	if(arquivoTxt==NULL)
	{
		printf("ERROR");
	}
	printf("Ola, vamos primeiro pegar alguns dos seus dados \n");
	printf("Primeiro informe o seu nome\n");
	scanf("%s",&nome);
	fflush(stdin);
	
	printf(" Agora informe o seu cpf\n");
	scanf("%s",&cpf);
	fflush(stdin);
	
	printf(" Quantos anos voce tem?\n");
	scanf("%d",&idade);
	fflush(stdin);
	
	printf("Informe o seu sexo, Masculino[M]/Feminino[F]\n");
	scanf("%s",&sexo);
	fflush(stdin);
	
	fprintf(arquivoTxt,"nome: %s\n");
	fprintf(arquivoTxt,"cpf:%s \n");
	fprintf(arquivoTxt,"idade:%d \n");
	fprintf(arquivoTxt,"sexo:%s \n");
	fclose(arquivoTxt);
	
	printf("Seus dados estao salvos!! \n");
	printf("Agora iremos fazer uma serie de perguntas\n");
	printf("Essas perguntas irao te direcionar a ala correta \n");
	system("pause");
	
	perguntas();
		
		
		
	

	
	
}




int main(){
	int opcao;
	
	printf("=======--MENU--======\n");
	printf("1- Me cadastrar\n");
	printf("0-Sair\n");
	printf("Por favor, selecione uma opcao \n");
	scanf("%i",&opcao);
	fflush(stdin);
	
	switch(opcao){
		case 0:
			printf("\n Fim de programa");
			break;
		case 1:
			cadastrar_paciente();
			break;
				default:
			break;
		}
	}



