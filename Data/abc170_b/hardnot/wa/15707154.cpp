#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int tsuru, kame;
int flag=0, sum;
for(int i=0; i<X; i++){
tsuru=i+1;
kame=X-i;
sum=tsuru*2 + kame*4;
if(sum == Y) flag=1;
}
if(flag == 0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
