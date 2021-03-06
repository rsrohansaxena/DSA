#include<iostream>
using namespace std;

//Brute Force approach O(N*N*N)
int printSubArray(int arr[], int n) {
    int maxSum = 0;
    for(int i=0; i<n; ++i) {
        for(int j=i; j<n; ++j) {
            int subArraySum = 0;
            for(int k=i; k<=j; ++k) {
                subArraySum += arr[k];
            }
            maxSum = max(maxSum, subArraySum);
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-6,1,9,-1,4,-15,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<printSubArray(arr, n)<<endl;
    return 0;
}