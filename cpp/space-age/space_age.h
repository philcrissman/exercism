#pragma once

namespace space_age {

    class space_age {
        private:
            long age_in_seconds;

        public:
            space_age(const long& seconds);
            long seconds();
    };
}  // namespace space_age