#include "say.h"

namespace say {
    std::string in_english(unsigned long long n)
    {   
        std::string number;
        if (n == 0) number = "zero";
        if (n == 1) number = "one";
        return number;
    }

}  // namespace say
