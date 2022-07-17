#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; ++i) {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] < curr) {
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = curr;
    }
}

int main() {
    int arr[] = {3,4,5,2,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr, n);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}