#include <iostream>
using namespace std;
int main(){
int n,l;
cin >> n,l;
int min,max;
int ans;
min=l;
max=l+n-1;
if(max*min <= 0){
cout << (min+max)*n/2 << endl;
}
else{
if (max < 0) cout << (min+max)*n/2-max << endl;
if (min > 0) cout << (min+max)*n/2-min << endl;
}
return 0;
}
