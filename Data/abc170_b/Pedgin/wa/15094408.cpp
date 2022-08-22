#include <bits/stdc++.h>
using namespace std;
const string YES = "Yes";
const string NO = "No";
void solve(long long X, long long Y){
if (Y >= 2 * X && Y <= 4 * X)
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
