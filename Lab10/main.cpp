#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class RandGen_2 {
public:
    RandGen_2(): numbers() {srand(time(NULL));}
    int operator()();
private:
    vector<int> numbers;
};

int main(void) {
    vector<int> lottoRow1(7);
    vector<int> lottoRow2(7);

    RandGen_2 randGen_2;
    std::ostream_iterator<int> out_it (cout, " ");

    cout << "First lotto row:\n";
    generate(lottoRow1.begin(), lottoRow1.end(), randGen_2);
    sort(lottoRow1.begin(), lottoRow1.end());
    std::copy (lottoRow1.begin(), lottoRow1.end(), out_it );

    cout << "\n\nSecond lotto row:\n";
    generate(lottoRow2.begin(), lottoRow2.end(), randGen_2);
    sort(lottoRow2.begin(), lottoRow2.end());
    std::copy (lottoRow2.begin(), lottoRow2.end(), out_it );

    cout << "\n\nSame numbers:\n";

    int i = 0;

    for_each(lottoRow1.begin(), lottoRow1.end(), [&lottoRow2, &i](int& n)
             {
                 if(find(lottoRow2.begin(), lottoRow2.end(), n) != lottoRow2.end())
                     cout << "#" << ++i << ": " << n << "\n";
             }
    );

    return 0;
}

int RandGen_2::operator()() {
    int number;
    do {
        number = rand() % 37 + 1;
    }
    while(find(numbers.begin(), numbers.end(), number) != numbers.end());
    numbers.push_back(number);
    return number;
}