#include <iostream>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int w1,w2,x1,x2,m,w,v=0;
	    cin>>w1>>w2>>x1>>x2>>m;
	    w=w2-w1;
	    for(int i=x1*m;i<(x2*m)+1;i++){
	        if(w==i){
	            v=1;
	            break;
	        }
	    }
	    cout<<v<<endl;
	 
	}
	return 0;
}
