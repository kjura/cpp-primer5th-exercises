#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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
class Sales_data;
std::istream &read(std::istream &, Sales_data &);

class Sales_data {
  friend Sales_data add(const Sales_data &, const Sales_data &);
  friend std::istream &read(std::istream &, Sales_data &);
  friend std::ostream &print(std::ostream &, const Sales_data &);

public:
  Sales_data() : Sales_data("", 0, 0.0) {}
  explicit Sales_data(const std::string &no) : Sales_data(no, 0, 0.0) {}
  Sales_data(const std::string &no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  explicit Sales_data(std::istream &is) : Sales_data() { read(is, *this); }

  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;  // Use default copy constructor
  sum.combine(rhs);
  return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}

inline
double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}


template <typename T>
void print_collection(const T& c) {

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << "\n";
}

void print_collection(const vector<Sales_data>& c) {

    for (const auto& e : c) {
        print(cout, e);
        cout << "\n";
    }

    cout << "\n";
}


bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2) {
    return sd1.isbn() < sd2.isbn();
}

int main()
{


    // ISBNs shamely generated with ChatGPT
    // Long live the Deus-Ex-Machina!    
    vector<Sales_data> vec {
        Sales_data("978-0-7432-7356-5"),
        Sales_data("978-0-452-28423-4"),
        Sales_data("978-0-06-112008-4"),
        Sales_data("978-0-7432-7357-2"),
        Sales_data("978-0-14-143951-8"),
        Sales_data("978-0-316-76948-8")
    };

    cout << "Before sort:\n";
    print_collection(vec);

    cout << "\n\n";

    std::sort(vec.begin(), vec.end(), compareIsbn);
    print_collection(vec);
    


    return 0;
}
