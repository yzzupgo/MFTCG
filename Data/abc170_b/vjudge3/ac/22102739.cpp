#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y%2==1){
cout << "No" << endl;
return 0;
}
int a=(y-(x*2))/2,b=((x*4)-y)/2;
if(a<0 || b<0) cout << "No" << endl;
else cout << "Yes" << endl;
}
