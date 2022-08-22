#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
#include<map>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(a < 6){
cout << 0;
}
else if(a < 13){
cout << b/2;
}
else
cout << b;
cout << endl;
}
