#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
double n;
cin >> n;
int p = n * 1.08;
if(p < 206) {
cout << "Yay!" << endl;
}
if(p == 206) {
cout << "so-so" << endl;
}
if(p > 206) {
cout << ":(" << endl;
}
}
