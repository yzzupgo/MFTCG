#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y;cin >> x >> y;
if(x>=y){ cout << "No\n";return 0;}
if(!(x&1)){
int mid=x/2;
if(x*2==y || (x-1)*2+4*1==y || (x-1)*4+2==y || x*4==y || mid*4+mid*2==y){
cout << "Yes\n";
}
else cout << "No\n";
}
else{
int mid=floor(x/2);
int dif=x-mid;
if(x*2==y || (x-1)*2+4*1 || (x-1)*4+2==y || x*4==y || mid*2+dif*4==y || mid*4+dif*2) cout << "Yes\n";
else cout << "No\n";
}
}
