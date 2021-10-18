/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n){
	//Your codes here
	int i;
	for ( i=0;i<argc-1;i++){
		for (int j=i;j<argc;j++){
			if (testcase[i] % 2 ==0){
				if (testcase[i] <= testcase[j]){
					int c=testcase[i];
					testcase[i] =testcase[j];
					testcase[j] =c;
				}
			}
		}
			
	}
	for (i=0;i<argc-1;i++){	
			if ( testcase[i] % 2!=0){
				if( testcase[i] > testcase[i+1]){
					int c=testcase[i];
					testcase[i]=testcase[i+1];
					testcase[i+1]=c;
				}
			}	
	}
	for (i=0;i<argc;i++){
		printf(" %d ", testcase[i]);
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex2(testcase, argc);
	
	return 0;
}
