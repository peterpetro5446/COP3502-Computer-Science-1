#include <stdio.h>
#include <string.h>

#define LEN 10000
#define MAX(a,b) (((a)<(b)) ? (b) : (a))

int main() {
    char seq1[LEN+1];
    char seq2[LEN+1];

    // Read the sequences
    scanf("%s", seq1);
    scanf("%s", seq2);
    //printf("\n\nDEBUG: [%s]\n", seq1);
    //printf("\n\nDEBUG: [%s]\n", seq2);

    int max_length = 0;
    int start1 = 0;
    int start2 = 0;

    // Try all the starts in the first sequence
    for (int st1 = 0; seq1[st1]; st1++) {
        for (int st2 = 0; seq2[st2]; st2++) {
            int pos = 0;
            while (seq1[st1 + pos] && seq2[st2 + pos] && seq1[st1 + pos] == seq2[st2 + pos]) {
                pos++;
            }
            if (pos > max_length) {
                max_length = pos;
                start1 = st1;
                start2 = st2;
            }
        }
    }


    if (max_length > 0) {
        char longest_substring[LEN + 1];
        strncpy(longest_substring, &seq1[start1], max_length);
        longest_substring[max_length] = '\0';
        printf("\n\nLongest contiguous common subsequence: [%s]\n", longest_substring);
    } 
    

    return 0;
}