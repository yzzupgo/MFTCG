#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
if(2*i+(x-i)*4==y){
cout << "YES" << endl;
return 0;
}
}
cout << "NO" << endl;
return 0;
}
