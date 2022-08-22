#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,d,e,p,q;
cin >> a >> b;
p=2*a;
q=4*a;
c=b%2;
if(c==1){
cout << "No"<< endl;
}
else if(p<=b && b<=q ){
cout << "Yes"<< endl;
}
else{
cout << "No"<< endl;
}
}
