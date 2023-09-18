#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <iostream>
#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> vec;
public:
    bool add_movie(std::string name, std::string rating, int watched);
    bool increase_watch_count(std::string name);
    void display() const;

    // Destructor
    ~Movies();
};

#endif // _MOVIES_H_