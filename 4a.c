#include <stdio.h>

//declaration of the pascal function
int pascal(int, int);

int main()
{
	//prompts user for a value for n which signifies the row of pascal's triangle
	int n;
	printf("n row:");
	scanf("%d", &n);

	//loops through all values of n, and k in that row of pascal's triangle and prints them out
	printf("These are all the values in row %d: ", n);
	for (int k = 0; k<=n; k++){
		printf("%d ", pascal(n, k));
	}
}

//function called pascal that takes a value for n and k, and returns "n choose k" through recursion
int pascal(int n, int k){
	//base case
	if(n == k || k == 0)
        return 1;
    //uses the recursive formula to compute n choose k
    else
        return pascal(n-1, k-1) + pascal(n-1, k);
}

/* 
The code works as long as the user input stays within the right bounds. The program prompts the user
for an integer n for the row number. However, if the user enters a float the program will run for the
integer value of that float, and if the user enters a character the program will terminate without
running the rest of the code.

Furthermore, ints can store values up to 2,147,483,647 and so there will be a max user input value n that this program can
handle before it begins to output false results.
*/
