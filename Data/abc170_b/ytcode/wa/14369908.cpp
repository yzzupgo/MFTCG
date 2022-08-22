#include <iostream>
#include <vector>
using namespace std;
int main(void){
int x,y;
cin >> x >> y;
for(int i = 1;i < x;i++){
if(2 * i + 4 * (x - i) == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
