#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

void usage(const char* program_name) {
    printf("How to use: %s <number1> <operation> <number2>\n", program_name);
    printf("Choose the operation:\n  add  sub  mul  div\n");
    exit(1);
}

int main(int argc, char const* argv[]) {
    if (argc != 4) {
        usage(argv[0]);
    }

    double a = atof(argv[1]);
    const char* operation = argv[2];
    double b = atof(argv[3]);
    double result;

        return 0;
    }
