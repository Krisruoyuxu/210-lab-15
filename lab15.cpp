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
    string get_screen_writer(){ return screen_writer; }

    void set_year_released(int input){ year_released = input; }
    int get_year_released(){ return year_released; }

    void set_title(string input){ title = input; }
    string get_title(){ return title; }

    void print(){
        cout << "Movie: " << title <<endl;
        cout << "    Year released: " << year_released <<endl;
        cout << "    Screenwriter: " << screen_writer <<endl;
    }

};

int main() {
    
    Movie movie1;
    movie1.set_screen_writer("TestScreenWriter1");
    movie1.

    return 0;
}