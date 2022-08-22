#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,c,t;
cin >> x >> y;
t = (y/2)-x;
c = 2*x - (y/2);
if(y%2==0 && c>=0 && t>=0){cout << "Yes\n";}
else{cout << "No\n";}
return 0;
}
