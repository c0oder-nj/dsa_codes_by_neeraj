#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderwithSep(Node *root)
{
    queue<Node *> q;
    q.push(root); // since root sirf ek hi hota hai toh level 0 end ho gai so push seperator that is NULL
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void buildTreebyLevelOrder(Node* &root){
    queue<Node*> q;
    int data;
    cout<<"Enter the data for root Node: ";
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the data to insert at left for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the data to insert at right for "<<temp->data<<endl;
        int rightData;
        cin>> rightData;
        if(rightData!=-1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
        
    }
}

int main(){
    Node* root = NULL;
    buildTreebyLevelOrder(root);
    levelOrderwithSep(root);
    return 0;
}