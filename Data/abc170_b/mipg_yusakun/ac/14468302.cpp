#include <iostream>
using namespace std;
int main(){
int y,x;
cin >> x >> y;
for(int i = 0; i <= x; i++){
if((x-i)*2+i*4==y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
