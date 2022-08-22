#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (n); ++i)
using P = pair<int,int>;
int main() {
int n;
cin >> n;
int c=0;
rep(i,n) {
if(i<10){
c++;
}
else if(99<i &&i<1000){
c++;
}
else if(9999<i&&i<1000000){
c++;
}
}
cout << c << endl;
}
