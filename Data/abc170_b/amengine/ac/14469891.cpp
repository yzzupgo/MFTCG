#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y&1){
cout << "No\n";}
else if(2*x<=y and 4*x>=y){ cout << "Yes\n";}
else cout << "No\n";
return 0;
}
