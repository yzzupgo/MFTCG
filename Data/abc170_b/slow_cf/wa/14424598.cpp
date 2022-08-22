#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
int n , m;
cin >> n >> m ;
for(int i = 1 ; i <n ;i++)
{
if(i*2+(n-i)*4 == m)
{
cout << "Yes";
return ;
}
}
cout << "No";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}
