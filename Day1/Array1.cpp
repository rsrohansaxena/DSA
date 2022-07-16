#include<iostream>

using namespace std;

int main() {
    //Initialization List
    int marks[100] = {1};
    int nos;
    cout<<"Enter the no of Students ";
    cin>>nos;

    for(int i=1;i<=nos;++i) {
        cin>>marks[i];
    }

    for(int i=0;i<100;++i) {
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    return 0;
}
