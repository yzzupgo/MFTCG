#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
for(int i=0;i<X;i++){
int m=X-i;
if(Y==i*4+m*2){
cout << "Yes" << endl;
break;
}
else if(i==X-1){
cout <<"No"<<endl;
break;
}
}
}
