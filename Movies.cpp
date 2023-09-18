#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"
#include "Movie.h"

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (auto movie: vec) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    Movie temp {name, rating, watched};
    vec.push_back(temp);
    return true;
}

bool Movies::increase_watch_count(std::string name) {
    for (auto movie: vec) {
        if (movie.get_name() == name) {
            movie.increase_watch_count();
            return true;
        }
    }

    return false;
}


void Movies::display() const{
    if (vec.size() == 0){
        std::cout << "Sorry, no movies to display." << std::endl;
    }
    else {
    std::cout << "===================================" << std::endl;
    for (auto movie: vec) {
        movie.display();
    }
    std::cout << "===================================" << std::endl;
  }
}


Movies::~Movies(){
}