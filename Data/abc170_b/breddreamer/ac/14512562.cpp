#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n, total;
cin >> n >> total;
ll flag = 0;
for(int i = 0; i <= n; i++){
if(i * 4 + (n - i) * 2 == total) flag = 1;
}
if(flag) cout << "Yes\n";
else cout << "No\n";
return 0;
}
