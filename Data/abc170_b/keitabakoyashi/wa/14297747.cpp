#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <map>
#include <set>
#include <math.h>
#include <cmath>
#define ll long long
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
for (int i = 1; i <= 100; i++) {
if(Y == (2*i + 4*(X-i))){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
