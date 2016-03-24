#include <stdio.h>
#include <stdlib.h>

#if defined _WIN32 || defined _WIN64 || defined __CYGWIN__
#define SYS "win"
#elif defined __linux__ || defined __APPLE__ || defined __unix__
#define SYS "unix"
#endif

void clear_screen();

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