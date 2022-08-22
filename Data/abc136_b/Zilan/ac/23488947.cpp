#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int number,ans=0;
string str;
cin>>number;
for(int i=1;i<=number;i++){
int siz;
str=to_string(i);
siz=str.size();
if(siz%2==1){
ans++;
}
}
cout<<ans;
}
