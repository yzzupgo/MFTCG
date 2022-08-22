#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int s,h,k;
int c =0;
s = A+B;
h = A-B;
k = A*B;
if(s<h){
c = h;
}else{
c = s;
}
if(c <k){
c = k;
}
cout << c << endl;
}
