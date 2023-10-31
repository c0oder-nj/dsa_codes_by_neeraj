#include <bits/stdc++.h>
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

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data for node: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // if data is not equal to -1
    Node *node = new Node(data);

    // creating left subtree of node using recursive call
    cout << "Enter the data to insert left at node " << node->data << endl;
    node->left = buildTree(node->left);

    // creating right subtree
    cout << "Enter the data to insert at right of node " << node->data << endl;
    node->right = buildTree(node->right);

    return node;
}

void preOrder(Node *root)
{
    // writing base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    preOrder(root->left);
    preOrder(root->right);
}

void levelOrder(Node *root)
{
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
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


void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{

    Node *root = NULL;
    root = buildTree(root);

    // preOrder(root);
    // cout << endl
    //      << "PRinting data in levelo ORder" << endl;
    // levelOrder(root);
    // levelOrderwithSep(root);



    // inOrder(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    // postOrder
    postOrder(root);

    return 0;
}