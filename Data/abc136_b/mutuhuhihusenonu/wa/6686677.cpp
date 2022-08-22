#include<bits/stdc++.h>
#define int long long
#define f(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
signed main(){
string s;
cin>>s;
if(s.size()%2){
int a=0;
f(i,s.size()-1){
a*=10;
if(i%2)a+=9;
}
a+=stoi(s)+1-pow(10,s.size()-1);
cout<<a<<endl;
}
else{
f(i,s.size()-2){
if(i%2)cout<<9;
else cout<<0;
}
}
return 0;
}
