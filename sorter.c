#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_index])
            min_index = j;

        swap(&arr[min_index], &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n,m, arr[1000];

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for(int i= 0; i<n; ++i){
        scanf("%d", &arr[i]);
    }
    printf("Enter Sorting Method: \n");
    printf("1- Insertion Sort \n");
    printf("2- Selection Sort \n");
    printf("3- Bubble Sort \n");
    printf("4- Merge Sort \n");
    printf("5- Quick Sort \n");
    scanf("%d", &m);

    switch(m) {
        case 1:
        insertionSort(arr, n);
        printArray(arr,n);
        break;

        case 2:
        selectionSort(arr, n);
        printArray(arr, n);
        break;

        default:
        printf("Please input a valid Sorting Method");
        break;

    }

return 0;
}