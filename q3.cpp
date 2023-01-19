#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int ct=0;
	for(int i=2;(i*i)<=num;i++){
		if(num%i==0){
			ct=1;
			cout<<"not prime";
			break;
		}
		else{
			ct=0;
		}
	}
	if(ct==0){
		cout<<"prime";
	}

	return 0;
}