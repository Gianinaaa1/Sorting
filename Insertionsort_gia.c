#include <stdio.h>

int main(){
  int n, array[100], i, j, tmp;

  printf("Masukkan jumlah banyaknya data: ");
  scanf("%d", &n);
  printf("\nMasukkan %d angka integer\n", n);

  for (int i = 0; i <n; i++) {
    scanf("\n%d", &array[i]);
  }

  for (i = 1; i <n; i++){
    j = i;
    while(j > 0 && array[j-1] > array[j]){
      tmp = array[j];
      array[j] = array[j-1];
      array[j-1] = tmp;

      j--;
    }
  }

  printf("\nHasil pengurutan sebagai berikut:\n");

  for (i = 0; i <= n-1; i++){
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
