#include <bits/stdc++.h>
#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for(int i=1;i<=x;i++){
if(2*i+4*(x-i) == y){
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
