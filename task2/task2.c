#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//creates structure for array list
struct myArray {
    //pointer for array
    char *pointer;
    //capacity
    int cap;
    //lenth of elements in array
    int length;
    //elements of array
    char *element;

} ;

struct myArray *array_list_new(char *input){
    struct myArray *arr;
    int i;
    int capacity = 10;
    //allocate struct myArray
    arr = (struct myArray *)malloc(15 *sizeof(struct myArray));
    //check if memory allocation was successful
    if (arr== NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        //assign cap to structure depending on length of input
        arr->cap = strlen(input);
        //allocate the array within struct arr
        arr->element = (char *)malloc(arr->cap * sizeof(char));
        if (arr->element == NULL){
        printf("Memory not allocated.\n");
        exit(0);
        }
        else{
            //assign pointer to first element of arr
            arr->pointer = &arr->element[0];
            
            for (i = 0; i < arr->cap; i++){
                //store input[i] into arr.element[i]
                arr->element[i] = input[i];
                //increase length by 1
                arr->length = i + 1;

        }


        }
        return arr;

    }

}
void array_list_add_to_end(struct myArray *arr1, char *string){
    //if adding new string to structure exceeds cap, reallocate
    if (arr1->cap <= arr1->length + strlen(string))
    {
        arr1->cap = arr1->length + strlen(string);
        arr1->element = (char *)realloc(arr1->element, arr1->cap * sizeof(char));
    }
    int i;
    int j = 0;
    for (i = arr1->length + 1; i <= arr1->cap; i++)
    {
        arr1->element[i] = string[j];
        j++;
    }
    arr1->length = arr1->length + strlen(string);
}
int main(){
    int i;
    char word[] = "Hello";
    struct myArray *arr= array_list_new(word);
    for (i = 0; i < strlen(word); i++){
        printf("%c", arr->element[i]);
    }
    printf("\n");
    char add[] = "World";
    array_list_add_to_end(arr, add);
    for (i = 0; i <= strlen(word) + strlen(add); i++){
        printf("%c", arr->element[i]);
    }
    free(arr);
    return 0;
}

