#pragma once
#include <map>
#include <string>

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
            const std::map<std::string, double> planets = {
                {"earth", 1.0},
                {"mercury", 0.2408467},
                {"venus", 0.61519726},
                {"mars", 1.8808158},
                {"jupiter", 11.862615},
                {"saturn", 29.447498},
                {"uranus", 84.016846},
                {"neptune", 164.79132}
            };
            const double earth_year_in_seconds = 60 * 60 * 24 * 365.25;
            double on_planet(const std::string planet) const {
                return age_in_seconds / earth_year_in_seconds / planets.at(planet);
            }

    };
}  // namespace space_age
