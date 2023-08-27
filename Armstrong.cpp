bool checkArmstrong(int n){
	int sum=0,r,res=n;
	string s=to_string(n);
	int size=s.length();
	while(n>0){
		r=n%10;
		sum+=pow(r,size);
		n/=10;
	}
	if(sum==res)return true;
	else return false;
}
