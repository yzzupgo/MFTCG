#include <iostream>
#include <vector>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
bool flg = false;
for(int i = 0; i < x; i++){
if(4 * i + 2 * (x-i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
