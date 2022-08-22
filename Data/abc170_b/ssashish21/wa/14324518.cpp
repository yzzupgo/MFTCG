#include<bits/stdc++.h>
using namespace std;
int countTourtle(int Heads, int Legs)
{
int count = 0;
count = (Legs)-2 * (Heads);
count = count / 2;
return count;
}
int main(){
int x,y;
cin>>x>>y;
int tourtle = countTourtle(x,y);
if(tourtle > x)
{
cout<<"NO";
return 0;
}
int crane = x - tourtle;
if(((4*tourtle)+(2*crane)) == y){
cout<<"YES";
} else {
cout<<"NO";
}
return 0;
}
