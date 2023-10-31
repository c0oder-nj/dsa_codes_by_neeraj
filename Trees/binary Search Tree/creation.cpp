#include<bits/stdc++.h>
using namespace std;

// class for a tree
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

Node* createBST(Node* &root,int data){
    // base case 
    if(root == NULL){ // first node to create
        root = new Node(data);
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

void takeInput(Node* &root){
    cout<<"Enter data seperated by space to create BST the execution stops when data is -1"<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root = createBST(root,data);
        cin>>data;
    }
}

void levelOrder(Node* root){
    // edge case
    if(root == NULL){
        cout<<"You have NO tree to print"<<endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } 
        // ab smjh aa gaya achhe se ki if ke baad else nahi lgagoe toh if me chij likhi hai vo hone ke baad baki jo code likha hai vo bhi chal jayega toh ye temp node ke liye bhi chal jayega or exception de dega 
        else{
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


void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* findPred(Node* root){
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

Node* deleteFromBST(Node* root,int val){
    // base case 
    if(root == NULL){ // jab apko val milegi hi nahi jo apko delete krni hai 
        return NULL;
    }

    if(root -> data == val){
        // deletion ka logic | node mil gaya jo delet krna hai now 3 cases

        // node has 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // node has 1 chiled
        // two cases left or right child
        if(root -> left == NULL && root -> right!= NULL){ // left NULL and right NOt NULL
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // in case of right NULL and left has data
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // node has 2 child
        if(root -> left != NULL && root -> right != NULL){
            int maxi = findPred(root->left)->data;
            root->data = maxi;
            root->left = deleteFromBST(root->left,maxi);
        }

    }
    else if(root -> data > val){
        root->left = deleteFromBST(root->left,val);
    }
    else{
        root-> right = deleteFromBST(root->right,val);
    }
    return root;
}

void iterativeInorder(Node* root,vector<int> &in){
    Node* curr = root;
    stack<Node*> s;

    while(curr!=NULL || !s.empty()){
        
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        in.push_back(curr->data);

        curr = curr->right;

    }
}

int main(){

    Node* root = NULL;
    takeInput(root);
    // inorder(root);

    // cout<<endl<<endl;
    // levelOrder(root);
    cout<<endl<<endl;
    // root = deleteFromBST(root,100);
    // levelOrder(root);
    vector<int> in;
    iterativeInorder(root,in);
    for(auto ele:in){
        cout<<ele<<" ";
    }


    return 0;
}