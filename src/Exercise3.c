/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Ex3(char *str){
    //Your codes here
        char word[20]; 
        char l[20], s[20], c;
        int i=0, j=0, tie=0;
        str[i - 1] = '\0';
        for (i = 0; i < strlen(str); i++)
        {
            while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i]))
            {
                word[j++] = str[i++];
            }
            if (j != 0)
            {
                word[j] = '\0';
                if (!tie)
                {
                    tie = !tie;
                    strcpy(l, word);
                    strcpy(s, word);
                }
                if (strlen(word) > strlen(l))
                {
                    strcpy(l, word);
                }
                if (strlen(word) < strlen(s))
                {
                    strcpy(s, word);
                }
                j = 0;
            }
        }
        printf("Shortest word: %s\n", s);
        printf("Longest word: %s",l);
}

int main(int argc, char *argv[]) {
    //testing variable, applying it to your algorithm for auto-evaluating
    char *testcase = argv[1];

    Ex3(testcase);

    return 0;
}