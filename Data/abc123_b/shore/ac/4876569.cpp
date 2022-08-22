#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],k;
    for(int i=0;i<5;i++)
        cin>>a[i];
        int sum=0,mins=1e9;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
         for(int k=0;k<5;k++){
          for(int s=0;s<5;s++){
        for(int w=0;w<5;w++){
           if(i==j||i==k||i==s||i==w||j==k||s==j||w==j||k==s||k==w||s==w)
            continue;
              sum=a[i];
             sum+=(sum%10==0?0:10-sum%10);
             sum+=a[j];
             sum+=(sum%10==0?0:10-sum%10);
             sum+=a[k];
             sum+=(sum%10==0?0:10-sum%10);
             sum+=a[s];
             sum+=(sum%10==0?0:10-sum%10);
             sum+=a[w];
          
             mins=min(sum,mins);

        }}}}}
        cout<<mins<<endl;
    return 0;
}
