#include <stdio.h>
#include <stdlib.h>

#if defined _WIN32 || defined _WIN64 || defined __CYGWIN__
#define SYS "win"
#elif defined __linux__ || defined __APPLE__ || defined __unix__
#define SYS "unix"
#endif

void clear_screen();
float sum(float, float);
float sub(float, float);
float _div(float, float);
float mul(float, float);
int mod(int, int);
float bmi(float, float);
char ethanol_or_gasoline(float, float);
char even_or_odd(int);
int factorial(int);
void print_menu();

int main() {
    int option;

    clear_screen();

    print_menu();
    printf("Digite o código da operação desejada: (1-9) ");
    scanf("%d", &option);

    while (option < 1 || option > 9) {
        printf("Opção inválida. Digite um número que pertença ao intervalo [1,9]: ");
        scanf("%d", &option);
    }

    switch(option) {
        case 1: {
            float x;
            float y;
            printf("Digite um número real: ");
            scanf("%f", &x);
            printf("Digite outro número real: ");
            scanf("%f", &y);
            printf("%.2f + %.2f = %.2f", x, y, sum(x, y));
            break;
        }
        case 2: {
            float x;
            float y;

            printf("Digite um número real: ");
            scanf("%f", &x);
            printf("Digite outro número real: ");
            scanf("%f", &y);
            printf("%.2f - %.2f = %.2f", x, y, sub(x, y));
            break;
        }
        case 3: {
            float x;
            float y;

            printf("Digite um número real: ");
            scanf("%f", &x);
            printf("Digite outro número real: ");
            scanf("%f", &y);
            printf("%.2f / %.2f = %.2f", x, y, _div(x, y));
            break;
        }
    }    

    printf("\n");
    return 0;
}

void clear_screen() {
    printf("\n");
    if(SYS == "win") {
        system("cls");
    } else if(SYS == "unix") {
        system("clear");
    }
}

float sum(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float _div(float x, float y) { // 'div' was not used as name due to conflict with stdlib
    return x / y;
}

float mul(float x, float y) {
    return x * y;
}

int mod(int x, int y) {
    return x %  y;
}

float bmi(float weight, float height) { // Body Mass Index
    return weight / (height * height);
}

char ethanol_or_gasoline(float ethanolPrice, float gasolinePrice) {
    return (ethanolPrice / gasolinePrice) > 0.7? 'g': 'e';
}

char even_or_odd(int x) {
    return x % 2 ? 'o' : 'e';
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void print_menu() {
    printf("Operações disponíveis:\n");
    printf("(1) Soma de dois números reais\n");
    printf("(2) Subtração de dois números reais\n");
    printf("(3) Divisão de dois números reais\n");
    printf("(4) Multiplicação de dois números reais\n");
    printf("(5) Resto da divisão de dois números inteiros\n");
    printf("(6) Cálculo do Indice de Massa Corporal\n");
    printf("(7) Decisão de qual combustivel eh mais vantajoso (alcool ou gasolina)\n");
    printf("(8) Determinação da paridade de um número inteiro\n");
    printf("(9) Cálculo do fatorial para um número inteiro\n");
}