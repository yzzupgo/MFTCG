#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int getdigit(int num){
int digit = 0;
while(num != 0){
num/=10;
digit++;
}
return digit+1;
}
int main(void){
int n; cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
if(getdigit(i)%2 == 0) ans++;
}
cout << ans << endl;
return 0;
}
