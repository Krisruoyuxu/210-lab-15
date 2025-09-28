#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <fstream>
using namespace std;

class Movie {
    private:
    string screen_writer;
    int year_released;
    string title;

    public:
    // setters and getters
    void set_screen_writer(string input){ screen_writer = input; }
    string get_screen_writer()const { return screen_writer; }

    void set_year_released(int input){ year_released = input; }
    int get_year_released()const { return year_released; }

    void set_title(string input){ title = input; }
    string get_title()const { return title; }

    void print(){
        cout << "Movie: " << screen_writer <<endl;
        cout << "    Year released: " << year_released <<endl;
        cout << "    Screenwriter: " << title <<endl;
        cout <<endl;
    }

};

int main() {
    
    Movie movie1; // just a test now
    Movie movie2; 
    movie1.set_screen_writer("TestScreenWriter1");
    movie1.set_year_released(1000);
    movie1.set_title("hello");

    movie2.set_screen_writer("TestScreenWriter2");
    movie2.set_year_released(2000);
    movie2.set_title("asdf");

    movie2.print();

    movie1.print();



    return 0;
}