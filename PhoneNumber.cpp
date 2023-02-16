#include<bits/stdc++.h>
using namespace std ; 




void helper(int index , string &temp , string dig , vector<string> ans  , map<char , string> data){
	if(temp.length() == dig.length() && temp!=""){
		ans.push_back(temp);
		return ;
	}
	if(index>=dig.length()) return ; 

	for(int i = 0 ; i<data[dig[index]].length() ; i++){
		temp.push_back(data[dig[index]][i]);
		helper(index+1 , temp , dig ,ans ,data);
		temp.pop_back();
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
	map<char , string> data ; 
	 data['2'] = "abc";
        data['3'] = "def";
        data['4'] = "ghi";
        data['5'] = "jkl";
        data['6'] = "mno";
        data['7'] = "pqrs";
        data['8'] = "tuv";
        data['9'] = "wxyz";

    string dataz ; 
    cout<<dataz;
    // filldata();
    cin>>dataz ; 
    string temp = "" ; 
    vector<string> ans ; 
    helper(0 , temp , dataz , ans , data);
   for(string a : ans)
   	cout<< a <<" " ; 
}