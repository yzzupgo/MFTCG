#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
for(int i=0; i<=x; ++i){
if(y==i*2+(x-i)*4){
cout << "YES" << endl;
return 0;
}
}
cout << "NO" << endl;
return 0;
}
