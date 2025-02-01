#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Array{
    int size;
    int *array;
    int capacity;
}Array;
void *create_array(int size)
{
    Array *arr_struct = malloc(sizeof(struct Array));
    if(arr_struct==NULL)
    {
        printf("error assigning memory");
    }
    arr_struct->size=0;
    arr_struct->capacity=size;
    arr_struct->array=malloc(sizeof(int)*arr_struct->capacity);
    return arr_struct;
}
void insert(int data,Array *arr_struct)
{
    if(arr_struct->size+1==arr_struct->capacity)
    {
int *new_ptr=malloc(sizeof(int)*arr_struct->capacity);
if(new_ptr==NULL)
{
    printf("error assigning memory");
    exit(1);
}
memcpy(new_ptr,arr_struct->array,(sizeof(int)*arr_struct->size));
arr_struct->capacity=arr_struct->capacity*2;
arr_struct->array=malloc((sizeof(int)*arr_struct->capacity));
arr_struct->array=new_ptr;
free(new_ptr);
    }
    else{
        arr_struct->array[arr_struct->size]=data;
        arr_struct->size++;
    }
}
