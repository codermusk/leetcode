#include<bits/stdc++.h> 
using namespace std ; 
int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	char c ; 
	c = '9' ;
	cout<<c-'0' ; 

}  



///the mistake which you are doing in tree is that during level order treaversal or bfs first mention the q size then do treaversal 
