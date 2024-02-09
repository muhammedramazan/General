#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<string> s_v;
  string input;
  while (cin >> input) s_v.push_back(input);
  for (string &s : s_v)
    for (char &c : s) c = toupper(c);
    
  for (decltype(s_v.size()) i = 0; i < s_v.size(); i++) {
    cout << s_v[i] << " ";
    if ((i + 1) % 8 == 0) cout << endl;
  }

  return 0;
}
