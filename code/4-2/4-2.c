#include <stdio.h>

int sum(int arr[], int n){
}

double average(int arr[], int n){
}

int max(int arr[], int n){
}

int main() {
  int arr[] = {3, 7, 1, 9, 4, 6};
int n = sizeof(arr) / sizeof(arr[0]);

printf("sum: %d\n", sum(arr, n));
printf("avg: %.2f\n", average(arr, n));
printf("max: %d\n", max(arr, n));

return 0;
}
