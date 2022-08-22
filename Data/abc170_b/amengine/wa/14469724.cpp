#include <iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int f=0;
for(int i=1;i<=x;i++){
if(2*i+4*(x-i)==y)
{ f=1;
}
}
if(f) cout << "Yes\n";
else cout << "No\n";
return 0;
}
