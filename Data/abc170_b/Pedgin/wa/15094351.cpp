#include <bits/stdc++.h>
using namespace std;
const string YES = "Yes";
const string NO = "No";
void solve(long long X, long long Y){
int k = X * 4 - Y;
if (k >= 0 && k % 2 == 0)
cout << YES << endl;
else
cout << NO << endl;
}
int main(){
long long X;
scanf("%lld",&X);
long long Y;
scanf("%lld",&Y);
solve(X, Y);
return 0;
}
