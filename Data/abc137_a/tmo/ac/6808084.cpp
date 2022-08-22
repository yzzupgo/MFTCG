#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
int s;
int d;
int m;
s = A+B;
d = A-B;
m = A*B;
int max;
if(s>=d){
max = s;
if(m>=s){
max = m;
}
}
else{
max = d;
if(m>=d){
max = m;
}
}
cout << max << endl;
}
