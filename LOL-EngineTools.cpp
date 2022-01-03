#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "LOL-Engine Tools 1.0\nby kekan :>\n\n";
    if (argc == 1) {
        help();
    }
    else {
        string command = argv[1];
        if (command == "get") {
            if (argc > 2) {
                string installpath = argv[2];
                getprecompiled(installpath);
            }
            else {
                cout << "Not enough arguments.\n\n";
                help();
            }
        }
        else if (command == "help") {
            help();
        }
        else {
            cout << "Invalid command.\n\n";
            help();
        }
    }
    return 0;
}