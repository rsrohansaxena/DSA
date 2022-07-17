#include<iostream>
#include<vector>
using namespace std;

void countingSort(int arr[], int n) {
    int largest = -1;
    for(int i=0; i<n; ++i) {
        largest = max(largest, arr[i]);
    }

    vector<int> vec(largest+1,0);
    for(int x=0; x<n; ++x) {
        vec[arr[x]]++;
    }

    int j=0;
    for(int i=0; i<=largest; ++i) {
        while(vec[i]>0) {
            arr[j] = i;
            vec[i]--;
            j++;
        }
    }
}

int main() {
    int arr[] = {38,45,52,29,11};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    countingSort(arr, n);
    for(int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}