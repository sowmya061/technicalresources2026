#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sp=n/2,st=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sp;j++){
			if(i==((n/2)+1)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}

		}
		for(int j=1;j<=st;j++){
			cout<<"*";

		}
		cout<<endl;
		if(i<=n/2){
			st++;
		}
		else{
			st--;
		}



	}
	return 0;
	


	
}
