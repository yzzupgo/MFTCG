#include <iostream>
using namespace std;
bool func(int n){
int res=1;
if(n > 10){
while(n > 10){
++res;
n = n / 10;
}
}
if(res % 2 == 0) return true;
return false;
}
int main(){
int N;
int ans=0;
cin >> N;
for(int i=1;i<=N;i++){
if(func(i) == false) ++ans;
}
cout << ans << endl;
}
