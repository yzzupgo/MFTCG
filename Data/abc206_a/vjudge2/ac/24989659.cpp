#include<bits/stdc++.h>
using namespace std;
int main() {
int n, m, t, g ;
cin >> n ;
m = n * 1.08 ;
g = 206 ;
if(g > m) {
cout << "Yay!" << endl ;
}
if(g == m) {
cout << "so-so" << endl ;
}
if(g < m) {
cout << ":(" << endl ;
}
}
