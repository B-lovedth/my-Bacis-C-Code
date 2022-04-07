#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include<string.h>

int main(){
    char password[15];
    char repass[15];
    int input;
    int match;
    printf("Create a Password: ");
    gets(password);
    printf("Re-enter New password: ");
    gets(repass);
    match = strcmp(password,repass);
    if(match == 0){
            if(password[0] == toupper(password[0])){
        puts("you have created a new password");
        printf("new password: %s\n",password);
        printf("contains %d characters\n",strlen(password));}
        else
            puts("kindly make the first character uppercase\n restart program to continue");
    }else
        puts("you re-entered an incorrect password"
             "\n restart program to continue");


	printf("solomon great edima\n 190805109 \n Computer science");
}
