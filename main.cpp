#include <iostream>
#include <string>

using namespace std;

class test {

};

int main() {
    cout << "Hallo Welt!\n";
    cout << "Input: Input Bitte eine Zeile engeben ";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";
    return 0;
}