#include <iostream>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int apple[n];
int expect = 0;
for(int i=0; i<n; i++){
apple[i] = l + i;
expect += apple[i];
}
if(l>=0){
cout << expect - apple[0] << endl;
}
else if(n>= -l){
cout << expect << endl;
}else{
cout << expect - apple[n-1] << endl;
}
}
