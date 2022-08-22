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
if(Y%2 !=0){
cout << "No" << endl;
return 0;
}
if( 2*X > Y || 4*X <Y){
cout << "No" << endl;
return 0;
}
int N=1;
for(int i=0;i<=X;i++){
if((2*N + 4*(X-N)) == Y){
cout << "Yes" << endl;
return 0;
}
N++;
}
cout << "No" << endl;
}
