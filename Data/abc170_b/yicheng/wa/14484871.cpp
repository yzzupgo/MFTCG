#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
bool ok=0;
cin >> x >> y;
if(4*x<y) {cout << "No"; return 0;}
for(int i=0;i<=x;i++){
if((i*2)+4*(x-i)==y) {ok=1;}
}
if(ok==1){cout << "Yes";}
return 0;
}
