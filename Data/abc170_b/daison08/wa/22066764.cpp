#include <cstdlib>
#include<iostream>
#include<unordered_set>
#include<vector>
#include<cstring>
#include<string>
#include<bitset>
#include<algorithm>
#include<cmath>
using namespace std;
using ll = int64_t;
int main(){
int x,y;
cin >> x >> y;
if(y % 2 == 0 && 4*x-y>=2){
cout << "Yes" << endl;
}
else cout << "No" << endl;
return 0;
}
