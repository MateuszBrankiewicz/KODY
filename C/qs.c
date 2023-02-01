#include <stdio.h>

void quickSort(int tab[], int lewa, int prawa);

int main() {
    int tab[] = {5, 1, 9, 3, 7, 6, 8, 2, 4};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("Orginalna: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    quickSort(tab, 0, n - 1);

    printf("Posortowana: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

void quickSort(int tab[], int lewa, int prawa) {
  int i = lewa, j = prawa;
  int tmp;
  int pivot = tab[(lewa + prawa) / 2];

  /* partition */
  while (i <= j) {
    while (tab[i] < pivot)
      i++;
    while (tab[j] > pivot)
      j--;
    if (i <= j) {
      tmp = tab[i];
      tab[i] = tab[j];
      tab[j] = tmp;
      i++;
      j--;
    }
  };

  /* recursion */
  if (lewa < j)
    quickSort(tab, lewa, j);
  if (i < prawa)
    quickSort(tab, i, prawa);
}
