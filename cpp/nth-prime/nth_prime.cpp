#include "nth_prime.h"
#include <algorithm>
#include <numeric>
#include <iostream>
#include <stdexcept>


namespace nth_prime {
    long long nth(long unsigned int n)
    {
        // kept the guard for the final test case where nth_prime(0) is expected to throw this
        if (n == 0)
            throw std::domain_error("We can't find the zeroeth prime, that is not a thing");
        // we'll seed this with the first couple primes
        std::vector<long long> primes {2};
        primes.reserve(n); // I didn't know about this! Thanks

        long long candidate = 3;
        while (n > primes.size()) {
            if (std::all_of(primes.begin(), primes.end(), [candidate](long long p){ return candidate % p != 0;})) {
                primes.push_back(candidate);
            }
            candidate += 2;
        }
        // in cases where we are actually asking for the 1st or 2nd prime, we need to actually use
        // n, not just the last prime. For larger n, since we stop when (!n > primes.size()), 
        // primes[n-1] should _be_ the last prime
        return primes[n-1];
    }

}
