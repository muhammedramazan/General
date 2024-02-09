#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_element_string(vector<string> v) {
  cout << "Size : " << v.size() << endl;
  cout << "Element List ::";
  for (auto i : v) cout << " " << i;
  cout << endl;
}

void print_element_int(vector<int> v) {
  cout << "Size : " << v.size() << endl;
  cout << "Element List ::";
  for (auto i : v) cout << " " << i;
  cout << endl;
}
int main(int argc, char const *argv[]) {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};
  print_element_int(v1);
  print_element_int(v2);
  print_element_int(v3);
  print_element_int(v4);
  print_element_int(v5);
  print_element_string(v6);
  print_element_string(v7);
  return 0;
}