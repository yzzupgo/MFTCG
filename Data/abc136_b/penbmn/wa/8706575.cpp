#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans=0;
for(int i=0;i<N;i++){
string s=to_string(i);
if(s.size()%2==1){
ans++;
}
}
cout << ans << endl;
}
