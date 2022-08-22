#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int a, b;
cin >> a >> b;
cout << (b & 1 || b < a * 2 || b > a * 4 ? "No" : "Yes");
}
