#include <bits/stdc++.h> 
using namespace std;

string replaceSpaces(string &str){
	// Write your code here.
	stringstream ss(str);
	string word;

	string result;
	vector<string> v;

	while(ss>>word){
		v.push_back(word);
	}

    for(auto ele:v){
        cout<<ele<<" ";
    }cout<<endl;

	for(int i=0; i<v.size(); i++){
		if(i==v.size()-1){
			result += v[i];
		}else{
			result += v[i];
			result += "@40";
		}
	}
	
	return result;
}

int main(){
    string s;
    getline(cin,s);

    cout<<replaceSpaces(s)<<endl;
}