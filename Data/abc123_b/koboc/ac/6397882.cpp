#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,m=10,s=-10;
    for(int i=0;i<5;i++){
        cin>>a;
        if(a%10!=0) m=min(m,a%10);
        s+=(a+9)/10*10;
    }
    cout<<s+m<<endl;
    return 0;
}