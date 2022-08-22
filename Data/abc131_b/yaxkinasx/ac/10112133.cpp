#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int sum = 0;
int small = INT_MAX;
int last = -1;
for(int i=l; i< l+n; i++){
sum += i;
if(abs(i) < small){
small = abs(i);
last = i;
}
}
cout << sum - last << endl;
return 0;
}
