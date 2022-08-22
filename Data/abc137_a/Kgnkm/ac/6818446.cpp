#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if (a+b > a*b && a+b > a-b) {
cout << a+b; return 0;
}
if (a*b > a+b && a*b > a-b) {
cout << a*b; return 0;
}
cout << a-b;
return 0;
}
