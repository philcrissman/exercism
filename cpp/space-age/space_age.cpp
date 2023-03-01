#include "space_age.h"

namespace space_age {
    space_age::space_age(const long &seconds) : age_in_seconds(seconds)
    {
    }

    long space_age::seconds()
    {
        return age_in_seconds;
    }

}  // namespace space_age