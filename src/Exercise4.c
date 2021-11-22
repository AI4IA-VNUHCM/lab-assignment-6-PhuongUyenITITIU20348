/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int i;
    int n = strlen(str);
    for(i = 0; i < n; i++){ 
        if(str[i] == ' '){
            int nBegin = i;
 
            if(str[i + 1] == ' '){
                nBegin = i + 1;
            }
 
            if(str[i + 1] == ' ' ||  i == 0 ||  i == n - 2){
                for(int j = nBegin; j < n - 1; j++){
                    char cTemp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = cTemp;
                }
                i--;
                n--;
            }
        }
    }
    str[n] = '\0';
    printf("%s ",str);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}