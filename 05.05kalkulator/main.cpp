
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

void usage(const char *program_name) {
    printf("Sposob uzycia: %s <number> <operation> <number>\n", program_name);exit(1);
}
    int main(int argc, char const *argv[]) {
        int a,b,results;
        char operation[15];
      //  if (argc < 3)
    printf("Choose the operation:\n add sub\n");

        scanf("%c",operation);

       // usage(argv[0]);
        scanf("%d, %d",a,b);
       // printf("Numbers and operation: %c, %d, %d");
        if(strcmp(operation,"add")==0){
            results = a+b;
        }



        return 0;
    }