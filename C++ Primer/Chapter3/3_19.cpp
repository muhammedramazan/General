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
  vector<int> v0;
  for (decltype(v0.size()) i = 0; i < 11; i++) v0.push_back(42);
  print_element_int(v0);
  vector<int> v1(11);
  for (auto &i : v1) i = 42;
  print_element_int(v1);
  vector<int> v2(11, 42);
  print_element_int(v2);

  return 0;
}
