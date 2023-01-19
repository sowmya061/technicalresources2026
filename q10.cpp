#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		int cnt=0;
		if(num%i!=0){
			for(int j=2;j*j<=i;j++){
				if(i%j==0){
					cnt++;
				}
			}

		}
		if(cnt==0){
			cout<<i<<endl;
		}
	}
	return 0;

}