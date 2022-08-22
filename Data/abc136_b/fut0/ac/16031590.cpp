#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
string str;
int ans=0;
for(int i=1; i<N+1; i++){
str=to_string(i);
if(str.size()%2==1) ans++;
}
cout << ans << endl;
}
