#include <stdio.h>
#include <string.h>

int i;

typedef struct
{
   int matricula;
   char nome[10];
   int idade;
   float nota1;
   float nota2;
   float nota3;
}alunos;

cadastro(alunos vet[], int b)
{
    printf("Para comecar a utilizar o programa, primeiro voce deve cadastrar os alunos!\n");
    for(i=0;i<b;i++)
    {
        printf("Digite a matricula do aluno: \n");
        scanf("%d",&vet[i].matricula);
        printf("Digite o nome do aluno: \n");
        scanf("%s",&vet[i].nome);
        printf("Digite a idade do aluno: \n");
        scanf("%d",&vet[i].idade);
        printf("Digite a primeira nota: \n");
        scanf("%f",&vet[i].nota1);
        printf("Digite a segunda nota: \n");
        scanf("%f",&vet[i].nota2);
        printf("Digite a terceira nota: \n");
        scanf("%f",&vet[i].nota3);        
    }
}

consulta(alunos vet[], int b)
{
    float media; int x;
    printf("Digite a matricula do aluno que voce deseja consultar: \n");
    scanf("%d",&x);
    for(i=0;i<b;i++)
    if(x==vet[i].matricula)
    {
        printf("Nome: %s - ",vet[i].nome);
        printf("Idade: %d - ",vet[i].idade);
        printf("Primeira Nota: %.2f - ",vet[i].nota1);
        printf("Segunda Nota: %.2f - ",vet[i].nota2);
        printf("Terceira Nota: %.2f - ",vet[i].nota3);
        media=(vet[i].nota1+vet[i].nota2+vet[i].nota3)/3;
        printf("Media: %.2f\n",media);
    }
}

impressao(alunos vet[], int b)
{
    for(i=0;i<b;i++)
    {
    float media;
    printf("Matricula: %d\n",vet[i].matricula);
    printf("Nome: %s\n",vet[i].nome);
    printf("Idade: %d\n",vet[i].idade);
    printf("Primeira Nota: %.2f\n",vet[i].nota1);
    printf("Segunda Nota: %.2f\n",vet[i].nota2);
    printf("Terceira Nota: %.2f\n",vet[i].nota3);
    media=(vet[i].nota1+vet[i].nota2+vet[i].nota3)/3;
    printf("Media: %.2f\n",media);    
    }
}

media(alunos vet[], int b)
{
    float media;
    for(i=0;i<b;i++)
    {
        printf("Nome: %s - ",vet[i].nome);
        media=(vet[i].nota1+vet[i].nota2+vet[i].nota3)/3;
        printf("Media: %.2f - \n",media);
    }
}

alunoMaisVelho(alunos vet[], int b)
{
    int maior=0; int pos=0;
    for(i=0;i<b;i++)
    {
        if(vet[i].idade>maior)
        {   
            maior=vet[i].idade;
            pos=i;
        }
    }
        printf("Aluno Mais Velho: %s - ",vet[pos].nome);
        printf("Idade: %d - ",vet[pos].idade);
        printf("Primeira Nota: %.2f - ",vet[pos].nota1);
        printf("Segunda Nota: %.2f - ",vet[pos].nota2);
        printf("Terceira Nota: %.2f\n",vet[pos].nota3);
}

main()
{
    int resp; int x;
    alunos vet[3];
    cadastro(vet,3);
    
    i=0;
    while(resp!=5)
    {
        printf("Digite uma das opcoes abaixo:\n");
        printf("1-Consultar aluno pela matricula\n");
        printf("2-Imprimir os dados de todos os alunos\n");        
        printf("3-Mostrar as medias de cada aluno\n");
        printf("4-Mostrar os dados do aluno mais velho\n"); 
        printf("5-Sair\n");
        scanf("%d",&resp);

    switch(resp)
    {
        case 1: consulta(vet,3); break;
        case 2: impressao(vet,3); break;
        case 3: media(vet,3); break;
        case 4: alunoMaisVelho(vet,3); break;
        case 5: i=1; break;
        default: printf("Valor invalido\n"); break;
    }
    }

}

