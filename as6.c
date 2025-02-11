/* COP 3502C Programming Assignment 6
This program is written by: Peter Petro */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct trie{
    int isWord; // flag. use as boolean 0 or 1
    int nodeFreq;   // how many times this string has been added
    int sumPreFreq; // including itself how much strings have this prefix
    int maxChild;   // highest among children
    trie* children[26]; // 26 letters in alphabet
}trie;

// declaration of functions
trie* init();
void insert(trie* tree, char word[], int k);
int search(trie* tree, char word[], int k) ;
void printAll(trie* tree, char cur[]) ;
trie* del(trie* root, char key[], int depth);
int isEmpty(trie* root);
void freeDictionary(trie* tree);

void insert(trie* tree, char word[], int k){
    //type 1 command || ensure update if already exists instead of duplicate.

}
int numWordsWithPrefix(trie* root, char* prefix) {
int i, len = strlen(prefix);
for (i=0; i < len; i++)
if(root->children[prefix[i]-'a'] == NULL)
return 0;
root = root->children[prefix[i]-'a'];
return root->numwords;
}

int main() {
// positive integer that specifies num commands;
int n; 
// insert 1 s f
// s is string      f is frequency positive int
// query  2 p
// lower case so use tolower p is prefix











// output
// unrecognized prefix


return 0;
}
trie* init() {
// Create the struct, not a word.
trie* myTree = malloc(sizeof(trie));
myTree->isWord = 0;
// Set each pointer to NULLL.
int i;
for (i=0; i<26; i++) myTree->next[i] = NULL; // for loop to initalize null to every char node.
// Return a pointer to the new root.
return myTree;
}