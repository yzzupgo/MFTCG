#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y,i;
cin >> X >> Y;
for(i=0;i<1;i++){
if(i*2+(X-i)*4 == Y){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
}
