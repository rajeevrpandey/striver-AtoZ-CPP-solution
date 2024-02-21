long reverseBits(long n) {
    // Write your code here.
    long rev = 0;
    bool dig=0;
    for(int i=1; i<=32; i++){
        dig = n & 1;
        rev = (rev<<1) | dig;
        n = n>>1;
    }
    return rev;
}
