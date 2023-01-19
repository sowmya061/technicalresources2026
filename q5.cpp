#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int cnt=0;
	int flr;
	while(num>0){
		flr=num%10;
		cnt++;
		num=num/10;
	}
	cout<<cnt<<endl;
	return 0;
}