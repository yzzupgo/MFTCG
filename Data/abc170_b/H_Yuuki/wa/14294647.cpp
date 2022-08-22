#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
for(int i = 1; i <= x; i++){
if(i*2 + (x-i)*4 == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
