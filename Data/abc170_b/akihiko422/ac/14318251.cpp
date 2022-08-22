#include <iostream>
using namespace std;
int main(){
int x;
int y;
cin >> x >> y;
for(int i=1; i<=x; i++){
if(y == 2 * i + 4 * (x - i) || y == 2 * (x - i) + 4 * i){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
