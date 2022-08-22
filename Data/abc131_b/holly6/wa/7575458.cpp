#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
int n,l;
cin >> n >> l;
if(l <= 0 && l+n > 0){
cout << (l+(l+n-1)) * (n-1)/2 << endl;
}
else if(l > 0){
cout << ((l+1)+(l+n-1)) *(n-1)/2 << endl;
}
else{
cout << (l+(l+n-2)) *(n-1)/2 << endl;
}
}
