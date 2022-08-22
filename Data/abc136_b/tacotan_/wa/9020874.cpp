#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans;
for(int i=1;i<N+1;i++){
if((to_string(i).size()%2==1))
ans++;
}
cout << ans << endl;
}
