#include <iostream>
#include <no_strings_attached/string_trim.h>

int main() {
    std::cout << "Example program that trims strings.\n";
    std::cout << "Please enter a string:\n";

    std::string input;
    std::getline(std::cin, input);

    auto result = no_strings_attached::Trim(input);

    std::cout << "Your trimmed string: '" << result << "'\n";
}