//    E E E E E 
//    D D D D D
//    C C C C C
//    B B B B B
//    A A A A A
#include<iostream>
using namespace std;
intmain (){
	char i,j;
	for(int i='E';i>='A';i--){
		for(int j='E';j>='A';j--){
			cout<<char(i);
		}
		cout<<endl;
	}
	return 0;
	}