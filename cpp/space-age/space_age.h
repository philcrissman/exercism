#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age 
{

    class space_age 
    {
        public:
            space_age(long long seconds) noexcept;
            long long seconds() const noexcept;
            double on_earth() const noexcept;
            double on_mercury() const noexcept;
            double on_venus() const noexcept;
            double on_mars() const noexcept;
            double on_jupiter() const noexcept;
            double on_saturn() const noexcept;
            double on_uranus() const noexcept;
            double on_neptune() const noexcept;

        private:
            long long age_in_seconds;

    };
}  // namespace space_age


#endif