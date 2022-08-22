#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int ans = __gcd(a,b);
if(ans && b>a)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
