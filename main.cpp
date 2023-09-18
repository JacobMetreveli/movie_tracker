#include <iostream>
#include "Movies.h"


void add_movie(Movies movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << "Successfully added: " << name << " to the collection\n";
    }
    else {
        std::cout << name << " is already in the colleciton.\n";
    }
}

int main() {
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13",2);                 // OK
    add_movie(my_movies,"Star Wars", "PG",5);             // OK
    add_movie(my_movies,"Cinderella", "PG",7);           // OK
     
    my_movies.display();   // Big, Star Wars, Cinderella
    
}