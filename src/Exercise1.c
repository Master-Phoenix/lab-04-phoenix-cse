/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int i, j, m;
	m = 1;
	for (i = 0; i < n + 1; i++){

		for(j = 0 ; j <= i ; j++){

			if (j == 0 || i == 0)
				m = 1;
			else
                m = m * (i - j + 1) / j;

			printf("%d ", m);
		}

		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
