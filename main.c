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
float mod(float, float);
float bmi(float, float);
char ethanol_or_gasoline(float, float);
char even_or_odd(int);

int main() {
    clear_screen();

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

float mod(float x, float y) {
    return (int) x % (int) y;
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