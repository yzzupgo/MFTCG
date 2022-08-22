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
if(x == 0 && y == 0){
cout << "Yes" << endl;
return 0;
}else if(x == 0 || y == 0){
cout << "No" << endl;
return 0;
}
for(int i = 0; i <= x; i++){
if(i*2 + (x-i)*4 == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
