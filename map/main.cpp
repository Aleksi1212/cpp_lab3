#include <iostream>
#include <map>
#include "utils.hpp"

using namespace std;

int main()
{
    map<string, int> people;

    string command_name;
    while (true)
    {
        if (command_name.empty()) {
            cout << "Enter name or \"stop\" or \"print\": ";
            getline(cin, command_name);
        }
    
        if (command_name == "stop") {
            break;
        }
        else if (command_name == "print") {
            //map<string, int>::iterator people_it;
            for (auto people_it = people.begin(); people_it != people.end(); people_it++) {
                cout << people_it->first
                     << " : "
                     << people_it->second
                     << endl;
            }
        }
        else {
            int map_val = 0;
            cout << "Enter integer: ";
            if (read_num_secure(map_val)) {
                people[command_name] = map_val;
            } else {
                cout << "NaN" << endl;
                std_flush();
                continue;
            }
            std_flush();
        }
        command_name = "";
    }
    

    return 0;
}