// find the number is prime or not
#include<iostream>
using namespace std;
int main(){
	int i,n;
	int count=0;
	count<<"Enter a number:";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<n<<"Prime number";
	}
	else
	{
		cout<<n<<"Not a prime number";
	}
	return 0;
}