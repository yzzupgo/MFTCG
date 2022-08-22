#include <bits/stdc++.h>
using namespace std;
int main(){
int n, l, i, a = 999999, s = 0;
cin >> n >> l;
for(i=0; i<n; i++){
s += i+l;
if(abs(a) > abs(l+i)){
a = l+i;
}
}
cout << s - a;
return 0;
}
