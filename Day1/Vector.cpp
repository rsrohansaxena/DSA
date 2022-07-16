#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vec.push_back(6);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    return 0;
}