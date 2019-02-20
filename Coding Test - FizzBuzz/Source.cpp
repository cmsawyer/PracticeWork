/*
 * FizzBuzz
 *
 * Premise: A coding test put forward by Tom Scott.
 * The computer will count upwards, outputting 
 * differing lines depending on the current iteration.
 * For a multiple of 3, output Fizz.
 * For a multiple of 5, output Buzz.
 * Otherwise, output the iteration count.
 */

#include <iostream>
#include <string>

int main() {

	// COUNT_TO - COUNT_FROM >= 0 must be True
	const int COUNT_FROM = 1;
	const int COUNT_TO = 100;

	for (int i = COUNT_FROM; i <= COUNT_TO; i++) {
		std::string say = "";
		if (i % 3 == 0) say += "Fizz";
		if (i % 5 == 0) say += "Buzz";
		if (say == "") say = std::to_string(i);
		std::cout << say << std::endl;
	}

	system("pause");
	return 0;
}