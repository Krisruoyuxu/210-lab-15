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
    void set_screen_writer(){}
    string get_screen_writer(){}

    void set_year_released(){}
    int get_year_released(){}

    void set_title(){}
    string get_title(){}

    void print(){
        cout << "Movie: " << title <<endl;
        cout << "    Year released: " << year_released <<endl;
        cout << "    Screenwriter: " << screen_writer <<endl;
    }

};

int main() {
    
    

    return 0;
}