#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <math.h>
#include <stdio.h>
#include <climits>
#include <cfloat>
#include <string>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
int ans;
ans = max({a+b,a-b,a*b});
cout << ans << endl;
return 0;
}
