#include <bits/stdc++.h>
using namespace std;
int main() {
long long x,y,ans;
cin >> x >> y;
for(long long i=0;i<=x;i++){
ans = 2*i+4*(x-i);
if(ans == y){
cout << "Yes";
return 0;
}
}
cout << "No" << endl;
}
