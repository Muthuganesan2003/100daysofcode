 #include <bits/stdc++.h>
 using namespace std;
 void pattern1(int n){
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
 void pattern2(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=0;j<i;j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
 void pattern3(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=i;j++){
 			cout<<j;
		 }
		 cout<<endl;
	 }
 }
void pattern4(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=i;j++){
 			cout<<i;
		 }
		 cout<<endl;
	 }
 }
 
void pattern5(int n){
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n-i;j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
void pattern6(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=n-i+1;j++){
 			cout<<j;
		 }
		 cout<<endl;
	 }
 }
 void pattern7(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=n-i;j++){
 			cout<<" ";
		 }
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		for(int j=1;j<=n-i;j++){
 			cout<<" ";
		 }
		 cout<<endl;
	 }
 }
 void pattern8(int n){
 	for(int i=0;i<n;i++){
 		for(int j=0;j<i;j++){
 			cout<<" ";
		 }
		 for(int j=0;j<2*n-i*2-1;j++){
		 	cout<<"*";
		 }
		 for(int j=0;j<i;j++){
 			cout<<" ";
		 }
		 cout<<endl;
		 
	 }
 }
 void pattern9(int n){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=n-i;j++){
 			cout<<" ";
		 }
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		for(int j=1;j<=n-i;j++){
 			cout<<" ";
		 }
		 cout<<endl;
	 }
	 for(int i=0;i<n;i++){
 		for(int j=0;j<i;j++){
 			cout<<" ";
		 }
		 for(int j=0;j<2*n-i*2-1;j++){
		 	cout<<"*";
		 }
		 for(int j=0;j<i;j++){
 			cout<<" ";
		 }
		 cout<<endl;
		 
	 }
 }
 void pattern10(int n){
 	for(int i=1;i<=2*n-1;i++){
            int stars=i;
            if(i>n)stars=2*n-i;
            for(int j=0;j<stars;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
 }
 void pattern11(int n){
 	for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=1;j<=i+1;j++){
                    cout<<j%2<<" ";
                }
            }
            else{
                for(int j=0;j<i+1;j++){
                    cout<<j%2<<" ";
                }
            }
            cout<<endl;
        }
 }
 void pattern12(int n){
 	for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=0;j<2*n-i*2;j++){
                cout<<"  ";
            }
             for(int j=i;j>0;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
 }
 void pattern13(int n){
 	int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }
 }
 void pattern14(int n){
 	for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch;
            }
            cout<<endl;
        }
 }
 void pattern15(int n){
 	 for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+n-1-i;ch++){
                cout<<ch;
            }
            cout<<endl;
        }
 }
 void pattern16(int n){
 	for(int i=0;i<n;i++){
            char ch='A'+i;
            for(int j=0;j<=i;j++){
                cout<<ch;
            }  
            
            cout<<endl;
        }  
 }
 void pattern17(int n){
 	  for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            char ch='A';
             int c=(2*i-1)/2;
            for(int j=1;j<=2*i-1;j++){
                cout<<ch;
                if(j<=c){ch++;}
                else {ch--;}
               
            }
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
 }
 void pattern18(int n){
 	for(int i=0;i<n;i++){
            for(char ch='A'+n-1;ch>='A'+n-1-i;ch--){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
 }
 void pattern19(int n){
 	for(int i=0;i<n;i++){
			for(int j=0;j<n-i;j++){
				cout<<"*";
			}
			for(int j=1;j<=i*2;j++){
				cout<<" ";
			}
				for(int j=0;j<n-i;j++){
				cout<<"*";
			}
			cout<<endl;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<i+1;j++){
				cout<<"*";
			}
			for(int j=1;j<=2*n-i*2-2;j++){
				cout<<" ";
			}
				for(int j=0;j<i+1;j++){
				cout<<"*";
			}
			cout<<endl;
		}
 }
 void pattern20(int n){
 	for(int i=1;i<=2*n-1;i++){
            int s=i;
            if(n<i) s=2*n-i;
            for(int j=1;j<=s;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*abs(n-i);j++){
                cout<<" ";
            }
            if(n<i) s=2*n-i;
            for(int j=1;j<=s;j++){
                cout<<"*";
            }
            cout<<endl;
        }
 }
 void pattern21(int n){
 	for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(i==0||i==n-1||j==0||j==n-1){
                   cout<<"*";
               }
               else{
                   cout<<" ";
               }
           }
           cout<<endl;
       }
 }
 void pattern22(int n){
 	for(int i=1;i<2*n;i++){
            for(int j=1;j<2*n;j++){
                int top=i-1;
                int left=j-1;
                int right=2*n-1-j;
                int down=2*n-1-i;
                cout<<n-min(min(top,down),min(left,right))<<" ";
                }
            cout<<endl;
        }
 }
 int main(){
 int n;
 cin>>n;
 pattern1(n);
 cout<<endl;
 pattern2(n);
 cout<<endl;
 pattern3(n);
 cout<<endl;
 pattern4(n);
 cout<<endl;
 pattern5(n);
 cout<<endl;
 pattern6(n);
 cout<<endl;
 pattern7(n);
 cout<<endl;  
 pattern8(n);
 cout<<endl;
 pattern9(n);
 cout<<endl;
 pattern10(n);
 cout<<endl;
 pattern11(n);
 cout<<endl;
 pattern12(n);
 cout<<endl;
 pattern13(n);
 cout<<endl;
 pattern14(n);
 cout<<endl;
 pattern15(n);
 cout<<endl;
 pattern16(n);
 cout<<endl;
 pattern17(n);
 cout<<endl;
 pattern18(n);
 cout<<endl;
 pattern19(n);
 cout<<endl;
 pattern20(n);
 cout<<endl;
 pattern21(n);
 cout<<endl;
 pattern22(n);

  return 0;
}

