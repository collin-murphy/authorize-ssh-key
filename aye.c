#include <stdio.h>

char* 

int main(int argc, char *argv[]){
    if(argc == 2)
        printf("%s\n", argv[1]);
    else if(argc > 2)
        printf("Too many args\n");
    else
        printf("One argument expected.\n");
    return 0;
}
