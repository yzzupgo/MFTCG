#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z;
cin >> x >> y;
z = y-2*x;
if(z>=0 && z%2==0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
