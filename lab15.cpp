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
    // create a vector to store the objects
    vector <Movie> test_movies;
    // open the file 
    ifstream fin ("text.txt");
    if (!fin) { // first test if had read the file successfully
        cerr << "error openint the test.txt" <<endl;
        return 1;
    }
    // read in the test examples
    string temp_sc;
    int temp_year;
    string temp_title;
    
    while(getline(fin, temp_title)){
        getline(fin, temp_sc);
        fin >> temp_year;
        fin.ignore();
        getline(fin, temp_title);
        Movie temp;
        temp.set_screen_writer(temp_sc);
        temp.set_year_released(temp_year);
        temp.set_title(temp_title);
        test_movies.push_back(temp);
    }
    fin.close();
    // Then let's output our testmovies
    for (auto movies: test_movies){
        movies.print();
    }


    return 0;
}