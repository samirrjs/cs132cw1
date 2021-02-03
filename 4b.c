#include <stdio.h>

//declaration of pascal function
int pascal(int, int);

int main()
{
	//prompts user to input which nth number in the fibonacci sequence they wish to find
	//stores the user input in a variable n
	int n = 0;
	printf("nth fibonacci number: \n");
	scanf("%d", &n);

	//displays result of formula given in coursework 4b through iteration
	//adds all the values to a variable called 'total' and displays it at the end
	int total = 0;
	for (int k = 0; k<=((n-1)/2); k++) {
		total += pascal(n-k-1, k);
	}
	printf("%d", total);
}

//n choose k function from 4a
int pascal(int n, int i){
	if(n == i || i == 0)
        return 1; 
    else
        return pascal(n-1, i-1) + pascal(n-1, i);
}

/*
Similarly to 4a, the user is prompted for a positive integer n for the nth term in the fibonacci sequence, 
and if a float is entered then the integer value of that float will be used by the program. If a non positive
integer is entered then the program returns 0. If a character is entered the program will terminate without running.

As stated in 4a, ints can store values up to 2,147,483,647 and so there will be a max user input value for n that this program can
handle before it begins to output false results.
*/