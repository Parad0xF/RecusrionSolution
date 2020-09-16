/** Radu Enachi Lab1 */

#include <iostream>	
#include <string>	


/** Computes the factorial of the nonnegative integers n 
@pre the input must be greather then 0 
@post None
@return The factorial of n; n is unchange*/

int factorial(int number) {

	if (number == 0) // Defining the base case; if number  == 0 then the result is 1
		return 1;
	else
		return number * factorial(number - 1); // Calling the factorial recursivle, number * (number -1) * (number -2) 
}


/** Computes the summation of the nonnegative integers n
@pre the input must be greather then 0
@post None
@return The summation of n; n is unchange*/

int summation(int number) {

	if (number == 0) // Defining the base case; if number == 0 then the result is 0
		return 0;
	else
		return number + summation(number - 1); // Calling the summation recursivle, number + (number -1) + (number -2) 
}

void tower_of_hanoi(int n, char start, char middle, char end) {

	if (n == 0)
		return;
	else {
		tower_of_hanoi(n - 1, start, end, middle);
		std::cout << "Move pole from " << start << " to " << end << std::endl;
		tower_of_hanoi(n - 1, middle, start, end);
	}
}


int main() {

	typedef int Intteg;// defining the generic variable

	Intteg nr;

	std::cout << "Please enter an integer x > 0, if the x < 0, program will quit" << std::endl;
	std::cin >> nr;  std::cout<< std::endl;

	if (nr > 0) {
		std::cout << "The factorial of the " << nr << " is: " << factorial(nr) << std::endl;
	}
	else {
		exit(1);
	}

	std::cout << "Please enter an integer x > 0, if the x < 0, program will quit" << std::endl;
	std::cin >> nr;  std::cout << std::endl;

	if (nr > 0) {
		std::cout << "The summation of the " << nr << " is: " << summation(nr) << std::endl;
	}
	else {
		exit(1);
	}

	std::cout << "Please enter an integer x > 0, if the x < 0, program will quit" << std::endl;
	std::cin >> nr;  std::cout << std::endl;

	if (nr > 0) {
		tower_of_hanoi(nr, 'A', 'B', 'C');
		tower_of_hanoi(nr, 'A', 'B', 'C');
	}
	else {
		exit(1);
	}

	system("PAUSE");

	return 0;
}