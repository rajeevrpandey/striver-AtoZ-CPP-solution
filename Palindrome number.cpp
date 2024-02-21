bool palindrome(int n)
{
    // Write your code here
    int dig,rev=0;
    int num = n;
    while(num){
        dig = num%10;
        rev = rev*10 + dig;
        num/=10;
    }
    if(rev==n) return true;

    return false;
    
}
