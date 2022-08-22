#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
int t,c;
cin>>x>>y;
if(y%2 != 0 || x == 0 || x > y){
cout<<"NO";
return 0;
}
else{
c = (y + (-2 * x)) / 2;
t = (x -c);
}
if((t*4 + c*2) == y){
cout<<"YES";
} else {
cout<<"NO";
}
return 0;
}
