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
if(a > 12){
cout << b;
}
else if(a <= 12 && a > 5){
cout << b/2;
}
else{
cout << 0;
}
cout << endl;
}
