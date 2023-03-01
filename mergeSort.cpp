#include<iostream> 
using namespace std ; 
#include<bits/stdc++.h>
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin) ; 
	freopen("output.txt" , "w" , stdout) ; 
	#endif

	
	int size ; 
	cin>> size ; 
	vector<int> vec (-1 , size);
	for(auto &v : vec ) {cin>>v}; 
    sort(vec , 0 , size-1) ; 

}

void sort(vector<int> &vec , int l , int r) {
	if(l<r){
		int mid = l+(r-l)/2 ; 
		sort(vec  , l , m) ; 
		sort(vec , mid+1 , r) ; 
		merge(vec , l , m , r) ;


	}
}

void merge(vector<int> &vec , int l , int m , int r){
	int i , j , k , ls , rs ; 
	ls = m-l+1 ; 
	rs = r-m ; 
	int ltmp[ls] , rtmp[rs] ; 
	for(int i = 0 ; i<ls ; i++){
        ltmp[i]  = nums[l+i] ; 
	}
	for(int j = 0 ; j<rs ; j++){
		rtmp[j] = nums[m+1+j] ; 
	}
	i = 0 , j = 0 , k = l ;

	while(i<ls && j<rs){
		if(ltmp[i]<=rtmp[j]){
			nums[k] = ltmp[i++];
		}
		else{
			nums[k] = rtmp[j++];
		}
		k++;
	}
	while(i<ls){
		nums[k++] = ltmp[i++]; 
	}
	while(j<rs){
		nums[k++] = rtmp[j++];
	}

	
}


