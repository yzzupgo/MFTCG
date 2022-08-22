#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++ ){
for (int j = 0; j<= x; j++){
if(i*2 + j*4 == y){
cout << "Yes";
return ;
}
}
}
cout << "No";
}
int main()
{
solve();
cout << "\n";
}
