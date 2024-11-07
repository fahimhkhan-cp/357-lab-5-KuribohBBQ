#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//creates structure for array list
struct myArray {
    char element;
    int length;

} ;

struct myArray array_list_new(char *input){
    struct myArray *arr1;
    int size = 20;
    arr1 = (struct myArray *)malloc(size * sizeof(struct myArray));
    //checks if memory has been sucessfully allocated
    if (arr1 == NULL){
        printf("Memory not allocated");
        exit(0);
    }
    int i;
    //assign each char of input to the structure
    for (i = 0; i < size; i++){
        arr1[i]->element = input[i];
        //assign length of that element i + 1
        arr1->length[i] = i + 1;
    }
    return *arr1;
}

void array_list_add_to_end(struct myArray *arr1, char *string){

    
}

int main(){
    char word[] = "Hello";
    struct myArray arr2 = array_list_new(word);
    return 0;
}

