#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int f,g,h,i,j;
    int count=0;
    f=a%10;
    g=b%10;
    h=c%10;
    i=d%10;
    j=e%10;
    int m=900;

    if(!(f==0)&&!(g==0))m=min(f,g);
    else if(f==0&&g==0)count+=2;
    else if(f==0||g==0){
        count++;
        m=max(f,g);
    }
    if(!(h==0))m=min(m,h);
    else count++;
    if(!(i==0))m=min(m,i);
    else count++;
    if(!(j==0))m=min(m,j);
    else count++;
    if(count==5)count=4;
    if(m>10)m=0;
    int sum;
    sum=a+b+c+d+e+(40-f-g-h-i-j)+m-count*10;
    cout<<sum<<endl;
    //cout<<m<<endl;
    //cout<<count<<endl;
}