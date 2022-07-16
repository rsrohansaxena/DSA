#include<iostream>
using namespace std;

void printArray(int arr[]) {
    cout<<"in Function "<<sizeof(arr)<<endl; // 'sizeof' on array function parameter 'arr' will return size of 'int*' which is 8
}

int main() {
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(int);

    cout<<"in Main "<<sizeof(arr)<<endl;
    printArray(arr);
    return 0;
}