#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<string> v1;
    string input;
    while (cin >> input)
        v1.push_back(input);
    for(const string  i : v1)
        cout << i << " ";
    cout <<endl;
    return 0;
}
