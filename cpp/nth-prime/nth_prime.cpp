#include "nth_prime.h"
#include <algorithm>
#include <numeric>
#include <iostream>
#include <stdexcept>


namespace nth_prime {
    long long nth(long unsigned int n)
    {
        if (n == 0)
            throw std::domain_error("We can't find the zeroeth prime, that is not a thing");
        std::vector<long long> primes {2,3,5};
        long long p = nth_prime(n, primes);
        return p;
    }

    long long nth_prime(long unsigned int n, std::vector<long long> primes) {
        if (n <= primes.size()) {
            return primes[n-1];
        }
        else
        {
            long long unsigned int max = std::accumulate(primes.begin(), primes.end(), 1, std::multiplies<long long>());
            for(long long unsigned int i = primes.back(); i <= max; i++){
                bool b = std::all_of(primes.begin(), primes.end(), [i](long long p){ return i % p != 0;});
                // if i was not evenly divisible by any of the primes we've found so far,
                // then i must be prime. We'll add it to primes and see if we've reached our target size.
                if (b) 
                {
                    primes.push_back(i);
                    if (n <= primes.size())
                        return i;
                }
            }
            return nth_prime(n, primes);
        }
    }

}
