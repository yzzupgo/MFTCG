#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y,t,k, amari;
cin >> x >> y;
k=(y-2*x)/2;
t=x-k;
amari=(y-2*x)%2;
if (amari == 0 && k >= 0 && k <=25 && t>=0 && t<= 50){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
