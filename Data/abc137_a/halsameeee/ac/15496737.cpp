#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int plus,minus,mult;
plus = a + b;
minus = a-b;
mult = a * b;
cout << max({plus,minus,mult}) << endl;
}
