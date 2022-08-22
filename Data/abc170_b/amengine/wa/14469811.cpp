#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y&1) cout << "No\n";
else if(2*x <= y && y <= 4*x){
cout << "Yes\n";
}
return 0;
}
