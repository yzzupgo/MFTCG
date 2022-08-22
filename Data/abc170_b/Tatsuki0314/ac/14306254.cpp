#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <cmath>
typedef long long ll;
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int ch = y - 2 * x;
if(ch < 0){
cout << "No" << endl;
} else {
if(ch % 2 == 0){
if(x - ch / 2 < 0){
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
} else {
cout << "No" << endl;
}
}
}
