#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
if(B%2)
puts("No");
else if(A*2<=B&&B<=A*4)
puts("Yes");
else puts("No");
return 0;
}
