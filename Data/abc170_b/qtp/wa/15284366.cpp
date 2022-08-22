#include<bits/stdc++.h>
using namespace std;
int main(void){
int X,Y; cin >> X >> Y;
int i,j;
for(i=0; i<=X; ++i)
for(j=0; j<=X; ++j)
if( ((i*4)+(j*2))==Y ){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
