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
            if (n == 2) {
                verse += "1 bottle of beer on the wall.\n";
            } else {
                verse += std::to_string(n-1) + " bottles of beer on the wall.\n";
            }
            
        }
       
        return verse;
    }

    std::string sing(int start, int end)
    {
        std::string song("");
        for (int i = start; i >= end; i--) {
            song += verse(i);
            if (i > end) {
                song += "\n";
            }
        }
        return song;
    }

    std::string sing(int start) {
        return sing(start, 0);
    }

}  // namespace beer_song
