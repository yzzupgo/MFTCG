#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int mem=abs(l), res=0;
for(int i=0; i<n; ++i){
if(abs(l)<abs(mem)) mem = l;
res += l;
++l;
}
res -= mem;
cout << mem << endl;
cout << res << endl;
return 0;
}
