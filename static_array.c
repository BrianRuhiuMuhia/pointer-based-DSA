#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 200 
typedef struct Array {
    int arr[MAX_SIZE]; 
    size_t size;       
} Array;
Array create_static_array() {
    Array array;
    array.size = 0; 
    return array;
}
void insert_element(Array *array, int data) {
    if (array->size >= MAX_SIZE) {
        printf("Error: Array is full. Cannot insert %d\n", data);
        return;
    }
    array->arr[array->size] = data; 
    array->size++; 
}
int pop(Array *array) {
    if (array->size == 0) {
        printf("Error: Array is empty. Cannot pop.\n");
        return -1; 
    }
    int popped_value = array->arr[array->size - 1]; 
    array->size--; 
    return popped_value;
}
void print_array(const Array *array) {
    printf("Array elements: ");
    for (size_t i = 0; i < array->size; i++) {
        printf("%d ", array->arr[i]);
    }
    printf("\n");
}
