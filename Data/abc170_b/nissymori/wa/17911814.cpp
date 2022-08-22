#include <iostream>
#include <vector>
#include <map>
#include <bitset>
#include <set>
#include <cmath>
#include <limits>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
bool ok = false;
for (int i = 0; i < X+1; ++i) {
for (int j = 0; j < X- i +1 - i; ++j) {
if(i*2 + j*4 ==Y) ok = true;
}
}
if(ok){
cout<<"Yes";
}
else{
cout<<"No";
}
}
