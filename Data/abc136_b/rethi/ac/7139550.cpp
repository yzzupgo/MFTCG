#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans = 0;
int keta = 0;
cin >> n;
while(n >= pow(10, keta)){
keta++;
}
if(keta % 2 == 0){
while(keta > 0){
ans += 9 * (pow(10, keta));
keta -= 2;
}
}
else{
ans += (n-pow(10,keta-1) + 1);
ans = ans * 100;
keta--;
while(keta > 0){
ans += 9 * (pow(10, keta));
keta -= 2;
}
}
ans = ans/100;
cout << ans << endl;
return 0;
}
