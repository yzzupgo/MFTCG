#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define mp make_pair
#define pb push_back
#define ALL(A) A.begin(),A.end()
const long long mod=1000000007;
int main(){
    int a[5],b[5],bo=100,sum=0,temp;
    for(int i=0;i<5;i++){
        cin>>a[i];b[i]=a[i]%10;
    }
    for(int i=0;i<5;i++)
    {
        if(b[i]==0)
        continue;
        bo=min(b[i],bo);
    }
    for(int i=0;i<5;i++)
    {
        if(b[i]==bo||b[i]==0)
        sum+=a[i];
        else
        {
            sum=sum+a[i]+(10-b[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}