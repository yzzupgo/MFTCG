#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include <math.h>
using namespace std;
int main(){
int n,a;
long long c=9,s=0,b;
cin >> n;
a=log10(n);
if(a==0){
cout << n << endl;
}
else{
for(int i=0; i<a; i+=2){
s+=c;
c*=100;
b=n%(c/9)+1;
}
if(a%2==0){
s+=b;
}
cout << s << endl;
}
}
