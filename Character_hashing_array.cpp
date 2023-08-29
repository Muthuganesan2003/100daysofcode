#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="Muthu";
    //hash function
    int  arr[256]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]]+=1;
    }
    char ch='u';
    cout<<arr[ch];

    return 0;
}
