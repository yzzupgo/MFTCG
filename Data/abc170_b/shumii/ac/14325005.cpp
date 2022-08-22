#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int t, k;
t = (4*x-y)/2;
k = x-t;
if(t+k == x && y == 2*t + 4*k && t >=0 && k >= 0){
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
