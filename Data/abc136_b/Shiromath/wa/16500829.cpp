#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,ans = 0;
cin >> n;
for(int i = 0; i < n; i++){
if(to_string(i).size() % 2 == 1)
ans++;
}
cout << ans << endl;
return 0;
}
