#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

class Screen {

    friend std::ostream& point_state(std::ostream& in, Screen& point);

    using content = std::string;
    public:
        Screen() = default;
        Screen(unsigned h, unsigned w) : sentence(h * w, ' '), screen_height(h), screen_width(w) { } // hold blanks
        Screen(char c, unsigned h, unsigned w) : sentence(h * w, c), screen_height(h), screen_width(w) { } // hold char in every point of the screen

        Screen(unsigned h, unsigned w, unsigned x, unsigned y, content element) :
                sentence(element), screen_height(h), screen_width(w), x_point(x), y_point(y) { }

        unsigned get_position_x(){
            return x_point;
        };

        unsigned get_position_y(){
            return y_point;
        }

        unsigned get_screen_height(){
            return screen_height;
        };

        unsigned get_screen_width(){
            return screen_height;
        };

        unsigned get_sentence(){
            return screen_height;
        };

        void move_x(unsigned x_coordinate){
            x_point += x_coordinate;
        }

        void move_y(unsigned y_coordinate){
            y_point += y_coordinate;
        }


    private:
        content sentence = "lorem ipsum";
        unsigned screen_height = 0;
        unsigned screen_width = 0;
        unsigned x_point = 0;
        unsigned y_point = 0;

};


std::ostream& point_state(std::ostream& in, Screen& point){
            in << "The resolution is " << point.screen_height << " over " << point.screen_width << " (height x width)\n";
            in << "The current position: " << " x = " << point.x_point << "  y = " << point.y_point << " content = " << point.sentence;
            return in;
        }

int main()
{

    Screen blank(10, 10);
    Screen scr('a', 10, 11);
    Screen dft;

    point_state(cout, blank) << endl;
    point_state(cout, scr) << endl;
    point_state(cout, dft) << endl;

    return 0;
}

