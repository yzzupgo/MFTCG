#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int temp, val;
temp = 2;
x -= 1;
val = 4*x;
(temp + val >= y)?cout << "Yes":cout << "No";
}
