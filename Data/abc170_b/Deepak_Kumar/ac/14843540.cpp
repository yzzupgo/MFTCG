#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(((4 * x) - y) % 2 == 0 && ((4 * x) - y) / 2 >= 0 && ((4 * x) - y) / 2 <= x)
cout << "Yes";
else
cout << "No";
}
