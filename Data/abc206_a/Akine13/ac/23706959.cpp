#include<algorithm>
#include<complex>
#include <functional>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<stdio.h>
#include<string.h>
#include<string>
#include<time.h>
#include<vector>
using namespace std;
#define rep(i,s,n) for(int i=s;i<n;i++)
#define keta(a) fixed << setprecision(a)
int main(void) {
double n;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
}
if(a == 206) {
cout << "so-so" << endl;
}
if(a > 206) {
cout << ":(" << endl;
}
return 0;
}
