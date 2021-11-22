/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	int thsand,hdred,ty,teen;
	if (n > 9999) printf("TRY AGAIN");
	else
	 {
	if (n >= 1000) {
		thsand = n/1000;
		Ex1(thsand);
		printf(" thousand ");
		}
		 else thsand = 0;

	if (n >= 100) {
		hdred = (n-thsand*1000)/100;
		Ex1(hdred);
		printf (" hundred ");
		} 
		else hdred = 0;

	
	if (n >= 10) {
		ty = (n-thsand*1000-hdred*100)/10;
		if ((n-thsand*1000-hdred*100) >= 20 || ty == 0) {
		switch(ty) {
		case 9: 
			printf("ninty ");
			break;
		case 8: 
			printf("eighty ");
			break;
		case 7: 
			printf("seventy ");
			break;
		case 6: 
			printf("sixty ");
			break;
		case 5: 
			printf("fifty ");
			break;
		case 4: 
			printf("four ");
			break;
		case 3: 
			printf("thirty ");
			break;
		case 2:
			printf("twenty ");
			break;
		}
		teen = n-1000*thsand-100*hdred-ty*10;
		Ex1(teen);

		} else if (ty== 1) {
			ty = (n-thsand*1000-hdred*100);
			switch(ty) {
				case 10:
					printf("ten");
					break;
				case 11:
					printf("eleven");
					break;
				case 12:
					printf("twelve");
					break;
				case 13:
					printf("thirteen");
					break;
				case 14:
					printf("fourteen");
					break;
				case 15:
					printf("fifteen ");
					break;
				case 16:
					printf("sixteen");
					break;
				case 17:
					printf("seventeen");
					break;
				case 18:
					printf("eighteen");
					break;
				case 19:
					printf("ninteen");
					break;
			}
		}
	}
	
	switch(n) {
		case 9: 
			printf("nine");
			break;
		case 8: 
			printf("eight");
			break;
		case 7: 
			printf("seven");
			break;
		case 6: 
			printf("six");
			break;
		case 5: 
			printf("five");
			break;
		case 4: 
			printf("four");
			break;
		case 3: 
			printf("three");
			break;
		case 2:
			printf("two");
			break;
		case 1: 
			printf("one");
			break;
		}	
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
