#include <vector>
#include <string>
#include "string_split.h"

namespace no_strings_attached {

std::vector<std::string> Split(const std::string& str,
                               const std::string& delimiter) {
    return Split(str, delimiter, -1);
}

std::vector<std::string> Split(const std::string& str,
                               const std::string& delimiter,
                               int number_of_chunks_to_keep) {
    std::vector<std::string> result;

    size_t start = 0;
    size_t end;
    int chunks_count = 0;

    while ((end = str.find(delimiter, start)) != std::string::npos) {
        if (number_of_chunks_to_keep > 0 && chunks_count >= number_of_chunks_to_keep - 1) {
            result.push_back(str.substr(start));
            return result;
        }
        result.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        chunks_count++;
    }

    result.push_back(str.substr(start));
    return result;
}

}