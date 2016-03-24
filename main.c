#include <stdio.h>
#include <stdlib.h>

#if defined _WIN32 || defined _WIN64 || defined __CYGWIN__
#define SYS "win"
#elif defined __linux__ || defined __APPLE__ || defined __unix__
#define SYS "unix"
#endif

int main() {
	return 0;
}