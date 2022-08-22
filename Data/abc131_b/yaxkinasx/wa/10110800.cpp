#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int sum = 0;
int small = INT_MAX;
for(int i=l; i< l+n; i++){
sum += i;
small = min(small, abs(i));
}
cout << sum - small << endl;
return 0;
}
