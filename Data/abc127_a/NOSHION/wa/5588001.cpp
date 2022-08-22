#include "bits/stdc++.h"
using namespace std;
int main() {
int a,b,res;
cin >> a >> b;
if(a >=13){
res = b;
}
else if (a>=6 | a <= 12 ){
res = b/2;
}
else {
res =0;
}
cout<< res <<endl;
return 0;
}
