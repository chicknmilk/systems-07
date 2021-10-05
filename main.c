#include <stdio.h>

int main() {

    return 0;
}

void print_array(int *arr, int size) {
    int i;
    printf("[");
    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d]\n", *arr);
            break;
        }
        printf("%d, ", *arr);
        arr++;
    }
}

float average_array(int *arr, int size) {
    int i;
    float ret = 0;

    for (i = 0; i < size; i++) {
        ret += arr[i];
    }

    return (ret / size);
}

void copy_array(int *arr1, int *arr2, int size) {
    int i;
    for (i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}