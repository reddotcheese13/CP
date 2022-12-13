struct BIT
{
    vector<ll>v;
    ll sz;
    BIT(ll n)
    {
        sz = n;
        v.assign(n+1,0);
    }
    void update(ll ind, ll val)
    {
        while(ind<=sz)
        {
            v[ind]+=val;
            ind+=(ind&(-ind));
        }
    }
    ll getsum(ll ind)
    {
        ll ans =0;
        while(ind>0ll)
        {
            ans+=v[ind];
            ind-=(ind&(-ind));
        }
        return ans;
    }
};
vector<ll>adj[200001];
ll wt[200001]={0};
 
ll counter=0;
ll k;
bool f=true;
ll dfs(ll v, ll par, ll mid)
{
    ll sum  = wt[v];
    vector<ll>vals;
    for(auto it:adj[v])
    {
        if(it!=par)
        {
           ll sz =  dfs(it,v,mid);
           vals.push_back(sz);
           sum+=sz;
        }
    }
    
    sort(vals.begin(),vals.end());
    while(sum>mid)
    {
        sum-=vals.back();
        counter++;
        vals.pop_back();
    }
    //cout<<v<<": "<<sum<<"\n";
    return sum;
}
