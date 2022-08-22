#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(){
int n; cin >> n;
int keta = to_string(n).length();
long long ans = 0;
if(keta==1){
ans+=n+1;
cout << ans << endl;
return 0;
}
ans += 9;
if(keta%2==1){
ans += n-(pow(10,keta-1)-1);
}
long long tmp = 100;
for (int i=3; i < keta; i+=2){
ans += 9*tmp;
tmp*=100;
}
cout << ans << endl;
}
