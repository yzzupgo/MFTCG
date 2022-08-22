#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >>X>>Y;
bool ans = false;
for(int i = 0; i < X+1; i++){
if(Y == 2*i + 2 * X+ 2) ans = true;
}
if(ans)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
