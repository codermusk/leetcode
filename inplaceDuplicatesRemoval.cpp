#include<bits/stdc++.h>
using namespace std ;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	vector<int> v ; 
	int size ; 
	cin>>size ; 
	for(int i = 0 ; i<size ; i++){
		int val ; 
		cin>>val ; 
		v.push_back(val) ;
	}

   map<int , int> mp ; 
   for(int i : v)
   	mp[i]++;
   
   int idx = 0 ;
   for(auto it = mp.begin() ; it!=mp.end() ; it++)
   {
   	int cnt = it->second>=2 ? 2 : it->second ; 
   	while(cnt--){
   		v[idx++] = it->first ; 
   	}
   }
cout<<idx ;
for(int i = 0  ; i < idx ; i++)
cout<<v[i]<<"";

}