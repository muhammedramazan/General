#include <iostream>
#include <array>
int main()
{
    const int i = 12;
    int j = 12;
    const int l  = j;
    size_t s_j = 12;
    std::cout << i<< " " << j<<" "<< l << "\n";
    int arr_i[i];
    int arr[j];
    // std::array<int,s_j> arr_jj; s_j must be constant
}