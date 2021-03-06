#include <iostream>
using namespace std;

//Prototype

void quicksort(int arr[], int left, int right);

int main () {
  int n;
  cout << "Masukan Jumlah Array : ";
  cin >> n;
  int A[n];

  for (int i = n; i > 0; i--) {
    cout << "Masukan Jumlah Array" << i << ":";
    cin >> A[i];
  }
  cout << endl;
  for (int j = 1; j <= n; j++) {
  A[j] = j;
  cout << A[j] << endl;
  }

return 0;
}
void quicksort(int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr [(left + right) / 2];

  /* Parttion */
  while (i <= j) {
    while (arr [i] < pivot)
        i++;
    while (arr [j] < pivot)
        j--;
    if (i <= j) {
      tmp = arr [i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };
  /* recursion */
  if (left < j)
    quicksort (arr, left, j);
    if (i < right)
    quicksort (arr, i, right);
}
