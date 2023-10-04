#include <stdio.h>

void find_max_min(int *array, int n, int *max, int *min) {
  *max = array[0];
  *min = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] > *max) {
      *max = array[i];
    } else if (array[i] < *min) {
      *min = array[i];
    }
  }
}

int main() {
  int array[] = {10, 4, 2, 9, 7};
  int n = sizeof(array) / sizeof(array[0]);
  int max, min;

  find_max_min(array, n, &max, &min);

  printf("The maximum value is %d\n", max);
  printf("The minimum value is %d\n", min);

  return 0;
}
// #include<stdio.h>
// void function(int arr[],int number,int  *max,int *min);
// int main (){
// int arr[]={12,34,45,75,87};
// int *max=arr[0];
// int *min=arr[0];;
// for (size_t i = 1; i < sizeof(arr)/arr[0]; i++)
// {if (arr>arr)
// {
//     /* code */
// }

//     /* code */
// }

// }