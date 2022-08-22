#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >>y;
for(int t=0;t<100;t++){
for(int c=0;c<100;c++){
if(t+c==c&&2*t+4*c==y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
