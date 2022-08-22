#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
bool ok=0;
cin >> x >> y;
if(4*x<y||y<2*x) {cout << "No"; return 0;}
if(y%2!=0){ok=0;}
for(int i=0;i<=x;i++){
if((i*2)+4*(x-i)==y) {ok=1;}
}
if(ok==1){cout << "Yes";}
else cout << "No";
return 0;
}
