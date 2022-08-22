#include <iostream>
using namespace std;
int main(){
int x;
int y;
cin >> x >> y;
for(int i=0; i<=x; i++){
if(y == 2 * i + 4 * (x - i)){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
