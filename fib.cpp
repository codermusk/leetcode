#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std ; 
typedef vector<int> vInt ;

int fib(int a , vInt &dp  ){
	if(a==1 || a==2)
		return 1 ; 
	if(dp[a]!=-1)
		return dp[a] ;
	return dp[a] = fib(a-1, dp)+fib(a-2,dp);
}

int main (){


	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	vInt dp (100,-1) ; 

	#endif
	int a ; 
	cin>>a ; 
	int ans = fib(a,dp) ; 
	cout<<ans<<"\n" ;



   
    return 0 ;
}   