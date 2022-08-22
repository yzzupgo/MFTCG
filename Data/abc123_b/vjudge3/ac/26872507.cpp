    #include<bits/stdc++.h>
    using namespace std;

    vector<int> vec;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans=0;
        vector<pair<int,int>> vec;
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        vec.push_back(make_pair((a%10==0)?10:a%10,a));
        vec.push_back(make_pair((b%10==0)?10:b%10,b));
        vec.push_back(make_pair((c%10==0)?10:c%10,c));
        vec.push_back(make_pair((d%10==0)?10:d%10,d));
        vec.push_back(make_pair((e%10==0)?10:e%10,e));
        sort(vec.begin(),vec.end());

        for(int i=4;i>=0;i--)
        {
         ans+=vec[i].second;
         if((10-vec[i].first)!=10 && i>0)
         ans+=10-vec[i].first;
        }





            cout<<ans<<"\n";
        
        return 0;
    }