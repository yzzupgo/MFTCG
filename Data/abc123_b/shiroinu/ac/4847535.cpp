#include<bits/stdc++.h>
using namespace std;

int main(){
    int t[5];
    int a=0;
    for(int i=0;i<5;i++){
        cin>>t[i];
        if(t[i]%10!=0){
            if(10-(t[i]%10)>a)a=10-(t[i]%10);
            t[i]+=10-(t[i]%10);
        }
    }
    int ans=0;
    for(int i=0;i<5;i++){
        ans+=t[i];
    }
    cout<<ans-a<<endl;
    return 0;
}