#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(x == 1){
if(y == 2 || y == 4){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
return 0;
}
if(y % 2 != 0 || x * 4 < y){
cout<<"No\n";
return 0;
}
if(y < x * 2){
cout<<"No\n";
return 0;
}
cout <<"Yes\n";
return 0;
}
