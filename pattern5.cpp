#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		//increasing
		for(int j=n-2;j>=i;j--){
			cout<<" ";

		}
		for(int j=1;j<=i;j=j+2){
			cout<<"*";
		}
		cout<<endl;
	}
}