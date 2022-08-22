#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
string s = to_string(i);
if(s.size() % 2 == 1) ans++;
}
cout << ans << endl;
return 0;
}
