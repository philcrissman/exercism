#include "raindrops.h"

#include <cmath>
#include <iostream>

namespace raindrops {
    std::string convert(long n)
    {
        std::string resp = "";
        if (n % 3 == 0) {
            resp += "Pling";
        }
        if (n % 5 == 0){
            resp += "Plang";
        }
        if (n % 7 == 0){
            resp += "Plong";
        }
        if (resp.empty()) {
            resp = std::to_string(n);
        }
        return resp;
    }

}  // namespace raindrops
