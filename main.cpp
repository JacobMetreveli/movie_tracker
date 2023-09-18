#include <iostream>
#include "Movies.h"


void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << "Successfully added: " << name << " to the collection\n";
    }
    else {
        std::cout << name << " is already in the colleciton.\n";
    }
}

int main() {
    Movies my_movies;

    char input {};
    std::string name {};
    std::string rating {};
    int watched {};
    do {
        std::cout << "--------------Movie Tracker--------------\n";
        std::cout << "A - Add a movie title with it's rating and number of times you've watched it.\n";
        std::cout << "D - Display your tracker of movies.\n";
        std::cout << "Q - Quit / End the program\n";
        std::cout << std::endl;

        std::cin >> input;

        switch (input) {
            case 'a':
            case 'A':
                std::cout << "Please enter the name of the movie, it's rating and the number of times you've watched it seperated by space: ";
                std::cin >> name >> rating >> watched;
                std::cout << std::endl;
                add_movie(my_movies, name, rating, watched);
                break;
            case 'd':
            case 'D':
                my_movies.display();
                std::cout << std::endl;
                break;
            case 'q':
            case 'Q':
                std::cout << "Goodbye!" << std::endl;
                std::cout << std::endl;
                break;
            default:
                std::cout << "Sorry invalid input, please try again...\n";
                std::cout << std::endl;
                break;
        }
    } while (input != 'Q' && input != 'q');


    return 0;
}