#include<iostream>
#include<vector>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int y2 = y/2;
if(y&1==0 && (y2>=x) && (y2<=x*2)){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
