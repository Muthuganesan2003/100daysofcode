#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int w[n],h[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
        }
        int cmax=0;
        for(int i=0;i<n;i++) if(p[i]<=b) cmax=max(w[i]*h[i],cmax);
        if(cmax==0) cout<<"no tablet"<<endl;
        else cout<<cmax<<endl;
    }
}