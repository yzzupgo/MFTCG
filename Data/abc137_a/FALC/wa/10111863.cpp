#include <iostream>
#include <vector>
using namespace std;
int main(){
int a,b,ans=0;
cin >> a >> b;
vector<int> an(3);
an[0]=a+b;
an[1]=a-b;
an[2]=a*b;
for(int i=1;i<3;i++){
if(an[i]>an[i-1] && ans < an[i])
ans = an[i];
else
ans = an[i-1];
}
cout << ans << endl;
}
