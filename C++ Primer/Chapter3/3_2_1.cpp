#include <iostream>
#include <string>
int main()
{
    std::string str1 = "12345";
    std::cout << str1.size()<< std::endl;
    for(int i = 0 ; i < 6;i++)
    {
        std::cout << static_cast <uint32_t>(str1[i]) << " ";
    }
    std::cout << std::endl;
    
    
    std::string str2 = "str";
    std::string str3 = "str";
    if (str2 == str3)
        std::cout << "Equal" << std::endl;
    return 1;

}
