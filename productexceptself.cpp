#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
// #define write(auto val) cout<<val<<"\n"  
/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
// #define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
vll readV(int size) {vll v ; for(int i = 0 ; i<size ; i++){ll val ; cin>>val ; v.pb(val);} return v ;}
vi readVi(int size) {vi v ; for(int i = 0 ; i<size ; i++){ll val ; cin>>val ; v.pb(val);} return v ;}
void printVI(vi v){for(int i : v) cout<<i<<" "; }



/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


void solve(){
	  // int prod = 1 ; 
        // vector<int> vec ; 
        // for(int i = 0 ; i<nums.size() ; i++){
        //     prod =1 ;
        //     for(int j = 0 ; j<nums.size() ; j++){
        //           if(i!=j) 
        //           {
        //               prod*=nums[j] ;
        //           }
        //     }
        //     vec.push_back(prod) ;
        // }
    // return vec ;

    //optimized approach 


    // vector<int> prefix ; 
    // vector<int> suffix ; 
    // int pre = 1 ; 
    // for(int i = 0 ; i<nums.size() ; i++){
    //     prefix.push_back(pre) ;
    //     pre = pre*nums[i] ;
    //     cout<<pre<<" ";

    // }
    // reverse(nums.begin() , nums.end());
    // int suff= 1;
    // for(int i = 0 ; i<nums.size() ; i++){
    //     suffix.push_back(suff) ;
    //     suff*=nums[i] ;

    // }
    // reverse(suffix.begin() , suffix.end()) ; 
    // for(int i = 0 ; i<nums.size() ; i++){
    //     cout<<prefix[i]<<" "<<suffix[i]<<endl ;
    //    nums[i] = prefix[i]*suffix[i];

    // }
    // return nums ; 
	vi  nums ; 
	int size ; cin>>size ; 
	nums = readVi(size) ; 
	vector<int> ans(nums.size() , 1) ; 
ans[0] = 1 ;
int prod = 1;
for(int i = 1 ; i<nums.size() ; i++) 
{
    ans[i] = ans[i-1]*nums[i-1];

}
int right = 1 ; 
for(int i = nums.size()-1 ; i>=0 ; i--){
    ans[i]*=right ; 
    right*=nums[i] ; 
}
for(int i : ans) cout<<i<<" "; 
    }

	// yes();
	


int main()
{

	#ifndef ONLINE_JUDGE 
	freopen("input.txt" , "r" , stdin) ;
	freopen("output.txt" , "w" , stdout) ; 
	#endif



	
	solve();
	return 0;
}
