#include<iostream>
using namespace std;
int main(){
int n, l, sum;
cin >> n >> l;
sum = 0;
if(l >= 0){
for(int i=1; i<n; i++){
sum+=l+i;
}
}else{
if(n<=-l){
for(int i=0; i<n-1; i++){
sum+=l+i;
}
}else{
for(int i=0; i<n; i++){
sum+=l+i;
}
}
}
cout << sum <<endl;
return 0;
}
