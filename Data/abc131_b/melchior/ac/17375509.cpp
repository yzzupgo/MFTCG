#include<bits/stdc++.h>
using namespace std;
int main(){
int n, l, out = 0;
cin >> n >> l;
for(int i=1; i<=n; i++){
out += l+i-1;
}
if(l > 0 && l+n > 0){out -= l;}
else if(l < 0 && l+n <= 0){out -= l+n-1;}
cout << out << endl;
}
