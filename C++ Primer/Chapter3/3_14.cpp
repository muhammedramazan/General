#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v1;
    int input;
    while (cin >> input)
        v1.push_back(input);
    for(const int  i : v1)
        cout << i << " ";
    cout <<endl;
    return 0;
}
