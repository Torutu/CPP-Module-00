#include <iostream>

/**
 * @brief Entry point for the program.
 *
 * If no arguments are provided, this function will print a default message.
 * Otherwise, it will loop through each argument and convert it to uppercase.
 * A space is added between each argument.
 *
 * @param argc The number of command line arguments.
 * @param argv The array of command line arguments.
 * @return 0 if successful, non-zero if an error occurs.
 */
int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	} else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j] != '\0'; j++) {
				std::cout << (char)std::toupper(argv[i][j]);
			}
			if (i < argc - 1) {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
