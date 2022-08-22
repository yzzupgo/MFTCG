#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int ans=0,m=10;
    for(int i=0;i<5;i++){
        int a; cin>>a;
        if(a%10!=0){
            ans+=(a/10+1)*10;
            m=min(m,a%10);
        }else{
            ans+=a;
        }
    }
    if(m!=10)ans-=(10-m);
    cout<<ans<<endl;
}
