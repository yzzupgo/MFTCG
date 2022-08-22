#include<bits/stdc++.h>
#define PI 3.14159265358979323846264338327950288419716939937510
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
bool can = false;
for(int i = 2*x;i<= 4*x;i+=2){
if(i == y){
can = true;
break;
}
}
if(can)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
