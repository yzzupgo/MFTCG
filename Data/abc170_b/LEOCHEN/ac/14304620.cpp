#include <bits/stdc++.h>
using namespace std;
int main(){
int animals,legs;
cin>>animals>>legs;
int cranes=animals,turtles=0,stat=0;
while(cranes>=0){
if(cranes*2+turtles*4==legs){
stat=1;
break;
}
cranes--;
turtles++;
}if(stat==1)cout<<"Yes\n";
else cout<<"No\n";
}
