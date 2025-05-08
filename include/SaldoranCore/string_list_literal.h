#pragma once

#include <vector>
#include <string_view>
#include <cstddef>

namespace SaldoranCore {

class StringList {
public:
    std::vector<std::string_view> items;

    int indexOf(std::string_view key) const {
        for (size_t i = 0; i < items.size(); ++i)
            if (items[i] == key)
                return static_cast<int>(i);
        return -1;
    }

    std::string_view at(size_t index) const {
        return items.at(index);
    }

    std::size_t size() const {
        return items.size();
    }
};

inline StringList operator "" _l(const char* str, size_t) {
    StringList result;
    std::string_view sv(str);
    size_t start = 0;
    while (start < sv.size()) {
        size_t end = sv.find(',', start);
        if (end == std::string_view::npos) end = sv.size();
        result.items.emplace_back(sv.substr(start, end - start));
        start = end + 1;
    }
    return result;
}

} // namespace SaldoranCore