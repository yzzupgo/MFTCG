#include <iostream>
using namespace std;
int main()
{ int x, y;
cin>>x>>y;
int sum = 4*x;
if(sum == y){
cout<<"Yes"; return 0;
}
if(y > sum or x*2 > y){
cout<<"No"; return 0;
}
for(int i=1; i<=x; i++){
sum -= 2;
if(sum == y){
cout<<"Yes";
break;
}
if( sum < y){
cout<<"No";
break;
}
}
return 0;
}
