#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(5);
    int m=10,s=-10;
    for(int i=0;i<5;i++){
        cin>>v[i];
        m=min(m,v[i]%10);
        s+=(v[i]+9)/10*10;
    }
    cout<<s+m<<endl;
    return 0;
}