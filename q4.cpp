#include <iostream>
using namespace std;
int main(){
    int start,end;
    cin>>start;
    cin>>end;
    for(int i=start; i<=end;i++){
        int count=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                count++;
            }

        }
        if(count==0){
            cout<<i<<endl;
        }
        
    }
    return 0;
    
}