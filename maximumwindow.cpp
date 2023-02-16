#include<bits/stdc++.h> 
using namespace std ; 
int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

vector<int>vec ; 
deque<int> dq  ; 
for(int i = 0 ; i<elements.size() ; i++){
	if(!dq.empty() && dq.front()==i-k) dq.pop_front() ; 
	while(!dq.empty() && elements[dq.back()]<elements[i]) dq.pop_back() ;
	dq.push_back(i) ; 
	if(i>=k-1) ans.push_back(nums[dq.front()]);
}



}