#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

// base case when string is empty or string has only one caracter that is N which stands for null
    // any input in string is like understand with example
    // 1 2 3 4 5 N N 
    /*          1
              /  \
             2    3      3 left is null and right is null
           /  \
          4    5
       */

Node* buildTreeusingStr(string s){
    // edge case
    if(s.length() == 0 || s[0] == 'N'){ // jab string 0 length ki ho ya root hi null dede in that case
        return NULL; 
    }

    istringstream iss(s); // 1 2 3 4 5 N N  for understanding s ka kuchh aisa input hoga
    vector<string> input_vec;
    string temp;
    while(iss>>temp){
        input_vec.push_back(temp);
    }

    // creating root node
    Node* root = new Node(stoi(input_vec[0]));

    queue<Node*> q;
    q.push(root);

    int i=1; // since one element is already inserted in the queue

    while(!q.empty() && i<input_vec.size()){
        Node* curr = q.front();
        q.pop();

        // check for the left child
        if(input_vec[i]!="N"){
            curr->left = new Node(stoi(input_vec[i]));
            q.push(curr->left);
        }
        i++; // bahar isliye kyuki agar 'N" aayega toh bhi i toh badhan pdega na

        if(i>=input_vec.size()){
            break;
        }

        // check for right child
        if(input_vec[i]!="N"){
            curr->right = new Node(stoi(input_vec[i]));
            q.push(curr->right);
        }
        i++;
    }

    return root;

}


void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    // since ek node dal gaya ab seperator daal do
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){ // front null aa gaya or abhi bhi queue empty nahi hai menas front ke pehle jo node tha uske childresn queue me abhi bhi exist krte hai toh unke baad vo level bhi end ho jayega toh uske baad push krdo null as a seperator
            q.push(NULL);
            }
        }else{
            cout<<front->data<<" ";

            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        
    }
}

bool findPath(Node* root,vector<int> &ans,int x){
    if(root == NULL){
        return false;
    }

    // put current Node data into the queue
    ans.push_back(root->data);

    if(root->data == x){
        return true;
    }

    bool islefthaspath = findPath(root->left,ans,x);
    bool isrighthaspah = findPath(root->right,ans,x);

    if(islefthaspath || isrighthaspah){
        return true;
    }else{
        ans.pop_back();
        return false;
    }


}

int main(){
    
    string s;
    cout<<"Enter your string to create tree: ";
    getline(cin,s);


    Node* root = buildTreeusingStr(s);
    levelOrder(root);

    vector<int> ans;
    int x;
    cin>>x;

    findPath(root,ans,x);
    

    return 0;
}