#include<iostream>
#include<cstring>
using namespace std;

int main() {
    // char str[100];
    // cin>>str; hello world -> hello
    
    // char temp = cin.get();
    // int len = 0;
    // while(temp !='\n') {
    //     str[len++] = temp;
    //     temp = cin.get();
    // }
    // str[len] = '\0';
    // cout<<"\nString "<<str;

    char sentence[100];
    cin.getline(sentence,100,'#');
    cout<<sentence;
    return 0;
}