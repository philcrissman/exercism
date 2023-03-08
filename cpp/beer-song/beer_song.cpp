#include "beer_song.h"


namespace beer_song {
    std::string verse(int n)
    {
        std::string num = std::to_string(n);
        std::string bottles = "bottles";
        std::string verse;
        if (n <= 0) {
            verse = "No more bottles of beer on the wall, no more bottles of beer.\n"
        "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
        } else if (n == 1) {
            verse = "1 bottle of beer on the wall, 1 bottle of beer.\n"
        "Take it down and pass it around, no more bottles of beer on the wall.\n";
        } else {
            verse = num + " bottles of beer on the wall, ";
            verse += num + " bottles of beer.\n";
            verse += "Take one down and pass it around, ";
            verse += std::to_string(n-1) + " bottles of beer on the wall.\n";
        }
       
        return verse;
    }

}  // namespace beer_song
