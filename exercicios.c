#include <stdio.h>

void exercicio1 ()
{
    char nome[100];

    printf("Qual seu nome? ");
    fgets(nome, sizeof(nome), stdin);

    printf("Ola, %s Seja bem-vindo(a) a disciplina de Logica de Programacao \n", nome);
    return 0;
}

void exercicio2 ()
{
    int n1, n2, soma;

    printf ("qual o primeiro numero? ");
    scanf("%d", &n1);
    printf ("o primeiro numero e %d\n", n1);

    printf ("qual o segundo numero? ");
    scanf("%d", &n2);
    printf ("o segundo numero e %d\n", n2);

    soma = n1 + n2; 

    printf ("a soma e %d\n", soma);
    return 0;
}

void exercicio3 ()
{
    int n1, n2, soma, subtracao, divisao, multiplicacao;

    printf ("qual o primeiro numero? ");
    scanf("%d", &n1);
    printf ("o primeiro numero e %d\n", n1);

    printf ("qual o segundo numero? ");
    scanf("%d", &n2);
    printf ("o segundo numero e %d\n", n2);

    soma = n1 + n2;
    subtracao = n1 - n2; 
    divisao = n1 / n2;
    multiplicacao = n1 * n2;

    printf ("a soma e %d\n", soma);
    printf ("a subtracao e %d\n", subtracao);
    printf ("a divisao e %d\n", divisao);
    printf ("a multiplicacao e %d\n", multiplicacao);
    return 0;
}

void exercicio4 ()
{
    float n1, n2, n3, media;

    printf ("qual a primeira nota? ");
    scanf("%f", &n1);

    printf ("qual a segunda nota? ");
    scanf("%f", &n2);
    
    printf ("qual a terceira nota? ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf ("a media e: %.2f\n", media);
    return 0;
}

void exercicio5 ()
{
    int base, altura, area;

    printf ("qual a base? ");
    scanf("%d", &base);

    printf ("qual a altura ");
    scanf("%d", &altura);

    area = base * altura;

    printf ("a area e: %d\n", area);
    return 0;
}

void exercicio6 ()
{
    int raio, pi, area;

    printf ("qual o raio? ");
    scanf("%d", &raio);

    pi = 3.14159;
    area = pi * (raio * raio);

    printf ("a area e: %d\n", area);
    return 0;
}

void exercicio7 ()
{
    float celsius, fahrenheit;

    printf ("qual o grau em celsius? ");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;

    printf ("a conversao e: %.1f\n", fahrenheit);
    return 0;
}

int main () {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
}