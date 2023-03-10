#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int f, q, tmp;
  for (f=1; f<=n; f++){
    for (q=1; q<n; q++){
      if(arr[q]<arr[q+1]){
        tmp = arr[q];
        arr[q] = arr[q+1];
        arr[q+1] = tmp;
      }
    }
  }
}
  int main() {
    int array[100], n, f, b;
    cout << "Masukan banyak elemen: ";
    cin >> n;
    cout << "Masukan nilai : \n";
    for (f=1; f<=n; f++){
      cin >> array[f];
    }
    bubbleSort(array, n);
    cout << "Hasil pengurutan dengan algoritma bubble sort : \n";
    for (f=1; f<=n; f++){
      cout << array[f] << " ";
    }
    cout << "\n";
 }