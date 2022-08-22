#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int y;
cin>>y;
if((((4*x)-y)%2==0) && y>x && x>0 && y>0 && y%2==0 && (((4*x)-y)>=0)){
cout<<"Yes";
}
else cout<<"No";
return 0;
}
