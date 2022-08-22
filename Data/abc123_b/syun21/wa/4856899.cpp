#include <iostream>
using namespace std;
int main(){
    int n[7];
    n[6]=0;
    for(int i=0;i<6;i++){
        cin>>n[i];
    }
   for(int j=1;j<5;j++){
       if(n[0]%10==0){
           n[5]=n[0];
           n[0]=n[j];
           n[j]=n[5];
       }
       else if(n[0]%10>n[j]%10&&n[j]%10!=0){
           n[5]=n[0];
           n[0]=n[j];
           n[j]=n[5];
       }
       else{
       }
   }
    for(int l=1;l<5;l++){
        if(n[l]%10==0){
        n[6]+=n[l];
        }
        else{
            n[6]+=(n[7]/10 + 1)*10;
        }
    }
    cout<<n[6]+n[0]<<endl;
}