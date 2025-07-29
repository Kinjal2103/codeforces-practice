// Problem: https://codeforces.com/contest/1311/problem/B
// Rating:1200
// Mistake: Thought of checking maximum and minimum ans seeing if they fit at the right place but figured that not the right approach
// Learned: We actually swap the elements and then check

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
#define pob pop_backs
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define forl(i, a, b) for (long long i = (a); i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int is_sorted(vi a,int n){
    int sorted=1;
    fori(i,0,n-1){
        if(a[i]>a[i+1]){
            sorted=0;
            break;
        }
    }
    return sorted;
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        vi p(n);
        fori(i,0,m){
            int pos;
            cin>>pos;
            p[pos-1]=1;
        }
        while(true){
            int ok=0;
            fori(i,0,n){
                if(p[i] && a[i]>a[i+1]){
                    ok=1;
                    swap(a[i],a[i+1]);
                }
            }
            if(!ok) break;
        }
        
        if(is_sorted(a,n)) yes;
        else no;
    }
}