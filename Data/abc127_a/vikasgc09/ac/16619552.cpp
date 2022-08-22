#include <bits/stdc++.h>
using namespace std;
int main() {
long long x,y;
cin >> x >> y;
if(x < 6){
cout << 0;
}else if(x < 13){
cout << y/2;
}else{
cout << y;
}
}
