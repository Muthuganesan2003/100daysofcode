bool isPrime(int n)
{
	int c=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			c++;
			if(n/i!=i){
				c++;
			}
		}
	}
	if(c==2)return true;
	else return false;
}
