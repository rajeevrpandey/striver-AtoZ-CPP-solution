int countDigits(int n){
	// Write your code here.
	int count= 0;
	int digit, num=n;
	while(num){
		digit = num%10;
		if(digit==0){
			num/=10;
			continue;
		} 
		else if(n%digit==0){
			count++;
		} 
		num/=10;
	} 	
	return count;
}
