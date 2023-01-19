#include <iostream>
using namespace std;
int main(){
	int a,b;
	int lcm=0,gcd;
	cin>>a>>b;
	int les=0;
	if(a>b){
		les=b;
	}
	else{
		les=a;
	}
	for(int i=1;i<=les;i++){
		if(a%i==0 && b%i==0){
			lcm=i;
		}
	}
	gcd=(a*b)/lcm;
	cout<<"lcm "<<lcm<<endl;
	cout<<"gcd "<<gcd<<endl;
	return 0;
}
