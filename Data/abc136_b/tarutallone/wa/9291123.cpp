#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans=0;
for (int i=0;i<n;i++){
if (std::to_string(i).size()%2==1){
ans++;
}
}
cout << ans << endl;
}
