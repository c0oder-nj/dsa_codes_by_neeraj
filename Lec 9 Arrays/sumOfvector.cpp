#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector<int> v(size);
    int n = size;
    int ele;
    while(n--){
        cin>>ele;
        v.push_back(ele);
    }

    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    return 0;
}