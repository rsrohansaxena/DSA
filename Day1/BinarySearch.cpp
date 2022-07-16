#include<iostream>
using namespace std;

//base consition of Binary search is array must be monotonic(either increasing/decreasing)
int binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        int mid = (s+e)/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,10,11,19,29,38};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    int index = binarySearch(arr, n, key);
    if(index == -1)
        cout<<"Element not found in Array.\n";
    else
        cout<<"Element found at index: "<<index<<endl;
    return 0;
}
