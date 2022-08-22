#include <iostream>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
for(int a=0; a<=x; a++){
if((2*a+4*(x-a)==y)){
cout << "yes";
return 0;
}
}
cout << "no";
return 0;
}
