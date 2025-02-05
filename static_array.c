#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct Array {
    size_t size;
    size_t capacity;
    int *arr;
} Array;


Array *create_array(int array_size) {
    if (array_size <= 0) {
        printf("Error: array size must be positive\n");
        exit(1);
    }
    Array *new_array = malloc(sizeof(Array));
    if (new_array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_array->arr = malloc(sizeof(int) * array_size);
    if (new_array->arr == NULL) {
        printf("Error allocating memory for array\n");
        free(new_array); 
        exit(1);
    }
    new_array->size = 0;
    new_array->capacity = array_size;
    return new_array;
}

void insert_element(Array *arr, int data) {
    if (arr->size >= arr->capacity) {
        arr->capacity *= 2; 
        arr->arr = realloc(arr->arr, sizeof(int) * arr->capacity);
        if (arr->arr == NULL) {
            printf("Error reallocating memory\n");
            exit(1);
        }
    }
    arr->arr[arr->size] = data;
    arr->size++;
}
void free_array(Array *arr) {
    free(arr->arr);
    free(arr);
}
int pop(Array *arr) {
    if (arr->size == 0) {
        printf("Error: array is empty\n");
        return -1;
    }
    int popped_value = arr->arr[arr->size - 1]; 
    arr->size--;
    return popped_value; 
}
