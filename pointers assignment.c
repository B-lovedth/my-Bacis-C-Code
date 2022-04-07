#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void display(char *); // initializes function

int main()
{
char str[20]; //an array of characters
        printf("Enter word(s): ");   //prompts user
        gets(str); // accepts input from user
        display(str); // calls function "display"
        printf("\nyour word(s) contain %d characters",strlen(str)); //displays length of array

        printf("\nsolomon great edima\n 190805109 \n Computer science");
}
void display(char *s){
    printf("\n Your word(s) contain the following letters: ");
    for(;*s != '\0';*s++){
        printf("%c  ", toupper(*s)); //display character in uppercase
    }

}



