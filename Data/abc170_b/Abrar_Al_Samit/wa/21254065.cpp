#include<bits/stdc++.h>
using namespace std;
void PlayGround() {
int X, Y; cin >> X >> Y;
if(Y%2==0 && X*4>=Y)
puts("Yes");
else puts("No");
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
PlayGround();
return 0;
}
