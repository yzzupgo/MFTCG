#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans;
string s;
for(int i = 1;i <= n;i++){
s = to_string(i);
if(s.size() % 2 == 1){
ans++;
}
}
cout << ans << endl;
}
