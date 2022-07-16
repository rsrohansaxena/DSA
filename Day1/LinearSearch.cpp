#include<iostream>
using namespace std;

int linearSearch (int arr[], int n, int key) {
    for(int i=0; i<n; ++i) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    int index = linearSearch(arr, n, key);
    if(index == -1)
        cout<<"Element not found in Array.\n";
    else
        cout<<"Element found at index: "<<index<<endl;
    return 0;
}