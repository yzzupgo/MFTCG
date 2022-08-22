#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int N;
cin >> N;
string s;
int len,ans=0;
for(int i=1;i<N;i++){
s=to_string(i);
len=s.size();
if(len%2==1) ans++;
}
cout << ans << endl;
return 0;
}
