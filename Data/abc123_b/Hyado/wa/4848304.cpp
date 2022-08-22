#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a=9,b,ans=0;
    vector<int> v(5);
    bool flag=false;
    for(int i=0;i < 5;i++){
        cin >> v.at(i);
    
    if(a > v.at(i)%10 && v.at(i)%10>0){
        a=v.at(i)%10;
        b=i;
        flag =true;
    }
    }

    for(int j=0;j < 5;j++){
        if(j!=b){
            ans+=(v.at(j)+9)/10*10;
        }
    }
    if(flag){ans += v.at(b);}
    cout << ans << endl;
    
}