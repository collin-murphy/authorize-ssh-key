#include <stdio.h>
#include <stdlib.h>

//check to see if file path exists
int checkFilePath(char *fname){
    FILE *file;
    if(file = fopen(fname, "r")){
        fclose(file);
        return 1;
    }  
    else
        return 0;
}

void getContents(char *fname){
    FILE *file;
    
    if((file = fopen(fname, "r")) == NULL){
        printf("Error opening file\n");

        //exit because of null file
        exit(1);
    }

    //TODO: read file input


}

//logic after succesful user input
void successfulArgs(char *input){
    if(checkFilePath(input) == 1){
        printf("Correct file path.\n");
    }
    else{
        printf("Invalid File path.\n");

        //exit because of invalid path
        exit(1);
    }
    
    getContents(input);
}


int main(int argc, char *argv[]){
    if(argc == 2){
        printf("%s\n", argv[1]);
        successfulArgs(argv[1]);
    }
    else if(argc > 2)
        printf("Too many args\n");
    else
        printf("One argument expected.\n");
    return 0;
}
