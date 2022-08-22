#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y,temp=0;
string ans;
cin >> X >> Y;
for(int i=0;i<=X;i++){
temp=2*i+4*(X-i);
if(temp==Y){
ans="Yes";
break;
}else if(temp<Y){
ans="No";
break;
}else{
continue;
}
}
cout << ans << endl;
return 0;
}
