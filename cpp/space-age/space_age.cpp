#include "space_age.h"

space_age::space_age::space_age(long long seconds) noexcept
: age_in_seconds(seconds)
{
}

long long space_age::space_age::seconds() const noexcept
{
    return age_in_seconds;
}

double space_age::space_age::on_earth() const noexcept
{
    return on_planet("earth");
}

double space_age::space_age::on_mercury() const noexcept
{
    return on_planet("mercury");
}

double space_age::space_age::on_venus() const noexcept
{
    return on_planet("venus");
}

double space_age::space_age::on_mars() const noexcept
{
    return on_planet("mars");
}

double space_age::space_age::on_jupiter() const noexcept
{
    return on_planet("jupiter");
}

double space_age::space_age::on_saturn() const noexcept
{
    return on_planet("saturn");
}

double space_age::space_age::on_uranus() const noexcept
{
    return on_planet("uranus");
}

double space_age::space_age::on_neptune() const noexcept
{
    return on_planet("neptune");
}
