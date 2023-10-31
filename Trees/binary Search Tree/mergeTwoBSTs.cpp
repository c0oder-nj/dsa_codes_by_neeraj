/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

#include<bits/stdc++.h>
using namespace std;

class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


void findInorder(TreeNode* root,vector<int> &in){
    stack<TreeNode*> s;
    while(root != NULL || !s.empty()){
        while(root!=NULL){
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();
        in.push_back(root->data);
        root = root->right;
    }
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> inorder1;
    vector<int> inorder2;
    findInorder(root1,inorder1);
    findInorder(root2, inorder2);
    
    // printing inorder 1
    cout<<"Inorder 1 is "<<endl;
    for(auto ele:inorder1){
        cout<<ele<<" ";
    }

    cout<<endl<<endl<<" Inorder 2 is "<<endl;

    for(auto ele:inorder2){
        cout<<ele<<" ";
    }

    // merge two sorted array using two pointer approach
    int i=0;
    int j=0;

    vector<int> res(inorder1.size()+inorder2.size());
    int k=0;

    while(i<inorder1.size() && j<inorder2.size()){
        if(inorder1[i]<inorder2[j]){
            res[k] = inorder1[i];
            i++;k++;
        }
        else{
            res[k]=inorder2[j];
            k++;j++;
        }
    }

    while(i<inorder1.size()){
        res[k] = inorder1[i];
        i++;k++;
    }

    while(j<inorder2.size()){
        res[k] = inorder2[j];
        j++;k++;
    }

    return res;
}


TreeNode* createBST(TreeNode* &root,int data){
    // base case 
    if(root == NULL){ // first node to create
        root = new TreeNode(data);
        // cout<<"Root node val is "<<root->data<<endl;
        return root;
    }
    if(data < root->data){
        // cout<<"SEt kra root "<<root->data<<" ka left "<<data<<endl;
        root->left = createBST(root->left,data);
    }
    else{
        // cout<<"SEt kra root "<<root->data<<" ka right"<<data<<endl;
        root->right = createBST(root->right,data);
    }

    return root;
}

void takeInput(TreeNode* &root){
    cout<<"Enter data seperated by space to create BST the execution stops when data is -1"<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root = createBST(root,data);
        cin>>data;
    }
}



int main(){

    TreeNode* root1 = NULL;
    TreeNode* root2 = NULL;

    takeInput(root1);
    takeInput(root2);

    vector<int> op = mergeBST(root1,root2);
    // for(auto ele:op){
    //     cout<<ele<<" ";
    // }

    return 0;
}