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
    return age_in_seconds / 60.0 / 60.0 / 24.0 / 365.25;
}

double space_age::space_age::on_mercury() const noexcept
{
    return on_earth() / 0.2408467;
}

double space_age::space_age::on_venus() const noexcept
{
    return on_earth() / 0.61519726;
}

double space_age::space_age::on_mars() const noexcept
{
    return on_earth() / 1.8808158;
}

double space_age::space_age::on_jupiter() const noexcept
{
    return on_earth() / 11.862615;
}

double space_age::space_age::on_saturn() const noexcept
{
    return on_earth() / 29.447498;
}

double space_age::space_age::on_uranus() const noexcept
{
    return on_earth() / 84.016846;
}

double space_age::space_age::on_neptune() const noexcept
{
    return on_earth() / 164.79132;
}
