vector<long long> factorialNumbers(long long n) {
    long long fact=1;
    int i=0;
    vector<long long>res;
    while(fact<=n){
        i++;
        fact*=i;
        if(fact<=n)res.push_back(fact);
    }
    return res;
}
