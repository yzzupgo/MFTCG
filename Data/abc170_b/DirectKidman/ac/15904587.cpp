#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int t = (y- 2*x);
int k = (4*x - y)*2;
if(t%2 == 0 && k%4 == 0 && t>=0 && k >= 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
