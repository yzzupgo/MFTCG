#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i <= (n); ++i)
using P = pair<int,int>;
int main() {
int n;
cin >> n;
int c=0;
rep(i,n) {
if(0<i &&i<10){
c++;
}
else if(99<i &&i<1000){
c++;
}
else if(9999<i&&i<100000){
c++;
}
}
cout << c << endl;
}
