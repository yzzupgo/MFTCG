#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int a, b, c;
cin >> a >> b;
c = max(a + b, a - b);
cout << max(a * b, c);
}
