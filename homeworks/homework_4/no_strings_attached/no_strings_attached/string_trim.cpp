#include <string>
#include "string_trim.h"

namespace no_strings_attached {

std::string Trim(const std::string& str,
                 char char_to_trim,
                 Side side) {
    size_t start = 0;
    size_t end = str.size();

    if (side == Side::kLeft || side == Side::kBoth) {
        while (start < str.size() && str[start] == char_to_trim) {
            start++;
        }
    }

    if (side == Side::kRight || side == Side::kBoth) {
        while (end > start && str[end - 1] == char_to_trim) {
            end--;
        }
    }

    return str.substr(start, end - start);
}

std::string Trim(const std::string& str) {
    return Trim(str, ' ', Side::kBoth);
}

}