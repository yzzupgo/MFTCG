#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1e9+7;

bool Sort(const pair<int,int> &p1,const pair<int,int> &p2){
    if(p1.second==0 || p2.second==0){
        return p1.second<p2.second;
    }
    return (10-p1.second)<(10-p2.second);
}

int vec(pair<int,int> p1){
    int sum=0;
    if(p1.first%10==0){
        sum+=p1.first;
        return sum;
    }
    int m=10-(p1.second);
    sum=(p1.first)+m;
    return sum;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[5];
for(int i=0; i<5; i++){
cin>>a[i];
}
vector<pair<int,int>> v;
for(int i=0; i<5; i++){
    v.push_back(make_pair(a[i],a[i]%10));
}
sort(v.begin(), v.end(), Sort);
// for(auto i:v){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
int counter=0;
int Ans=0;
for(auto i:v){
if(counter==4){
Ans+=i.first;
continue;
}    
int s=vec(i);
// cout<<Ans<<"\n";
Ans+=s;
counter++;    
}
cout<<Ans<<"\n";
    return 0;
}

//for i==
// ----
// ----
// ----
// ----