#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print_element_int(vector<int> v) {
  cout << "Size : " << v.size() << endl;
  cout << "Element List ::";
  for (auto i : v) cout << " " << i;
  cout << endl;
}
int main(int argc, char const *argv[]) {
  vector<int> s_i;
  int input;
  while (cin >> input) s_i.push_back(input);

  if (s_i.size() < 2) return -1;
  for (decltype(s_i.size()) i = 1; i < s_i.size(); i++) {
    cout << s_i[i - 1] + s_i[i] << " ";
  }
  cout << endl;

  auto middile = s_i.size() / 2;
  for (decltype(middile) i = 0; i < middile; i++)
    cout << s_i[i] + s_i[s_i.size() - i - 1] << " ";
  cout << endl;

  return 0;
}
