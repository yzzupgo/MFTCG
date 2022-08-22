#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int a[5];
    int ans=0;
    int mins = 9;
    for(int i=0;i<5;i++){
        int in;
        cin>>in;
        a[i]=in;
        if(in%10>0){
            ans+=in/10*10+10;
            mins = min(mins,in%10);
        } else{
            ans+=in/10*10;
        }
        
    }
    cout<<ans-(10-mins)<<endl;
}