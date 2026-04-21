#include <iostream>
#include <no_strings_attached/string_split.h>

int main() {
    std::cout << "Example program that splits strings.\n";
    std::cout << "Please enter a string:\n";

    std::string input;
    std::getline(std::cin, input);

    auto parts = no_strings_attached::Split(input, " ");

    std::cout << "Your split string: ";
    for (const auto& part : parts) {
        std::cout << "'" << part << "' ";
    }
    std::cout << "\n";
}