int calcGCD(int n, int m){
    // Write your code here.
    while(m>0 && n>0){
        if(m>n) m = m%n;
        else if(n>m) n = n%m;
        else return n;
    }
    if(m==0) return n;
    if(n==0) return m;
}
