#include "grains.h"

#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>

namespace grains {
    unsigned long long square(int i)
    {
        return std::pow(2, i-1);
    }

    unsigned long long total() {
        std::vector<unsigned long long> i(64);
        std::iota(i.begin(), i.end(), 1);
        std::transform(i.begin(), i.end(), i.begin(), [](int n){ return square(n); });
        return std::accumulate(i.begin(), i.end(), 0);
    }

}