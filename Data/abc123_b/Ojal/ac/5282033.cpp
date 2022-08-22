#include<bits/stdc++.h>
using namespace std;

int main()
{
  int ip[5];
  for(int i=0;i<5;i++)
    cin>>ip[i];
  vector<pair<int,int> >p;
  for(int j=0;j<5;j++)
  {
  	int rem = ip[j]%10;
  	int waitTime=rem!=0?10-rem:0;
  	p.push_back(make_pair(waitTime,ip[j]));
  }
  sort(p.begin(),p.end());
  int totalTime=0;
  for(int k=0;k<4;k++)
  {
   totalTime+= p[k].first+p[k].second;
  	
  }
   totalTime+=p[4].second;
   cout<<totalTime<<"\n";
}