#include<bits/stdc++.h>
using namespace std;

class trieNode{
    public:
        char data;
        trieNode* children[26];
        bool isTerminal;

    trieNode(char ch){
        data = ch;
        isTerminal = false;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
    }


};

class Trie{
    public:
        trieNode* root; // only declare kiya use memory initialize nahi kri 

        Trie(){
            root = new trieNode('\0'); // initializing memory to root so that we can use it 
        }

        void insertUtil(trieNode* root,string word){
            // base case
            if(word.length() == 0){
                root->isTerminal = true;
                return;
            }

            // find index for the child node
            // assumption is all word char are capital in upper case
            int index = word[0] - 'A';
            trieNode* child;

            // check if char is alredy present as child or not
            if(root->children[index]!=NULL){
                // present
                child = root->children[index];
            }
            else{
                // absent -> create new child 
                child = new trieNode(word[0]);
                root->children[index] = child;
            }

            // recursive call for rest string
            insertUtil(child,word.substr(1));

        }

        void insertWord(string word){
            insertUtil(root,word);
        }

        bool searchUtil(trieNode* root,string word){
            // base case
            if(word.length() == 0){
                if(root->isTerminal){
                    return true;
                }
                else{
                    return false;
                }
            }

            // check if child is present or not as a root child
            int index= word[0] - 'A';
            trieNode* child;

            if(root->children[index]){
                child = root->children[index];
            }
            else{
                return false;
            }

            // recursive calls
            return searchUtil(child,word.substr(1));
        }

        bool searchWord(string word){
            return searchUtil(root,word);
        }

        void removeUtil(trieNode* root,string word){
            // base case 
            if(word.length() == 0){
                root->isTerminal = false;
                delete root;
                return;
            }

            // if word first char is present
            trieNode* child;
            int index = word[0] - 'A';
            if(root->children[index]){
                child = root->children[index];
            }

            // recursive call
            removeUtil(child,word.substr(1));
        }

        void removeWord(string word){
            if(searchWord(word)){
                removeUtil(root,word);
            }else{ 
                cout<<"Word "<<word<<" is not present in the trie"<<endl;
            }
        }
};

int main(){
    Trie* t = new Trie();
    t->insertWord("TIME");
    t->insertWord("NIRAJ");
    t->insertWord("ARM");
    t->insertWord("ARE");
    cout<<"Present or not -> "<<t->searchWord("ARE")<<endl;
    t->removeWord("ARE");
    cout<<"Present or not -> "<<t->searchWord("ARE")<<endl;
    cout<<"Present or not -> "<<t->searchWord("ARM")<<endl;
    // cout<<"Present or not ->"<<t->searchWord("TIME")<<endl;
    // cout<<"Present or not ->"<<t->searchWord("NIRAJ")<<endl;
    // cout<<"Present or not ->"<<t->searchWord("TIM")<<endl;
    return 0;
}