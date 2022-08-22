#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int a, b;
cin >> a >> b;
int x = (b - 2 * a)/2;
cout << (x * 4 + (a - x) * 2 == b && x <= a ? "Yes" : "No");
}
