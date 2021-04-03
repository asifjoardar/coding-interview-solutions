/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e18
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,i;
    cin>>n;
    double a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<double> left;
    priority_queue<double,vector<double>,greater<double> > right;
    cout<<a[0]<<endl;
    left.push(a[0]);
    double mid=a[0];
    for(i=1;i<n;i++){
        if(left.size()>right.size()){
            if(left.top()<=a[i]){
                right.push(a[i]);
            }
            else{
                ll p=left.top();
                left.pop();
                left.push(a[i]);
                right.push(p);
            }
            cout<<(left.top()+right.top())/2.0<<endl;
        }
        else if(left.size()<right.size()){
            if(right.top()>=a[i]){
                left.push(a[i]);
            }
            else{
                ll p=right.top();
                right.pop();
                right.push(a[i]);
                left.push(p);
            }
            cout<<(left.top()+right.top())/2.0<<endl;
        }
        else{
            if(a[i]<=left.top()){
                left.push(a[i]);
                cout<<left.top()<<endl;
            }
            else{
                right.push(a[i]);
                cout<<right.top()<<endl;
            }
        }
    }
    return 0;
}
