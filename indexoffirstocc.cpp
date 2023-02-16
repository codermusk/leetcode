#include<bits/stdc++.h>
using namespace std ;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
string a ; 
cin>>a ; 
string b ; 
cin>> b ; 
a.find(b)==string::npos ? cout<<-1<<"\n" : cout<<a.find(b)<<"\n";
} 