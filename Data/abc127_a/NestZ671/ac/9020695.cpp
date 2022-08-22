#include<bits/stdc++.h>
using namespace std;
int main(){
int a;cin >> a;
int b;cin >> b;
if(a > 12)cout << b;
else if(a >= 6 && a <= 12)cout << b / 2;
else cout << 0;
}
