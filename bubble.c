#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, tem;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("insert : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);
    printf("sort : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}
