#include <iostream>
#include <queue>
using namespace std;

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i=0;i<26;i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    public:
    TrieNode* root;

    Trie() {
        this->root = new TrieNode(' ');
    }

    void insert(string s) {
        TrieNode* n = root;
        for(int i=0;i<s.length();i++) {

            int index = tolower(s[i]) - 97;

            if(n->children[index]) {
                n = n->children[index];
            }
            else {
                n->children[index] = new TrieNode((char)tolower(s[i]));
                n = n->children[index];
            }

            if(i==s.length()-1) {
                n->isTerminal = true;
            }
        }
    }

    bool search(string s) {
        TrieNode* n = root;
        bool answer = true;
        for(int i=0;i<s.length();i++) {
            int index = tolower(s[i]) - 97;
            if(n->children[index]) {
                n = n->children[index];
            }
            else {
                answer = false;
                break;
            }
        }

        if(!n->isTerminal) {
            answer = false;
        }
        
        return answer;
    }

};