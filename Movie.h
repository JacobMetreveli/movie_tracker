#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>

class Movie{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    void set_name(std::string name_val) { this->name = name; }
    std::string get_name() { return name; }

    void set_rating(std::string rating) { this->rating = rating; }
    std::string get_movie_rating() { return rating; }

    void set_watched(int watched_val) { this->watched = watched; }
    int get_watched() { return watched; }

    // Constructor
    Movie(std::string name, std::string movie_rating, int watched);

    // Copy
    Movie(const Movie &source);

    // Destructor
    ~Movie();

    void increase_watch_count() { watched++; }

    void display() const;
};

#endif // _MOBIE_H_