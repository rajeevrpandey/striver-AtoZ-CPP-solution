bool checkArmstrong(int n){
	//Write your code here
	int num=n, nOfDig=0;
	long sum=0;
	while(num){
		num/=10;
		nOfDig++;
	}
	num=n;
	while(num){
		int dig = num%10;
		sum = sum + pow(dig,nOfDig);
		num/=10;
	}
	return sum==n;
}
