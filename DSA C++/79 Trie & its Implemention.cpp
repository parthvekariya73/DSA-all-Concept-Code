#include<iostream>
#include<string.h>
using namespace std;


class TrieNode {
    public:
        char data;
        TrieNode* childern[26];
        bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i=0; i<26; i++) {
            childern[i] = NULL;
        }
        isTerminal = false;
    }
};


class Trie{
    public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertUtil(TrieNode* root, string word) {
        // base case
        if(word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = word[0] = 'A';
        TrieNode* child;
        
        // present
        if( root->childern[index] != NULL) {
            child = root->childern[index];
        }else{
            // absent
            child = new TrieNode(word[0]);
            root->childern[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));

    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        // base case
        if(word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->childern[index] != NULL) {
            child = root->childern[index];
        }else{
            // absent
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word); 
    }

    bool isempty(TrieNode* root) {
        for(int i=0; i<26; i++) {
            if(root->childern[i]) {
                return false;
            }
        }
        return true;
    }

    TrieNode* remove(string key, int depth=0) {
        if(!root) {
            return NULL;
        }

        if(depth == key.size()) {
            if(root->isTerminal) {
                root->isTerminal = false;
            }
            if(isempty(root)) {
                delete (root);
                root = NULL;
            }
        }
        return root;
    }

};


int main()
{

    Trie* t = new Trie();
    t->insertWord("ABCD");

    (t->searchWord("ABCD")) ? cout << "Present\n" : cout << "Absent\n";

    (t->remove("A")) ? cout << "yes\n" : cout << "no\n";




    return 0;
}