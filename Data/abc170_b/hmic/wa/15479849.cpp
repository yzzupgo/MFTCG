#include<iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(2*x > y || 4*x < y) cout << "No\n";
else cout << "Yes\n";
return 0;
}
