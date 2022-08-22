#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define int long long
main(){
int a, b;
cin >> a >> b;
if(a <= 5){
cout << 0 << endl; return 0;
}
if(a <= 12){
cout << b / 2 << endl; return 0;
}
cout << b << endl;
return 0;
}
