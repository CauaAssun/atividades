#include <stdio.h>

main(){
  while (1) {
    printf("NOVO CADASTRO\n\n");
    
    char nome[30];
    printf("Digite seu nome: "),
    fgets(nome, 30, stdin);
  
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar();
  
    char matricula[50];
    printf("Digite sua matricula: ");
    fgets(matricula, 50, stdin);
    
    char endereço[40];
    printf("Digite seu endereço: ");
    fgets(endereço, 40, stdin);
    
    char curso[50];
    printf("Qual o seu curso: ");
    fgets(curso, 50, stdin);
    
    char periodo[15];
    printf("Digite em que periodo estuda: ");
    fgets(periodo, 15, stdin);
    
    char disciplina[50];
    printf("Qual a disciplina da atividade: ");
    fgets(disciplina, 50, stdin);
  
    printf("\nConfirme seus dados:\n");
    printf("\nNome: %s", nome);
    printf("\nIdade: %d\n", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereço: %s", endereço);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %s", periodo);
    printf("\nDisciplina: %s\n\n", disciplina);
  
    int resposta;
    printf("Digite 1 se todos os dados estiverem corretos, ou 2 se houver algo errado: ");
    scanf("%d", &resposta);
    getchar();
  
    if (resposta == 1) {
      printf("Cadastro efetuado com sucesso!!!\n");
      break;
    } else if (resposta != 2) {
      printf("\nResposta invalida, digite 1 ou 2!\n");
      break;
    }
      }
  
      return 0;
  }