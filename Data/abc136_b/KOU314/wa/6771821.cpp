#include<bits/stdc++.h>
using namespace std;
int main(void){
int n;
cin >> n;
int ans=0;
for(int i=1;i<=n;i++){
if((i/10)%2==0)ans++;
}
cout << ans << endl;
return 0;
}
