#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    printf("Password: ");
    char pass[64];
    scanf("%s", &pass);
    if(strcmp(pass, "hardcodedPasswordLul") == 0){
        printf("\nSuccess\n");
        exit(0);
    }else{
        printf("\nFailed\n");
        exit(1);
    }
}