#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>
#include <ios>
#include <iomanip>
#include <stdio.h>
#include <iomanip>
#include <queue>
using namespace std;
#define rep(i,N) for(int i=0; i<N; i++)
#define revrep(i,N) for(int i=N-1; i>=0; i--)
#define coutline cout<<"------------ ("<<__LINE__<<")"<<endl;
typedef long long ll;
int main(void)
{
int A, B;
cin >> A >> B;
int ret = 0;
if (A >= 13) {
ret = B;
} else if (6 <= B && B <= 12) {
ret = B/2;
}
cout << ret << endl;
return 0;
}
