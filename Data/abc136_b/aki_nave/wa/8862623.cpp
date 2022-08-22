#include <iostream>
#include <cmath>
using namespace std;
int main(){
int i=0, a, n;
cin >> n;
a=n;
for(; a>0; a/=10)
i++;
cout << n+1-pow(10, i-1)<<endl;
return 0;
}
