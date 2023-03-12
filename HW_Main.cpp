#include <iostream>
#include <string>
#include <algorithm>

template <typename T>
void swapArray(T* arr, int i, int j) {
	T temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main() {
	std::cout << "How many elements do you want in the array? ";
	int n;
	std::cin >> n;

	/*Create an array of sort type string with n elements*/
	std::string* arr = new std::string[n];

	/*n strings from the user, trim them*/
	std::cin.ignore(); //Ignore newline char after n
	for (int i = 0; i < n; i++) {
		std::cout << "Enter string number" << i + 1 << ": ";
		std::getline(std::cin, arr[i]);
		arr[i].erase(0, arr[i].find_first_not_of(" \t\r\n"));
		arr[i].erase(arr[i].find_last_not_of(" \t\r\n") + 1);
	}

	/*Sort alphabetically*/
	std::sort(arr, arr + n);

	/*Print sorted array*/
	std::cout << "Here is your sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}

	/*Swap elements*/
	swapArray(arr, 1, 3);

	/*Print swapped array*/
	std::cout << "Swapped Array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}

	return 0;
}