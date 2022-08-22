#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define ll long long
int main() {
int X,Y;
cin >> X >> Y;
if(((Y-2*X)/2) <= X){
cout <<"Yes" << endl;
}
else{
cout <<"No" << endl;
}
}
