vector<int> generateFibonacciNumbers(int n) {
    int f=0,f1=1;
    vector<int>v;
    if(n<=2){
        for(int i=0;i<n;i++){
            v.emplace_back(i);
        }
    }
    else{
         v.emplace_back(f);
        v.emplace_back(f1);
    
    for(int i=2;i<n;i++){
        int f2=f+f1;
        v.emplace_back(f2);
        f=f1;
        f1=f2;
    }
    }
    return v;
}
