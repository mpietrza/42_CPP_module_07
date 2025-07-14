#include <iostream>
#include "iter.hpp"

// A simple function to print an element
template <typename T>
void printElement(const T& elem) {
    std::cout << elem << " ";
}

// A function to increment an integer
void increment(int& n) {
    ++n;
}

// A function to convert a character to uppercase
void toUpper(char& c) {
    if (c >= 'a' && c <= 'z')
        c = c - 'a' + 'A';
}

// A template function to square a number
template <typename T>
void square(T& n) {
    n = n * n;
}

int main() {
    // Test 1: int array
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "=== Test 1: int array ===" << std::endl;
    std::cout << "Original:   ";
    iter(arr, len, printElement<int>);
    std::cout << std::endl;

    iter(arr, len, increment);

    std::cout << "Incremented:";
    std::cout << " ";
    iter(arr, len, printElement<int>);
    std::cout << std::endl;

    iter(arr, len, square<int>);
    std::cout << "Squared:    ";
    iter(arr, len, printElement<int>);
    std::cout << std::endl << std::endl;

    // Test 2: const char* array
    const char* words[] = {"hello", "world", "iter", "template"};
    size_t wordsLen = sizeof(words) / sizeof(words[0]);

    std::cout << "=== Test 2: const char* array ===" << std::endl;
    std::cout << "Words:      ";
    iter(words, wordsLen, printElement<const char*>);
    std::cout << std::endl << std::endl;

    // Test 3: double array
    double doubles[] = {1.1, 2.2, 3.3};
    size_t doublesLen = sizeof(doubles) / sizeof(doubles[0]);

    std::cout << "=== Test 3: double array ===" << std::endl;
    std::cout << "Original:   ";
    iter(doubles, doublesLen, printElement<double>);
    std::cout << std::endl;

    iter(doubles, doublesLen, square<double>);
    std::cout << "Squared:    ";
    iter(doubles, doublesLen, printElement<double>);
    std::cout << std::endl << std::endl;

    // Test 4: char array (toUpper)
    char chars[] = {'a', 'b', 'c', 'D', 'E'};
    size_t charsLen = sizeof(chars) / sizeof(chars[0]);

    std::cout << "=== Test 4: char array ===" << std::endl;
    std::cout << "Original:   ";
    iter(chars, charsLen, printElement<char>);
    std::cout << std::endl;

    iter(chars, charsLen, toUpper);
    std::cout << "Uppercase:  ";
    iter(chars, charsLen, printElement<char>);
    std::cout << std::endl << std::endl;

    // Test 5: empty array
    int emptyArr[0];
    std::cout << "=== Test 5: empty int array ===" << std::endl;
    std::cout << "Empty:      ";
    iter(emptyArr, 0, printElement<int>);
    std::cout << std::endl;

    return 0;
}