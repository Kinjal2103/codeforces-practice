//https://codeforces.com/contest/1311/problem/C
// Rating : 1300
//My initial approach howeber true gives TLE error as time complexity of O(n*m)
//Still little confused of the approach
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define pb push_back
#define pob pop_back
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define forl(i, a, b) for (long long i = (a); i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vi p(n+1);
        fori(i,0,m){
            int pos=0;
            cin>>pos;
            p[pos]++;
        }
        vi ans(26);
        fori(i,0,n){
            ans[s[i]-'a']+=p[i]+1;
        }
        fori(i,0,26){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
