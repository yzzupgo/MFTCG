#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <regex>
using namespace std;
#undef INT_MAX
#undef INT_MIN
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX -1)
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) FOR(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define REPLACE(s,f,t) regex_replace(s, regex(f), t)
int main(int argc, const char * argv[]) {
int n,l;
cin >> n >> l;
int taste = 0;
int min = INT_MAX;
int tmin = 0;
REP(i,n){
taste += i + l;
if(min >= abs(i + l)) {
min = abs(i + l);
tmin = i + l;
}
}
taste -= tmin;
cout << taste << endl;
return 0;
}
