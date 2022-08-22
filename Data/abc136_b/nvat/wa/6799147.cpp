#include <bits/stdc++.h>
using namespace std;
#define DB if(0)
int p10[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
int main(){
int n;
cin >> n;
int digits = int(floor(log10(n))) + 1;
DB cout << "digits " << digits << endl;
int ans = 0;
if(digits & 1){
ans += (n - int(pow(10, digits-1)) );
digits--;
}
digits--;
while(digits > 0){
ans += ( p10[digits] - 1 - p10[digits-1] + 1);
digits -= 2;
}
cout << ans;
}
