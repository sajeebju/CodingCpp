#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; j++){
          key = arr[i];
          j = i - 1;

        while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j = j - 1;
    }
    arr[j+1] = key;
    }
}

void printArr(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
   int arr[] = {3, 8, 1, 9, 12, 11, 13, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   insertionSort(arr, n);
   printArr(arr, n);

}