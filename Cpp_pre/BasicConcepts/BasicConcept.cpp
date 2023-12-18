#include <iostream>
using namespace std;

int main() {
  cout << "Int"
       << "\n";

  int long unsigned long mixed_modifiers = 12;
  cout << sizeof(int unsigned) << "\n";
  cout << sizeof(long unsigned) << "\n";

  cout << sizeof(int long unsigned) << "\n";

  cout << sizeof(int long unsigned long) << "\n";
  cout << " Character"
       << "\n";

  char c_a = '}';
  unsigned char u_c_a = '}';
  signed char s_c_a = '}';
  cout << c_a << " " << u_c_a << " " << s_c_a << "\n";
  c_a = u_c_a;
  c_a = s_c_a;
  cout << c_a << " " << u_c_a << " " << s_c_a << "\n";
  s_c_a = u_c_a;
  s_c_a = c_a;
  cout << c_a << " " << u_c_a << " " << s_c_a << "\n";
  cout << (c_a == s_c_a) << " " << (u_c_a == s_c_a) << " " << (u_c_a == c_a)
       << "\n";

  cout << " Float"
       << "\n";

  cout << sizeof(float) << "\n";
  cout << sizeof(double) << "\n";
  cout << sizeof(long double) << "\n";
  return 1;
}