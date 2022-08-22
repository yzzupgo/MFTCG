#include<iostream>
using namespace std;
int main(){
int x,y;cin >> x >> y;
if(x==y){
if(x&1 && y&1) cout << "No\n";
else cout << "Yes\n";
}
else if(x*2>=y || x*4>=y) cout << "Yes\n";
else cout << "No\n";
}
