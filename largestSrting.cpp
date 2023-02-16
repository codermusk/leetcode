#include<bits/stdc++.h>
using namespace std ;

bool cmp (string &a , string &b){
	return a+b>b+a ; 
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif



	int size ;
	cin>>size ; 
	vector<int> v ; 
	for(int i = 0 ; i<size ; ++i){
		int val ; 
		cin>>val ;
		v.push_back(val) ; 
	}


	string ans = ""; 

	vector<string> s ; 
	for(int i = 0 ; i <size ; i++){
		s.push_back(to_string(v[i]));
	}
	sort(s.begin() , s.end() , cmp) ; 


	if(s[0] =="0") cout<<"0"; 
	for(auto &it : s){
		ans+=it ;
	} 
	cout<<ans<<endl;

}