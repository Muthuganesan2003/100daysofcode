#include <iostream>

using namespace std;
void print(int n){
    if(n<1){return;}
    print(n-1);
    int i=n;
    i-=1;
    cout<<n+i<<" ";
}

int main()
{
    int n;cin>>n;
    print(n);

    return 0;
}
