int sumOfAllDivisors(int n){
	// Write your code here.
	int sum=0;
	for(int i=1; i<=n; i++){
		int x = n/i;
		sum += x*i;
	}	
	return sum;
}
