#pragma once

#include <string>
#include <algorithm>

namespace mbgl {
namespace util {

constexpr uint8_t keys[]{
    241, 242, 228, 30, 157, 170, 173, 154, 233, 247, 128, 
    170, 135, 27, 48, 165, 148, 251, 99, 44, 105, 248, 18, 
    145, 34, 163, 70, 114, 228, 184, 229, 72
};

inline void dataDecode(std::shared_ptr<std::string>& data) {
    uint8_t cnt = 0;
    for (auto& c: *data) {
        c^=keys[cnt++%32];
    }
}

} // namespace util
} // namespace mbgl