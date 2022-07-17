#include<iostream>
using namespace std;

//Kadane Approach O(N)
int printSumSubArray(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;
    int s = 0, end = 0, start = 0;

    for(int i=0; i<n; ++i) {
        currSum += arr[i];
        if(currSum < 0) {
            currSum = 0;
            s = i+1;
        }
        if(maxSum < currSum) {
            end = i;
            start = s;
            maxSum = currSum;
        }
    }
    cout<<"Starting Index: "<<start<<"\nEnding Index: "<<end<<endl;
    return maxSum;
}

int main() {
    int arr[] = {1,-6,9,-1,6,-15,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<printSumSubArray(arr, n)<<endl;
    return 0;
}