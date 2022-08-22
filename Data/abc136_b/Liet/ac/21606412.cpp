#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
int keta = to_string(i).size();
if(keta%2 == 1) ans++;
}
cout << ans << endl;
}
