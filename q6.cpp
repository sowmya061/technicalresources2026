#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int flr,rev=0;
	while(num>0){
		flr=num%10;
		rev=flr+rev*10;
		num=num/10;
	}
	cout<<rev<<endl;
	return 0;
}