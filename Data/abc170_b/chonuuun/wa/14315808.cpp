#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
int x,y;
cin >> x>>y;
int a;
if((4*x-y)/2 >=0 && (4*x-y)%2 ==0 && y%2 == 0) {
cout << "Yes";
}else{cout << "No";}
}
