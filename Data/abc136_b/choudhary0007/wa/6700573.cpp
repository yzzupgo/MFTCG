#include<bits/stdc++.h>
using namespace std;
main()
{
int N;
cin>>N;
if(N<100)
cout<<min(9,N);
if(N>=100 && 10000)
cout<<min(909,N-90);
if(N>=10000 && N<=100000)
cout<<N-10000+909;
}
