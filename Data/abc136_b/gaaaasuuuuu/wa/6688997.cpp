#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
if(a<10)
cout << a << endl;
else if(a<100)
cout << 9 << endl;
else if(a < 1000)
cout << a-90 << endl;
else if(a<10000)
cout << 909 << endl;
else if(a <= 100000)
cout << a- 9090 << endl;
if(a==100000)
cout << 90909 << endl;
}
