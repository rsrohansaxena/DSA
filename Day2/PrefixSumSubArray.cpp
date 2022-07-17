#include<iostream>
using namespace std;

//Prefix sum Approach O(N*N)
int printSumSubArray(int arr[], int n) {
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for(int i=1; i<n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int maxSum = 0;
    for(int i=0; i<n; ++i) {
        for(int j=i; j<n; ++j) {
            int subArraySum = 0;
            subArraySum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            maxSum = max(maxSum, subArraySum);
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-6,1,9,-1,4,-15,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<printSumSubArray(arr, n)<<endl;
    return 0;
}