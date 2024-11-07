#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "task1.h"


void str_lower(char *input, char *lower){
    int i;
    //loop through input argument
    for (i = 0; i < strlen(input); i++){
        //set current lower[i] to lower cased input
        lower[i] = tolower(input[i]); 
    }
   
}

void str_lower_mutate(char *input){

    int i;
    for (i = 0; i < strlen(input); i++){
        input[i] = tolower(input[i]);
    }
   

}