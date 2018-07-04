#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//vari�veis declaradas
char TECLA;
// string para produtos
char Test[] = "Eletr�nico";
char Test2[] = "Comida";
char Test3[] = "Vestu�rio";
char Test4[] = "Os tr�s";
char Test5[] = "Eletr�nico e Comida";
char Test6[] = "Comida e Vestu�rio";
char Test7[] = "Eletr�nico e Vestu�rio";
//char g�nero
char Ambos[] = "Ambos";
char homem[] = "masculino";
char Hom[] = "Masculino";
char Mul[] = "Feminino";
char mulher[] = "feminino";
// string para faixas
char Tst[] = "Adolescente";
char Tst2[] = "Adulto";
char Tst3[] = "Melhor Idade";
char Tst4[] = "Adolescente e Adulto";
char Tst5[] = "Adolescente e Melhor Idade";
char Tst6[] = "Adulto e Melhor Idade";
char Tst7[] = "Os tr�s";
//eletronico
int adole_ele, adulto_ele, melhor_idade_ele;
int masc_ele, fem_ele;
int comp_ele;
//comida
int adole_com, adulto_com, melhor_idade_com;
int masc_com, fem_com;
int comp_com;
//vestu�rio
int adole_ves, adulto_ves, melhor_idade_ves;
int masc_ves, fem_ves;
int comp_ves;
//faixas et�rias
int masc_ado, fem_ado;
int masc_adu, fem_adu;
int masc_idade, fem_idade;
char resposta[20];
char res[40];
// fun��es declaradas
void produto(void);
void compra(void);
void sexo(void);
void faixa(void);
void leitura_ele(void);
void leitura_com(void);
void leitura_ves(void);
int saida_faixa(char Etaria[20],int Opt);
int saida_produto(char produto[20],int Opt2);
int saida_genero(char sex[20],int Opt3);
// menu principal
int main()
{
    //vari�veis eletr�nicos
    adole_ele = 0;
    adulto_ele = 0;
    melhor_idade_ele = 0;
    masc_ele = 0;
    fem_ele = 0;
    comp_ele = 0;
    // vari�veis comidas
    adole_com = 0;
    adulto_com = 0;
    melhor_idade_com = 0;
    masc_com = 0;
    fem_com = 0;
    comp_com = 0;
    // vari�veis comidas
    adole_ves = 0;
    adulto_ves = 0;
    melhor_idade_ves = 0;
    masc_ves = 0;
    fem_ves = 0;
    comp_ves = 0;
    //faixa et�ria
    masc_ado = 0;
    fem_ado = 0;
    masc_adu = 0;
    fem_adu = 0;
    masc_idade = 0;
    fem_idade = 0;
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    printf("Bem vindo ao programa de pesquisa da Amazon!\n");

    int OPCAO = 0;
    while (OPCAO != 5) {
     system("cls");
     printf("\n\nMenu Principal\n");
     printf("--------------\n\n");
     printf("[1] Cadastrar Compra\n");
     printf("[2] Resultado da pesquisa por faixa et�ria\n");
     printf("[3] Resultado da pesquisa por produto\n");
     printf("[4] Resultado da pesquisa por g�nero\n");
     printf("[5] Sair do programa\n");
     printf("\nPor favor. Escolha uma opcao: \n");
     fflush(stdin);
     scanf("%d", &OPCAO);
     if (OPCAO != 5) {
         switch (OPCAO) {
    case 1:
        compra();
        OPCAO = 0;
        break;
    case 2:
        faixa();
        OPCAO = 0;
        break;
    case 3:
        produto();
        OPCAO = 0;
        break;
    case 4:
        sexo();
        OPCAO = 0;
        break;
    default:
        printf("Opcao Invalida - Tecle <Enter>");
        fflush(stdin);
        while ((TECLA = getchar()) != '\r')
        break;
      }
     }
    }
    return 0;
}

// registro de produtos no programa
void compra(void)
{
    int OPCAO = 0;
    while (OPCAO != 4) {
     system("cls");
     printf("\n\n Menu de Cadastro dos Produtos: \n");
     printf("--------------\n\n");
     printf("[1] Eletr�nico\n");
     printf("[2] Comida/Fast Food\n");
     printf("[3] Vestu�rio\n");
     printf("[4] Voltar ao Menu Principal\n");
     printf("\nPor favor. Escolha uma opcao: \n");
     fflush(stdin);
     scanf("%d", &OPCAO);
     if (OPCAO != 4) {
         switch (OPCAO) {
    case 1:
        leitura_ele();
        OPCAO = 0;
        break;
    case 2:
        leitura_com();
        OPCAO = 0;
        break;
    case 3:
        leitura_ves();
        OPCAO = 0;
        break;
    default:
        printf("Opcao Invalida - Tecle <Enter>");
        fflush(stdin);
        while ((TECLA = getchar()) != '\r')
        break;
      }
     }
    }
    return;
}

//resultado das pesquisas:produto
void produto(void)
{
    int OPCAO = 0;
    while (OPCAO != 4) {
     system("cls");
     printf("\n\n Menu de Pesquisa dos Produtos: \n");
     printf("--------------\n\n");
     printf("[1] Eletr�nico\n");
     printf("[2] Comida/Fast Food\n");
     printf("[3] Vestu�rio\n");
     printf("[4] Voltar ao Menu Principal\n");
     printf("\nPor favor. Escolha uma opcao: \n");
     fflush(stdin);
     scanf("%d", &OPCAO);
     if (OPCAO != 4) {
         switch (OPCAO) {
    case 1:
        saida_produto("Eletr�nico",OPCAO);
        OPCAO = 0;
        break;
    case 2:
        saida_produto("Comida",OPCAO);
        OPCAO = 0;
        break;
    case 3:
        saida_produto("Vestu�rio",OPCAO);
        OPCAO = 0;
        break;
    default:
        printf("Opcao Invalida - Tecle <Enter>");
        fflush(stdin);
        while ((TECLA = getchar()) != '\r')
        break;
      }
     }
    }
    return;
}

// resultados das pesquisas: faixa et�ria
void faixa(void)
{
    int OPCAO = 0;
    while (OPCAO != 4) {
     system("cls");
     printf("\n\n Menu de Pesquisa por faixa et�ria: \n");
     printf("--------------\n\n");
     printf("[1] Adolescente\n");
     printf("[2] Adulto\n");
     printf("[3] Melhor idade\n");
     printf("[4] Voltar ao Menu Principal\n");
     printf("\nPor favor. Escolha uma opcao: \n");
     fflush(stdin);
     scanf("%d", &OPCAO);
     if (OPCAO != 4) {
         switch (OPCAO) {
    case 1:
        saida_faixa("Adolescente",OPCAO);
        break;
    case 2:
        saida_faixa("Adulto",OPCAO);
        break;
    case 3:
        saida_faixa("Melhor Idade",OPCAO);
        break;
    default:
        printf("Opcao Invalida - Tecle <Enter>");
        fflush(stdin);
        while ((TECLA = getchar()) != '\r')
        break;
      }
     }
    }
    return;
}

// resultados das pesquisas: g�nero
void sexo(void)
{
    int OPCAO = 0;
    while (OPCAO != 3) {
     system("cls");
     printf("\n\n Menu de Pesquisa dos Sexos: \n");
     printf("--------------\n\n");
     printf("[1] Masculino\n");
     printf("[2] Feminino\n");
     printf("[3] Voltar ao Menu Principal\n");
     printf("\nPor favor. Escolha uma opcao: \n");
     fflush(stdin);
     scanf("%d", &OPCAO);
     if (OPCAO != 3) {
         switch (OPCAO)         {
    case 1:
        saida_genero("Masculino",OPCAO);
        break;
    case 2:
        saida_genero("Feminino",OPCAO);
        break;
    default:
        printf("Opcao Invalida - Tecle <Enter>");
        fflush(stdin);
        while ((TECLA = getchar()) != '\r')
        break;
      }
     }
    }
    return;
}

// leitura de eletr�nicos
void leitura_ele(void)
{
    int idade = 0;
    int cont = 1;
    char gen[20];
    system("cls");
    while(cont == 1) {
    system("cls");
    printf("Entre com a idade: \n");
    fflush(stdin);
    scanf("%d",&idade);
    //idade
    if (idade <= 0) {
    printf("Idade Invalida - Tecle <Enter>");
        fflush(stdin);
        getch();
    }
    if ((idade >= 1) && (idade <= 20)) {
    adole_ele = adole_ele + 1;
    cont = 0;
    }
    if ((idade >= 21) && (idade <= 60)) {
    adulto_ele = adulto_ele + 1;
    cont = 0;
    }
    if (idade >= 61) {
    melhor_idade_ele = melhor_idade_ele + 1;
    cont = 0;
    }
    }
    // gen�ro
    int cont1 = 1;
    while (cont1 == 1) {
    system("cls");
    printf("Por favor, diga qual o seu g�nero(Masculino ou Feminino): \n");
    fflush(stdin);
    gets(gen);
    // compara e v� se escreveu masculino
    if (strcmp (homem,gen) == 0) {
    masc_ele = masc_ele + 1;
    cont1 = 0;
    comp_ele = comp_ele + 1;
    //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    //fim da compara��o masculino
    }
    //Compara e v� se escreveu Masculino
    else if (strcmp (Hom,gen) == 0) {
    masc_ele = masc_ele + 1;
    cont1 = 0;
    comp_ele = comp_ele + 1;
    //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    //fim compara��o Masculino
    }
    //compara e v� se escreveu feminino
    else if (strcmp (mulher,gen) == 0) {
    fem_ele = fem_ele + 1;
    cont1 = 0;
    comp_ele = comp_ele + 1;
     //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    // fim compara��o feminino
    }
    //compara e v� se escreveu Feminino
    else if (strcmp (Mul,gen) == 0) {
    fem_ele = fem_ele + 1;
    cont1 = 0;
    comp_ele = comp_ele + 1;
    //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    //fim compara��o Feminino
    }
    //op��o caso g�nero n�o seja reconhecido
    else    {
    cont1 = 1;
    printf("Opcao Invalida - Tecle <Enter>");
    fflush(stdin);
    getch();
    }
    }
    return;
}

// leitura de comidas
void leitura_com(void)
{
    int idade = 0;
    int cont = 1;
    char gen[20];
    system("cls");
    while(cont == 1) {
    system("cls");
    printf("Entre com a idade: \n");
    fflush(stdin);
    scanf("%d",&idade);
    //idade
    if (idade <= 0) {
    printf("Idade Invalida - Tecle <Enter>");
        fflush(stdin);
        getch();
    }
    if ((idade >= 1) && (idade <= 20)) {
    adole_com = adole_com + 1;
    cont = 0;
    }
    if ((idade >= 21) && (idade <= 60)) {
    adulto_com = adulto_com + 1;
    cont = 0;
    }
    if (idade >= 61) {
    melhor_idade_com = melhor_idade_com + 1;
    cont = 0;
    }
    }
    //gen�ro
    int cont1 = 1;
    while (cont1 == 1) {
    system("cls");
    printf("Por favor, diga qual o seu g�nero(Masculino ou Feminino): \n");
    fflush(stdin);
    gets(gen);
    // compara e v� se escreveu masculino
    if (strcmp (homem,gen) == 0) {
    masc_com = masc_com + 1;
    cont1 = 0;
    comp_com = comp_com + 1;
     //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    //fim compra��o masculino
    }
    // compara e v� se escreveu Masculino
    else if (strcmp (Hom,gen) == 0) {
    masc_com = masc_com + 1;
    cont1 = 0;
    comp_com = comp_com + 1;
     //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    // compara e v� se escreveu Masculino
    }
    //compara e v� se escreveu feminino
    else if (strcmp (mulher,gen) == 0) {
    fem_com = fem_com + 1;
    cont1 = 0;
    comp_com = comp_com + 1;
    //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    //fim da compra��o feminino
    }
    //compara e v� se escreveu Feminino
    else if (strcmp (Mul,gen) == 0) {
    fem_com = fem_com + 1;
    cont1 = 0;
    comp_com = comp_com + 1;
    //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    //fim compara��o Feminino
    }
    //op��o caso g�nero n�o seja reconhecido
    else {
    cont1 = 1;
    printf("Opcao Invalida - Tecle <Enter>");
    fflush(stdin);
    getch();
    }
    }
    return;
}

// leitura de vestu�rio
void leitura_ves(void)
{
    int idade = 0;
    int cont = 1;
    char gen[20];
    system("cls");
    while(cont == 1) {
    system("cls");
    printf("Entre com a idade: \n");
    fflush(stdin);
    scanf("%d",&idade);
    //idade
    if (idade <= 0) {
    printf("Idade Invalida - Tecle <Enter>");
        fflush(stdin);
        getch();
    }
    if ((idade >= 1) && (idade <= 20)) {
    adole_ves = adole_ves + 1;
    cont = 0;
    }
    if ((idade >= 21) && (idade <= 60)) {
    adulto_ves = adulto_ves + 1;
    cont = 0;
    }
    if (idade >= 61) {
    melhor_idade_ves = melhor_idade_ves + 1;
    cont = 0;
    }
    }
    //gen�ro
    int cont1 = 1;
    while (cont1 == 1)
    {
    system("cls");
    printf("Por favor, diga qual o seu g�nero(Masculino ou Feminino): \n");
    fflush(stdin);
    gets(gen);
    // compara e v� se escreveu masculino
    if (strcmp (homem,gen) == 0) {
    masc_ves = masc_ves + 1;
    cont1 = 0;
    comp_ves = comp_ves + 1;

     //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    // fim compara��o masculino
    }
    // compara e v� se escreveu Masculino
    else if (strcmp (Hom,gen) == 0) {
    masc_ves = masc_ves + 1;
    cont1 = 0;
    comp_ves = comp_ves + 1;

     //aumenta a compra da faixa et�ria por g�nero(masculino)
    if ((idade >= 1) && (idade <= 20)) {
    masc_ado = masc_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    masc_adu = masc_adu + 1;
    }
    if (idade >= 61) {
    masc_idade = masc_idade + 1;
    }
    //fim faixa et�ria

    // fim compara��o Masculino
    }
    //compara e v� se escreveu feminino
    else if (strcmp (mulher,gen) == 0) {
    fem_ves = fem_ves + 1;
    cont1 = 0;
    comp_ves = comp_ves + 1;

    //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    //fim compara��o feminino
    }

    //compara e v� se escreveu Feminino
    else if (strcmp (Mul,gen) == 0) {
    fem_ves = fem_ves + 1;
    cont1 = 0;
    comp_ves = comp_ves + 1;
    //aumenta a compra da faixa et�ria por g�nero(feminino)
    if ((idade >= 1) && (idade <= 20)) {
    fem_ado = fem_ado + 1;
    }
    if ((idade >= 21) && (idade <= 60)) {
    fem_adu = fem_adu + 1;
    }
    if (idade >= 61) {
    fem_idade = fem_idade + 1;
    }
    //fim faixa et�ria

    //fim compara��o Feminino
    }
    //op��o caso g�nero n�o seja reconhecido
    else {
    cont1 = 1;
    printf("Opcao Invalida - Tecle <Enter>");
    fflush(stdin);
    getch();
    }
    }
    return;
}

//resultado Pesquisa de faixa et�ria
int saida_faixa(char Etaria[20],int Opt)
{
   int total = 0;
   int total2 = 0;
  //Adolescente
  switch (Opt) {
  case 1:
      if (masc_ado > fem_ado){
       total = masc_ado;
       strcpy(resposta,Hom);
      }
      else if (fem_ado > masc_ado){
       total = fem_ado;
        strcpy(resposta,Mul);
      }
      else{
       total = fem_ado;
       strcpy(resposta,Ambos);
      }
      //produto
      if ((adole_ele > adole_com) && (adole_ele > adole_ves)) {
      total2 = adole_ele;
      strcpy(res,Test);
      }
      if ((adole_com == adole_ves) && (adole_ele > adole_ves)) {
      total2 = adole_ele;
      strcpy(res,Test);
      }
      if ((adole_ele < adole_com) && (adole_com > adole_ves)) {
      total2 = adole_com;
      strcpy(res,Test2);
      }
      if ((adole_ele == adole_ves) && (adole_com > adole_ves)) {
      total2 = adole_com;
      strcpy(res,Test2);
      }
      if ((adole_ele < adole_ves) && (adole_com < adole_ves)) {
      total2 = adole_ves;
      strcpy(res,Test3);
      }
      if ((adole_ele == adole_com) && (adole_com < adole_ves)) {
      total2 = adole_ves;
      strcpy(res,Test3);
      }
      if ((adole_ele == adole_com) && (adole_com > adole_ves)) {
      total2 = adole_com;
      strcpy(res,Test5);
      }
      if ((adole_ele == adole_ves) && (adole_com < adole_ves)) {
      total2 = adole_ves;
      strcpy(res,Test7);
      }
      if ((adole_com == adole_ves) && (adole_ele < adole_ves)) {
      total2 = adole_ves;
      strcpy(res,Test6);
      }
      if ((adole_ele == adole_com) && (adole_com = adole_ves)) {
      total2 = adole_com;
      strcpy(res,Test4);
      }
      break;
   case 2:
      //Adulto
      //gen�ro
      if (masc_adu > fem_adu){
       total = masc_adu;
       strcpy(resposta,Hom);
      }
      else if (fem_adu > masc_adu){
       total = fem_adu;
        strcpy(resposta,Mul);
      }
      else{
       total = fem_adu;
       strcpy(resposta,Ambos);
      }
      //produto
      if ((adulto_ele > adulto_com) && (adulto_ele > adulto_ves)) {
      total2 = adulto_ele;
      strcpy(res,Test);
      }
      if ((adulto_com == adulto_ves) && (adulto_ele > adulto_ves)) {
      total2 = adulto_ele;
      strcpy(res,Test);
      }
      if ((adulto_ele < adulto_com) && (adulto_com > adulto_ves)) {
      total2 = adulto_com;
      strcpy(res,Test2);
      }
      if ((adulto_ele == adulto_ves) && (adulto_com > adulto_ves)) {
      total2 = adulto_com;
      strcpy(res,Test2);
      }
      if ((adulto_ele < adulto_ves) && (adulto_com < adulto_ves)) {
      total2 = adulto_ves;
      strcpy(res,Test3);
      }
      if ((adulto_ele == adulto_com) && (adulto_com < adulto_ves)) {
      total2 = adulto_ves;
      strcpy(res,Test3);
      }
      if ((adulto_ele == adulto_com) && (adulto_com > adulto_ves)) {
      total2 = adulto_com;
      strcpy(res,Test5);
      }
      if ((adulto_ele == adulto_ves) && (adulto_com < adulto_ves)) {
      total2 = adulto_ves;
      strcpy(res,Test7);
      }
      if ((adulto_com == adulto_ves) && (adulto_ele < adulto_ves)) {
      total2 = adulto_ves;
      strcpy(res,Test6);
      }
      if ((adulto_ele == adulto_com) && (adulto_com == adulto_ves)) {
      total2 = adulto_com;
      strcpy(res,Test4);
      }
      break;
    default:
      if (masc_idade > fem_idade){
       total = masc_idade;
       strcpy(resposta,Hom);
      }
      else if (fem_idade > masc_idade){
       total = fem_idade;
       strcpy(resposta,Mul);
      }
      else{
       total = fem_idade;
       strcpy(resposta,Ambos);
      }
      //produto
      if ((melhor_idade_ele > melhor_idade_com) && (melhor_idade_ele > melhor_idade_ves)) {
      total2 = melhor_idade_ele;
      strcpy(res,Test);
      }
      if ((melhor_idade_com = melhor_idade_ves) && (melhor_idade_ele > melhor_idade_ves)) {
      total2 = melhor_idade_ele;
      strcpy(res,Test);
      }
      if ((melhor_idade_ele < melhor_idade_com) && (melhor_idade_com > melhor_idade_ves)) {
      total2 = melhor_idade_com;
      strcpy(res,Test2);
      }
      if ((melhor_idade_ele = melhor_idade_ves) && (melhor_idade_com > melhor_idade_ves)) {
      total2 = melhor_idade_com;
      strcpy(res,Test2);
      }
      if ((melhor_idade_ele < melhor_idade_ves) && (melhor_idade_com < melhor_idade_ves)) {
      total2 = melhor_idade_ves;
      strcpy(res,Test3);
      }
      if ((melhor_idade_ele = melhor_idade_com) && (melhor_idade_com < melhor_idade_ves)) {
      total2 = melhor_idade_ves;
      strcpy(res,Test3);
      }
      if ((melhor_idade_ele = melhor_idade_com) && (melhor_idade_com > melhor_idade_ves)) {
      total2 = melhor_idade_com;
      strcpy(res,Test5);
      }
      if ((melhor_idade_ele = melhor_idade_ves) && (melhor_idade_com < melhor_idade_ves)) {
      total2 = melhor_idade_ves;
      strcpy(res,Test7);
      }
      if ((melhor_idade_com = melhor_idade_ves) && (melhor_idade_ele < melhor_idade_ves)) {
      total2 = melhor_idade_ves;
      strcpy(res,Test6);
      }
      if ((melhor_idade_ele = melhor_idade_com) && (melhor_idade_com = melhor_idade_ves)) {
      total2 = melhor_idade_com;
      strcpy(res,Test4);
      }
      break;
  }
  system("cls");
  printf("--Resultado da Pesquisa--\n");
  printf("Faixa Et�ria: %s\n\n",Etaria);
  printf("G�nero Dominante: %s \nCom %d compras\n\n",resposta,total);
  printf("Produto Dominante: %s \nCom %d compras\n\n",res,total2);
  printf("Precione <Enter> Para voltar ao Menu Anterior");
  getch();
  return 0;
}

int saida_produto(char prod[20],int Opt2)
{
  char res_prod[20];
  char res_idade[40];
  int total_prod = 0;
  int total_idade = 0;
  //g�nero dominante
  switch(Opt2){
      //Eletr�nico
   case 1:
       if (masc_ele > fem_ele) {
        total_prod = masc_ele;
        strcpy(res_prod,Hom);
       }
       else
       if (fem_ele > masc_ele) {
         total_prod = fem_ele;
         strcpy(res_prod,Mul);
       }
       else {
       total_prod = masc_ele;
       strcpy(res_prod,Ambos);
       }
       break;
    // comida
    case 2:
       if (masc_com > fem_com) {
        total_prod = masc_com;
        strcpy(res_prod,Hom);
       }
       else
       if (fem_com > masc_com) {
         total_prod = fem_com;
         strcpy(res_prod,Mul);
       }
       else {
       total_prod = masc_com;
       strcpy(res_prod,Ambos);
       }
       break;
       //vestu�rio
       default:
       if (masc_ele > fem_ele) {
        total_prod = masc_ele;
        strcpy(res_prod,Hom);
       }
       else
       if (fem_ele > masc_ele) {
         total_prod = fem_ele;
         strcpy(res_prod,Mul);
       }
       else {
       total_prod = masc_ele;
       strcpy(res_prod,Ambos);
       }
       break;
  }
  //faixa dominante
  switch (Opt2) {
     //eletr�nico
     case 1:
       if ((adole_ele > adulto_ele) && (adole_ele > melhor_idade_ele))      {
      total_idade = adole_ele;
      strcpy(res_idade,Tst);
      }
      if ((adulto_ele == melhor_idade_ele) && (adulto_ele < adole_ele)) {
      total_idade = adole_ele;
      strcpy(res_idade,Tst);
      }
      if ((adulto_ele > adole_ele) && (adulto_ele > melhor_idade_ele)) {
      total_idade = adulto_ele;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_ele == adole_ele) && (adulto_ele > adole_ele)) {
      total_idade = adulto_ele;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_ele > adulto_ele) && (melhor_idade_ele > adole_ele)) {
      total_idade = melhor_idade_ele;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_ele == adole_ele) && (adulto_ele < melhor_idade_ele)) {
      total_idade = melhor_idade_ele;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_ele == adole_ele) && (adulto_ele > melhor_idade_ele)) {
      total_idade = adulto_ele;
      strcpy(res_idade,Tst4);
      }
      if ((adole_ele == melhor_idade_ele) && (melhor_idade_ele > adulto_ele)) {
      total_idade = adole_ele;
      strcpy(res_idade,Tst5);
      }
      if ((adulto_ele == melhor_idade_ele) && (adulto_ele > adole_ele)) {
      total_idade = adulto_ele;
      strcpy(res_idade,Tst6);
      }
      if ((adulto_ele == melhor_idade_ele) && (adulto_ele == adole_ele)) {
      total_idade = adulto_ele;
      strcpy(res_idade,Tst7);
      }
       break;

    // comida
    case 2:
    if ((adole_com > adulto_com) && (adole_com > melhor_idade_com)) {
      total_idade = adole_com;
      strcpy(res_idade,Tst);
      }
      if ((adulto_com == melhor_idade_com) && (adulto_com < adole_com)) {
      total_idade = adole_com;
      strcpy(res_idade,Tst);
      }
      if ((adulto_com > adole_com) && (adulto_com > melhor_idade_com)) {
      total_idade = adulto_com;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_com == adole_com) && (adulto_com > adole_com)) {
      total_idade = adulto_com;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_com > adulto_com) && (melhor_idade_com > adole_com)) {
      total_idade = melhor_idade_com;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_com == adole_com) && (adulto_com < melhor_idade_com)) {
      total_idade = melhor_idade_com;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_com == adole_com) && (adulto_com > melhor_idade_com)) {
      total_idade = adulto_com;
      strcpy(res_idade,Tst4);
      }
      if ((adole_com == melhor_idade_com) && (melhor_idade_com > adulto_com)) {
      total_idade = adole_com;
      strcpy(res_idade,Tst5);
      }
      if ((adulto_com == melhor_idade_com) && (adulto_com > adole_com))      {
      total_idade = adulto_com;
      strcpy(res_idade,Tst6);
      }
      if ((adulto_com == melhor_idade_com) && (adulto_com == adole_com)) {
      total_idade = adulto_com;
      strcpy(res_idade,Tst7);
      }
       break;
       //vestu�rio
       default:
       if ((adole_ves > adulto_ves) && (adole_ves > melhor_idade_ves)) {
      total_idade = adole_ves;
      strcpy(res_idade,Tst);
      }
      if ((adulto_ves == melhor_idade_ves) && (adulto_ves < adole_ves))
      {
      total_idade = adole_ves;
      strcpy(res_idade,Tst);
      }
      if ((adulto_ves > adole_ves) && (adulto_ves > melhor_idade_ves)) {
      total_idade = adulto_ves;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_ves == adole_ves) && (adulto_ves > adole_ves)) {
      total_idade = adulto_ves;
      strcpy(res_idade,Tst2);
      }
      if ((melhor_idade_ves > adulto_ves) && (melhor_idade_ves > adole_ves)) {
      total_idade = melhor_idade_ves;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_ves == adole_ves) && (adulto_ves < melhor_idade_ves)) {
      total_idade = melhor_idade_ves;
      strcpy(res_idade,Tst3);
      }
      if ((adulto_ele == adole_ves) && (adulto_ves > melhor_idade_ves)) {
      total_idade = adulto_ves;
      strcpy(res_idade,Tst4);
      }
      if ((adole_ves == melhor_idade_ves) && (melhor_idade_ves > adulto_ves)) {
      total_idade = adole_ves;
      strcpy(res_idade,Tst5);
      }
      if ((adulto_ves == melhor_idade_ves) && (adulto_ves > adole_ves))      {
      total_idade = adulto_ves;
      strcpy(res_idade,Tst6);
      }
      if ((adulto_ves == melhor_idade_ves) && (adulto_ves == adole_ves)) {
      total_idade = adulto_ves;
      strcpy(res_idade,Tst7);
      }
       break;
  }
  system("cls");
  printf("--Resultado da Pesquisa--\n");
  printf("Tipo do Produto: %s\n\n",prod);
  printf("G�nero Dominante: %s \nCom %d compras\n\n",res_prod,total_prod);
  printf("Faixa Dominante: %s \nCom %d compras\n\n",res_idade,total_idade);
  printf("Precione <Enter> Para voltar ao Menu Anterior");
  getch();
  return 0;
}

int saida_genero(char sex[20],int Opt3)
{
    char res_sexo[40];
    char res_faixa[40];
    int total_prod = 0;
    int total_sexo = 0;

    //produto
    switch (Opt3) {
      case 1:
    //Masculino
    if ((masc_ele > masc_com) && (masc_ves < masc_ele)) {
      total_prod = masc_ele;
      strcpy(res_sexo,Test);
      }
      if ((masc_ves == masc_com) && (masc_com < masc_ele)) {
      total_prod = masc_ele;
      strcpy(res_sexo,Test);
      }
      if ((masc_com > masc_ele) && (masc_com > masc_ves)) {
      total_prod = masc_com;
      strcpy(res_sexo,Test2);
      }
      if ((masc_ele == masc_ves) && (masc_com > masc_ves)) {
      total_prod = masc_com;
      strcpy(res_sexo,Test2);
      }
      if ((masc_ves > masc_ele) && (masc_ves > masc_com))      {
      total_prod = masc_ves;
      strcpy(res_sexo,Test3);
      }
      if ((masc_ele == masc_com) && (masc_ele < masc_ves))      {
      total_prod = masc_ves;
      strcpy(res_sexo,Test3);
      }
      if ((masc_ele == masc_com) && (masc_com > masc_ves))      {
      total_prod = masc_ele;
      strcpy(res_sexo,Test5);
      }
      if ((masc_ele == masc_ves) && (masc_ele > masc_com))      {
      total_prod = masc_ele;
      strcpy(res_sexo,Test7);
      }
      if ((masc_com == masc_ves) && (masc_ele < masc_com))      {
      total_prod = masc_com;
      strcpy(res_sexo,Test6);
      }
      if ((masc_ele == masc_com) && (masc_ele == masc_ves))      {
      total_prod = masc_ele;
      strcpy(res_sexo,Test4);
      }
       break;
    //feminino
    default:
     if ((fem_ele > fem_com) && (fem_ves < fem_ele))    {
      total_prod = fem_ele;
      strcpy(res_sexo,Test);
      }
      if ((fem_ves == fem_com) && (fem_com < fem_ele))      {
      total_prod = fem_ele;
      strcpy(res_sexo,Test);
      }
      if ((fem_com > fem_ele) && (fem_com > fem_ves)) {
      total_prod = fem_com;
      strcpy(res_sexo,Test2);
      }
      if ((fem_ele == fem_ves) && (fem_com > fem_ele)) {
      total_prod = fem_com;
      strcpy(res_sexo,Test2);
      }
      if ((fem_ves > fem_ele) && (fem_ves > fem_com)) {
      total_prod = fem_ves;
      strcpy(res_sexo,Test3);
      }
      if ((fem_ele == fem_com) && (fem_ele < fem_ves))    {
      total_prod = fem_ves;
      strcpy(res_sexo,Test3);
      }
      if ((fem_ele == fem_com) && (fem_com > fem_ves)) {
      total_prod = fem_ele;
      strcpy(res_sexo,Test5);
      }
      if ((fem_ele == fem_ves) && (fem_ele > fem_com)) {
      total_prod = fem_ele;
      strcpy(res_sexo,Test7);
      }
      if ((fem_com == fem_ves) && (fem_com > fem_ele)) {
      total_prod = fem_com;
      strcpy(res_sexo,Test6);
      }
      if ((fem_ele == fem_com) && (fem_com == fem_ves)) {
      total_prod = fem_ele;
      strcpy(res_sexo,Test4);
      }
      break;
    }
    //faixa et�ria
    switch (Opt3) {
    case 1:
    //Masculino
    if ((masc_ado > masc_adu) && (masc_idade < masc_ado))      {
      total_sexo = masc_ado;
      strcpy(res_faixa,Tst);
      }
      if ((masc_idade == masc_adu) && (masc_adu < masc_ado)) {
      total_sexo = masc_ado;
      strcpy(res_faixa,Tst);
      }
      if ((masc_adu > masc_ado) && (masc_adu > masc_idade))      {
      total_sexo = masc_adu;
      strcpy(res_faixa,Tst2);
      }
      if ((masc_ado == masc_idade) && (masc_adu > masc_ado))      {
      total_sexo = masc_adu;
      strcpy(res_faixa,Tst2);
      }
      if ((masc_idade > masc_ado) && (masc_idade > masc_adu))    {
      total_sexo = masc_idade;
      strcpy(res_faixa,Tst3);
      }
      if ((masc_ado == masc_adu) && (masc_ado < masc_idade))      {
      total_sexo = masc_idade;
      strcpy(res_faixa,Tst3);
      }
      if ((masc_ado == masc_adu) && (masc_adu > masc_idade)) {
      total_sexo = masc_ado;
      strcpy(res_faixa,Tst4);
      }
      if ((masc_ado == masc_idade) && (masc_ado > masc_adu)) {
      total_sexo = masc_ado;
      strcpy(res_faixa,Tst5);
      }
      if ((masc_adu == masc_idade) && (masc_adu > masc_ado)) {
      total_sexo = masc_adu;
      strcpy(res_faixa,Tst6);
      }
      if ((masc_ado == masc_adu) && (masc_ado == masc_idade)) {
      total_sexo = masc_ado;
      strcpy(res_faixa,Tst7);
      }
       break;
    //feminino
    default:
     if ((fem_ado > fem_adu) && (fem_idade < fem_ado)) {
      total_sexo = fem_ado;
      strcpy(res_faixa,Tst);
      }
      if ((fem_idade == fem_adu) && (fem_adu < fem_ado)) {
      total_sexo = fem_ado;
      strcpy(res_faixa,Tst);
      }
      if ((fem_adu > fem_ado) && (fem_adu > fem_idade)) {
      total_sexo = fem_adu;
      strcpy(res_faixa,Tst2);
      }
      if ((fem_ado == fem_idade) && (fem_adu > fem_ado)) {
      total_sexo = fem_adu;
      strcpy(res_faixa,Tst2);
      }
      if ((fem_idade > fem_ado) && (fem_idade > fem_adu)) {
      total_sexo = fem_idade;
      strcpy(res_faixa,Tst3);
      }
      if ((fem_ado == fem_adu) && (fem_ado < fem_idade)) {
      total_sexo = fem_idade;
      strcpy(res_faixa,Tst3);
      }
      if ((fem_ado == fem_adu) && (fem_adu > fem_idade)) {
      total_sexo = fem_ado;
      strcpy(res_faixa,Tst4);
      }
      if ((fem_ado == fem_idade) && (fem_ado > fem_adu)) {
      total_sexo = fem_ado;
      strcpy(res_faixa,Tst5);
      }
      if ((fem_adu == fem_idade) && (fem_adu > fem_ado)) {
      total_sexo = fem_adu;
      strcpy(res_faixa,Tst6);
      }
      if ((fem_ado == fem_adu) && (fem_ado == fem_idade)) {
      total_sexo = fem_ado;
      strcpy(res_faixa,Tst7);
      }
        break;
    }
  system("cls");
  printf("--Resultado da Pesquisa--\n");
  printf("G�nero: %s\n\n",sex);
  printf("Produto Dominante: %s \nCom %d compras\n\n",res_sexo,total_prod);
  printf("Faixa Dominante: %s \nCom %d compras\n\n",res_faixa,total_sexo);
  printf("Precione <Enter> Para voltar ao Menu Anterior");
  getch();
  return 0;
}
