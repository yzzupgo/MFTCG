#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans=0;
for (int i=0;i<n;i++){
if ((n/10)%2==0){
ans++;
}
}
cout << ans << endl;
}
