#include <iostream>
#include <deque>
#include "utils.hpp"

using namespace std;

class RunningAverage
{
    private:
        int max_size = 0;
        deque<int> running_average;

    public:
        RunningAverage(int num) : max_size(num) {}

        void add_value(int val);
        double get_average();
};

void RunningAverage::add_value(int val)
{
    if (running_average.size() >= max_size) {
        running_average.pop_back();
    }
    running_average.push_front(val);
}

double RunningAverage::get_average()
{
    int sum = 0;
    for (int item : running_average) {
        sum += item;
    }
    return (double)sum / running_average.size();
}

int main()
{
    RunningAverage avg(5);

    while (true)
    {
        int val = 0;
        cout << "Enter a number, 0 to stop: ";
        if (!read_num_secure(val)) {
            cout << "NaN" << endl;
            std_flush();
            continue;
        }

        if (val > 0) {
            avg.add_value(val);
        }
        cout << "Running average: " << avg.get_average() << endl;
        
        if (val == 0) {
            cout << "Stopping..." << endl;
            break;
        }
    }

    return 0;
}