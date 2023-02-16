#include<bits/stdc++.h>
using namespace std ;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	vector<int> v ;
	int size  ; 
	cin>>size ; 
	for(int i = 0 ; i<size ; i++){
		int push ;
		cin>>push ; 
		v.push_back(push);
	}
	int maxFruits  =  0 ;
	map<int , int> mp ; 
	int left = 0 , right ; 
	for(right = 0 ; right<size ;right++ )
	{
		mp[v[right]]++ ; 
		if(mp.size()>2)
		{
			mp[v[left]]-- ; 
			if(mp[v[left]]==0)
				mp.erase(v[left]);
			left++ ;
		}
		maxFruits = max(maxFruits , right-left+1);
	}
	cout<<maxFruits<<"\n";
}