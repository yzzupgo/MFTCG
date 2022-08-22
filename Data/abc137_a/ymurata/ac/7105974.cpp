#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
cout << max(max(a+b, a-b), a*b) << endl;
return 0;
}
