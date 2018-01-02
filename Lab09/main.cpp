#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

using namespace std;

vector<string> Split(string input)
{
    int pos;
    vector<string> temp;
    while(pos != -1)
    {
        pos = input.find(" ");
        temp.push_back(input.substr(0, pos));
        input.erase(0, pos+1);
    }
    for(int j = 2; j < temp.size()-1; ++j)
    {
        temp[1] += " " + temp[j];
    }
    return temp;
}

int main()
{
    string _input, _cmd, _name, _number;
    bool _wasFound = false;
    vector<string> _info;
    map<string, string> _contacts;
    map<string, string>::iterator it;

    cout << "Phonebook application" << endl;
    while(1)
    {
        getline(cin, _input);
        _info = Split(_input);
        _cmd = _info[0];
        _name = _info[1];
        _number = _info[_info.size()-1];

        if (_cmd == "add")
        {
            _contacts[_name] = _number;
        }
        else if (_cmd == "list")
        {
            cout << "Content of the phone book:" << endl;
            for (it = _contacts.begin(); it != _contacts.end(); ++it)
            {
                cout << it->first << ": " << it->second << endl;
            }
        }
        else if (_cmd == "delete")
        {
            for (it = _contacts.begin(); it != _contacts.end(); ++it)
            {
                if (it->first == _name)
                {
                    _contacts.erase(_name);
                    _wasFound = true;
                    break;
                }
            }
            if(_wasFound == false)
            {
                cout << "Name " << _name << " not found" << endl;
            }
            _wasFound = false;
        }
        else if (_cmd == "exit")
        {
            break;
        }
        else
        {
            cout << "Unrecognized command " << _cmd << endl;
        }
    }

    return 0;
}


