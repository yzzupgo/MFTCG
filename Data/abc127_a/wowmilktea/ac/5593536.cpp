#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int a=0, b=0;
cin >> a >> b;
( (a>12)? b*=1 : ( (a>5)? b*=0.5 : b*=0) );
cout << b;
return 0;
}
