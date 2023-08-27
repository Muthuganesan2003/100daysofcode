int calcGCD(int n, int m){
    while(n!=0){
        int maxe=max(n,m);
        int mine=min(n,m);
        n = maxe%mine;
        m=mine; 
        
    }
    return m;
}
