#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(2 * x <= y && y <= 4 * x){
cout << "Yes";
return 0;
}
cout << "No";
return 0;
}
