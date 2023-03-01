#include "reverse_string.h"
#include <algorithm>

namespace reverse_string {

std::string reverse_string(std::string in_string) {
    std::string reversed = "";
    for (std::string::reverse_iterator rev_it=in_string.rbegin(); rev_it!=in_string.rend(); ++rev_it)
        reversed += *rev_it;
    return reversed;
}

}  // namespace reverse_string
