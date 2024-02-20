#include<iostream>

using namespace std;

 

int main() {

    int n; 

    cin>>n;

    int even=0; // please assign value of even and odd to zero else you will get wrong ans .(try it)

    int odd=0;

 

    while(n){

    int k = n%10;

 

    if (k%2==0){

        even = even + k;

        } else {

                odd = odd + k;

        }

        n= n/10;

    }

    cout<<even<<" "<<odd;   

}
