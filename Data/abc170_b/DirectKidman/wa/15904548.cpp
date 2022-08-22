#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int t = (2*x-y);
int k = (y - 4*x)*2;
if(t%2 == 0 && k%4 == 0 && t>=0 && k >= 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
