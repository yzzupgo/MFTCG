#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,j=0,c;
cin >> a >> b ;
for(int i=0 ; i <= a ; i++){
c = i * 2 +(a - i) * 4 ;
if(c == b) j = 1 ;
}
if(j==0) cout << "NO";
else cout << "YES";
}
