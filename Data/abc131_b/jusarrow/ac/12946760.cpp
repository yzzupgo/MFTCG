#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x; cin>>n>>x;
int sum = 0;
if(x>=0) sum=(x+1+x+n-1)*(n-1)/2;
else if(x+n-1<0)sum = (x+x+n-2)*(n-1)/2;
else sum=(x+x+n-1)*n/2;
cout<< sum <<endl;
}
