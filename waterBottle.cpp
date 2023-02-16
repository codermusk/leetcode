#include<bits/stdc++.h>
using namespace std ;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
int Bottle , Exchange ; 
	cin>>Bottle>>Exchange ; 
	int sum , left = 0 ; 
	while(Bottle>0){
		sum+=Bottle ; 
		left+=Bottle ; 
		Bottle = left/Exchange ; 
		left%=10 ;
	}
	cout<<sum<<"/n"; 
}