#include<stdio.h>

int main(){

  printf("Data ketika masih acak: ");
  printf("\n-23, 67, 89, 5, 45, 20, 15, 27");
  int n, array[100] = {-23, 67, 89, 5, 45, 20, 15, 27}, i, j, tmp;

  for (i = 1; i <8; i++){
    j = i;
    while(j > 0 && array[j-1] > array[j]){
      tmp = array[j];
      array[j] = array[j-1];
      array[j-1] = tmp;
        j--;
    }
  }

  printf("\n\nArray setelah disusun dengan metode Ascending : \n");

  for (i = 0; i < 8; i++){
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
