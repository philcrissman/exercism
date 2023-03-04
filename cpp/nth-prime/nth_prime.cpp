#include "nth_prime.h"
#include <algorithm>
#include <numeric>
#include <stdexcept>


namespace nth_prime {
    long long nth(long unsigned int n)
    {
        // nth(0) is expected to throw std::domain_error
        if (n == 0)
            throw std::domain_error("We can't find the zeroeth prime, that is not a thing");
        // we'll seed this with the first prime
        std::vector<long long> primes {2};
        primes.reserve(n); 
        long long candidate = 3;
        while (n > primes.size()) {
            if (std::all_of(primes.begin(), primes.end(), [candidate](long long p){ return candidate % p != 0;})) {
                primes.push_back(candidate);
            }
            candidate += 2;
        }
        return primes.back();
    }

}
