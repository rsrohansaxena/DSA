#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=0;i<n-1;++i) {
        int curr = arr[i];
        int min_position = i;
        for(int j=i; j<n; ++j) {
            if(arr[j] < arr[min_position]) {
                min_position = j;
            }
        }
        swap(arr[min_position], arr[i]);
    }
}

int main() {
    int arr[] = {3,4,5,2,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, n);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}