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



void createDLLusingBST(TreeNode* root,TreeNode* &head){
    // base case
    if(root == NULL){
        return ;
    }

    createDLLusingBST(root->right, head);
    
    root->right = head;
    
    if(head!=NULL){
        head->left = root;
    }
    
    // update head
    head = root;

    createDLLusingBST(root->left, head);
}

TreeNode* mergeLinkedList(TreeNode* head1,TreeNode* head2){
    TreeNode* head=NULL;
    TreeNode* tail=NULL;
    
    // ditto same as merge two sorted arrays using double pointer but insted of pointer variables we are changing links here :)
    while(head1!=NULL && head1!=NULL){
        if(head1->data < head2->data){
            
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                // linked list me data pehle se exist krta hai 
                // in that case we do insert at tail
                tail->right = head1;
                head1->left = tail;
                tail= head1;
                head1=head1->right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else{
                // linked list me data pehle se exist krta hai 
                // in that case we do insert at tail
                tail->right = head2;
                head2->left = tail;
                tail= head2;
                head2=head2->right;
            }
        }
    }

    while(head1!=NULL){
        tail->right=head1;
        head1->left=tail;
        tail=head1;
        head1=head1->right;
    }

    while(head2!=NULL){
        tail->right = head2;
        head2->left = tail;
        tail= head2;
        head2=head2->right;
    }
    return head;
}


int countNode(TreeNode* head){
    int cnt=0;
    while(head!=NULL){
        head = head->right;
        cnt++;
    }
    return cnt;
}

TreeNode* sortedLLToBST(TreeNode* head,int n){
    // base case
    if(n<=0 || head==NULL){
        return NULL;
    }

    TreeNode* left = sortedLLToBST(head->left, n/2);
    TreeNode* root = head;
    root->left = left;
    head = head->right;
    
    TreeNode* right = sortedLLToBST(head, n-n/2-1);
    root->right=right;
    
    return root;
}

void inorder(TreeNode* root,vector<int> &in){
    if(root == NULL){
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}


vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    
    // step 1 -> created two sorted linked list 
    TreeNode* head1 = NULL;
    createDLLusingBST(root1, head1);

    TreeNode* head2 = NULL;
    createDLLusingBST(root2, head2);
    
    // step 2 -> merging two sorted linked list
    TreeNode* head = mergeLinkedList(head1,head2);

    // step 3 -> creating BST
    // counting Number of Node 
    int n = countNode(head);
    TreeNode* root = sortedLLToBST(head, n);
    vector<int> ans;
    inorder(root, ans);
    return ans; 
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



    return 0;
}