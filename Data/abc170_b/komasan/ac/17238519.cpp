#define _GLIBCXX_DEBUG
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define BFOR(bit,a,b) for(int bit = (a); bit < (1<<(b)); ++bit)
#define BREP(bit,n) BFOR(bit,0,n)
using namespace std;
using ll = long long;
int main() {
int x,y;
cin >> x >> y;
if(y % 2 == 1){
cout << "No" << endl;
return 0;
}
if(x * 2 <= y && x * 4 >= y){
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
