#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);
int X;
int Y;
int c;
int t;
int a = 0;
cin>>X;
cin>>Y;
if(X == 0 && Y == 0){
cout<<"Yes";
return 0;
}
for(int i = 1;i < X;i++){
c = i;
t = X - c;
if((c * 2 + t * 4) == Y){
cout<<"Yes";
a = 1;
break;
}
}
if(a == 0){
cout<<"No";
}
}
