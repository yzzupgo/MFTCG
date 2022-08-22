#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool flg = false;
for(int a=0; a<=50; ++a){
for(int b=0; b<=25; ++b){
if(((a + b) == X) && ((2*a + 4*b) == Y)){
flg = true;
break;
}
}
if(flg) break;
}
if(flg) cout << "Yes" << endl;
else cout << "No" << endl;
}
