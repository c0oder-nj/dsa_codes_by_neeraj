#include <bits/stdc++.h> 
using namespace std;

void solve(string str,int index,string output,vector<string>& ans){
	// base case
	// when index reaches out of the string length
	if(index>=str.length()){
		ans.push_back(output);
		return;
	}


	// exclude call
	solve(str,index+1,output,ans);


	// include call
	char ch = str[index];
	output.push_back(ch);
	solve(str,index+1,output,ans);
}
vector<string> subsequences(string str){
	
	// Write your code here

	// I solved this using recursive approach
	// so first what should I need to return 
	vector<string> ans;
	int index=0;
	string output="";
	
	solve(str,index,output,ans);

	return ans;
	
}

int main(){

    vector<string> vs = subsequences("abc");
    vs.erase(vs.begin());
    for(auto ele:vs){
        cout<<ele<<" ";
    }
    return 0;
}
