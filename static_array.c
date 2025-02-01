#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Array{
size_t size;
size_t capacity;
int *arr;
}Array;
void *create_array(int array_size)
{
if(array_size<0)
{
    printf("error assigning size");
    exit(0);
}
Array new_array=malloc(sizeof(Array))
if(new_array==NULL)
{
    printf("memory allocation failed");
    exit(1);
}
new_array->arr=malloc(sizeof(int) *array_size);
if(new_array->arr==NULL)
{
    printf("error assigning memory");
}
new_array->size=0;
new_array->capacity=array_size;
 return new_array
}
void insert(int data,Array *arr)
{
assert(arr->size<arr->capacity)
arr->arr[arr->size]=data;
arr->size++;
}
void free_array(Array *arr) {
    free(arr->arr); 
    free(arr); 
}
void pop(Array *arr)
{
    arr->arr[arr->size]=0;
    arr->size--;
}
