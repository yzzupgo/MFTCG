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
int N=0;
for(int i=0;i<X+1;i++){
if((2*N + 4*(X-N)) == Y){
cout << "Yes" << endl;
return 0;
}
N++;
}
cout << "No" << endl;
}
