#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<complex>
#include<functional>
#include<vector>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<set>
using namespace std;
int main(){
int i=1,l,n;
int sum=0;
cin >> n >> l;
while(i<n+1){
sum+=l+i-1;
i++;
}
if(l<0 && l+n>=0){
cout << sum << endl;
}else if(l+n<0){
cout << sum-(l+n-1) << endl;
}else{
cout << sum-l << endl;
}
return 0;
}
