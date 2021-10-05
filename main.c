#include <stdio.h>

void print_array(int *arr, int size);
float average_array(int *arr, int size);
void copy_array(int *arr1, int *arr2, int size);

int main() {
    
    int arr[5];
    int i = 0;
    for (i = 0; i < 5; i++) {
        arr[i] = i;
    }

    int arr2[5];

    print_array(arr, 5);

    copy_array(arr, arr2, 5);

    print_array(arr2, 5);

    float b = average_array(arr, 5);

    printf("%f\n", b);

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