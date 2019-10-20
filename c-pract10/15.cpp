#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fileOut("test.txt");
    fileOut << "Hello world and africa!";
    fileOut.close();

    ifstream fileIn("test.txt");
    fileIn.seekg(0, ios::end);
    int fileSize = fileIn.tellg();
    fileIn.seekg(0, ios::beg);

    char buff[fileSize];

    for (int i = fileSize - 1; (!fileIn.eof() && (i >= 0)); i--) {
        buff[i] = fileIn.get();
    }

    cout << buff << endl;

    return 0;
}