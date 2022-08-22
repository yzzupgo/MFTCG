#include <bits/stdc++.h>
using namespace std;
void solve(){
long long n ;
cin >> n;
int c = 0;
for(long long i = 0; i < n; i++){
if(i < 10){
c++;
}
else if(i >= 100 && i < 1000){
c++;
}
else if(i >= 10000 && i < 100000){
c++;
}
}
cout << c;
}
int main() {
int testcases = 1;
while (testcases--) {
solve();
}
return 0;
}
