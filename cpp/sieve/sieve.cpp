#include "sieve.h"

#include <numeric>
#include <algorithm>

namespace sieve {

    std::vector<int> primes(int n) {
        // our range
        std::vector<int> p(n-1);
        std::iota(p.begin(), p.end(), 2);
        int i = 0;
        while(i < p.size()){
            if (p.at(i) == 0)
            {
                i++; continue;
            }
            else
            {
                int step = p.at(i);
                int k = i;
                while (k <= n)
                {
                    k += step;
                    p[k] = 0;
                }
            }
        }
        return p;
    }

}  // namespace sieve
