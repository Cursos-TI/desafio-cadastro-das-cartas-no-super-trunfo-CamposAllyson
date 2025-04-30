#include <stdio.h> //Incluímos a biblioteca padrão de entrada e saída do C (STanDard Input Output Header - <stdio.h>).


int main(){ //Começo do nosso código. 
    int populacao_1, populacao_2; //Criação de 2 variáveis do tipo inteiro para armazenar o total de habitantes de cada cidade.
    int pontos_turismo_1, pontos_turismo_2; //Criação de 2 variáveis do tipo inteiro para armazenar o total de pontos turísticos de cada cidade.
    char estado_1, estado_2; //Criação de 2 variáveis do tipo character para armazenar uma letra de A à H, representando o estado.
    char codigo_carta_1[4], codigo_carta_2[4]; //Criação de 2 variáveis do tipo character (strings) com espaço para 4 caracteres para o código das cartas (caracter do estado + Nº da carta, além do \0 (null terminator).Ex: A01).
    char cidade_1[30], cidade_2[30]; //Criação de 2 variáveis do tipo character (strings) para 30 caracteres para armazenar o nome das cidades.  
    float area_1, area_2; //Criação de 2 variáveis do tipo float para armazenar a área total de cada cidade.
    float pib_1, pib_2; //Criação de 2 variáveis do tipo float para armazenar o valor do PIB de cada cidade.

    printf("*** Bem-vindo ao Super-Trunfo: Países, by MateCheck! *** \n"); //Esse bloco dá boas-vindas para o usuário e explica resumidamente as regras do jogo.
    printf("\n");
    printf("O jogo funciona assim:\n");
    printf(" - Cada jogador recebe um número igual de cartas;\n");
    printf(" - Cada carta tem seus atributos (População, Área, PIB e Nº de Pontos Turísticos);\n");
    printf(" - O jogador da vez escolhe um atributo da sua carta;\n");
    printf(" - Esse atributo é comparado com o atributo da carta dos demais jogadores;\n");
    printf(" - Quem tiver o maior valor naquele atributo ganha todas as cartas da rodada!\n");
    printf("\n");
    printf("Pronto para a batalha? :)\n");
    printf("\n");

    printf("Mas antes, vamos cadastrar as suas cartas.\n"); //Nos próximos 2 blocos de código é realizado o cadastramento das cartas, onde solicitamos que o usuário digite os dados de cada carta.
    printf("\n");
    printf("Carta 1 \n");
    printf("Digite uma letra de A à H para representar o estado: \n");
    scanf("%c", &estado_1); //Após o usuário informar o estado da 1º carta (via teclado), utilizamos o especificador de formato adequado (%c, para variáveis tipo char) e armazenamos o dado na variável estado_1.
    printf("Digite o nome da cidade da primeira carta (caso seja um nome composto digite tudo junto, ex: RioDeJaneiro): \n"); 
    scanf("%s", cidade_1); //Após o usuário informar o nome da cidade da 1º carta (via teclado), utilizamos o especificador de formato adequado (%s, para variáveis tipo char(string)) e armazenamos o dado na variável cidade_1.
    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao_1); //Após o usuário informar o total de habitantes da 1º carta (via teclado), utilizamos o especificador de formato adequado (%d, para variáveis tipo inteiro) e armazenamos o dado na variável população_1.
    printf("Digite a área total da cidade, em km²: \n");
    scanf("%f", &area_1); //Após o usuário informar a área total da 1º carta (via teclado), utilizamos o especificador de formato adequado (%f, para variáveis tipo float) e armazenamos o dado na variável area_1.
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1); //Após o usuário informar o PIB da 1º carta (via teclado), utilizamos o especificador de formato adequado (%f, para variáveis tipo float) e armazenamos o dado na variável pib_1.
    printf("E por último, digite o total de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turismo_1); //Após o usuário informar o total de pontos turísticos da 1º carta (via teclado), utilizamos o especificador de formato adequado (%d, para variáveis tipo inteiro) e armazenamos o dado na variável pontos_turismo_1.
    sprintf(codigo_carta_1, "%c01", estado_1); //Utilizamos sprintf para concatenar o caracter armazenado em estado_1 com o respectivo número da carta, criando assim o código da carta que será armazenado na variável codigo_carta_1.  
    printf("O código dessa carta é: %s\n", codigo_carta_1); //Informamos o código dessa carta ao usuário.
    printf("\n");

    printf("Carta 2 \n");
    printf("Digite uma letra de A à H para representar o estado: \n");
    scanf(" %c", &estado_2); //Após o usuário informar o estado da 2º carta (via teclado), utilizamos o especificador de formato adequado (%c, para variáveis tipo char) e armazenamos o dado na variável estado_2.
    printf("Digite o nome da cidade da primeira carta (caso seja um nome composto digite tudo junto, ex: RioDeJaneiro): \n"); 
    scanf("%s", cidade_2); //Após o usuário informar o nome da cidade da 2º carta (via teclado), utilizamos o especificador de formato adequado (%s, para variáveis tipo char(string)) e armazenamos o dado na variável cidade_2.
    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao_2); //Após o usuário informar o total de habitantes da 2º carta (via teclado), utilizamos o especificador de formato adequado (%d, para variáveis tipo inteiro) e armazenamos o dado na variável população_2.
    printf("Digite a área total da cidade, em km²: \n");
    scanf("%f", &area_2); //Após o usuário informar a área total da 2º carta (via teclado), utilizamos o especificador de formato adequado (%f, para variáveis tipo float) e armazenamos o dado na variável area_2.
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2); //Após o usuário informar o PIB da 2º carta (via teclado), utilizamos o especificador de formato adequado (%f, para variáveis tipo float) e armazenamos o dado na variável pib_2.
    printf("E por último, digite o total de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turismo_2); //Após o usuário informar o total de pontos turísticos da 2º carta (via teclado), utilizamos o especificador de formato adequado (%d, para variáveis tipo inteiro) e armazenamos o dado na variável pontos_turismo_2.
    sprintf(codigo_carta_2, "%c02", estado_2); //Utilizamos sprintf para concatenar o caracter armazenado em estado_2 com o respectivo número da carta, criando assim o código da carta que será armazenado na variável codigo_carta_2.  
    printf("O código dessa carta é: %s\n", codigo_carta_2); //Informamos o código dessa carta ao usuário.
    printf("\n");

    printf("Cartas cadastradas: \n"); //Nos próximos dois blocos de código apresentamos as cartas que foram cadastrados pelo usuário.
    printf("***********************************\n");
    printf("Carta 1\n");
    printf("\n");
    printf("Código da Carta: %s\n", codigo_carta_1);
    printf("Estado: %c\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1); //Com o %.2f especificamos que a variável area_1 seja apresentada com duas casas decimais, o mesmo será feito para apresentar area_2. 
    printf("PIB: R$ %.2f\n", pib_1); //Com o %.2f especificamos que a variável pib_1 seja apresentada com duas casas decimais, o mesmo será feito para apresentar pib_2.
    printf("Nº de Pontos Turísticos: %d\n", pontos_turismo_1);
    printf("***********************************\n");

    printf("Carta 2\n");
    printf("\n");
    printf("Código da Carta: %s\n", codigo_carta_2);
    printf("Estado: %c\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f\n", pib_2);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turismo_2);
    printf("***********************************\n");
    printf("\n");
    printf("*** FIM *** "); //Indica o fim do programa.

    return 0; //Retorna 0 caso não ocorram erros na execução do código.

} //Fim do código.