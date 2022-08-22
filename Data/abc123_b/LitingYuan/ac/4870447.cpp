#include <iostream>
#include<algorithm>
using namespace std;
struct node
{
    int t1;
    int val;
};
node a[10];
bool cmp(node x , node y)
{
    return x.t1 > y.t1;
}
int main()
{

    int t=0;
    for(int i=1;i<=5;i++)
    {
        cin>>a[i].val;
        a[i].t1 = a[i].val%10;
    }
    int bad = 0,bad_t=-1;
    sort(a+1,a+6,cmp);
    for(int i=1;i<=5;i++)
    {
        t += a[i].val;
        if(t%10!=0 && i<5){
            t = 10*(t/10) + 10;
        }
        if(a[i].t1 > 0){
            bad = a[i].val;
            bad_t = i;
        }
        //cout<<t<<endl;
    }
    if(bad_t == -1)
        cout<<t<<endl;
    else
    {
        if(bad_t == 5)
            cout<<t<<endl;
        else
        {
            int bad1 = 10*(bad/10)+10;
            //cout<<"bad1"<<bad1<<endl;
            t = t -bad1 + bad;
            cout<<t<<endl;
        }

    }
   // cout<<t<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
