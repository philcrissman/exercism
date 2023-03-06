#include "sieve.h"

#include <numeric>
#include <algorithm>
#include <iostream>

namespace sieve {

    std::vector<int> primes(int n) {
        // our range
        std::vector<int> p(n-1);
        std::iota(p.begin(), p.end(), 2);
        unsigned int i = 0;
        while(i < p.size()){
            if (p.at(i) == 0)
            {
                i++; continue;
            }
            else
            {
                int step = p.at(i);
                int k = i;
                // p2.push_back(p[k]);
                while (k < n)
                {
                    k += step;
                    if (k < n-1)
                        p[k] = 0;
                }
                i++;
            }
        }
        auto it = std::remove(p.begin(), p.end(), 0);
        p.erase(it, p.end());
        return p;
    }

} 