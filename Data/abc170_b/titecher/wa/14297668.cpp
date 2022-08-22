#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <utility>
#include <string>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <cctype>
typedef long long int lli;
using namespace std;
int main() {
int x,y;
cin >> x >> y;
for(int i=0;i<100;i++){
if(2*i+(4*(x-i))==y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
