//          *
//         **
//        ***
//       ****
//      *****

#include<iostream>
using namespace std;
int main(){
	int n=5;
	int i,j;
	for(int i=1;i<=n;i--){
		for(int j=5;j<=i;j--){
			if(j<=i){
				cout<<"*";
				
			}else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}