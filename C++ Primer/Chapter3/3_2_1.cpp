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

    // std::string s;// empty string
    // std::cin >> s;// read a whitespace-separated string into s
    // std::cout << static_cast<uint16_t>(s[0]) << "<-s"<< std::endl; // write s to the output
// 
    // std::string word;
    // while (std::cin >> word)
    // // read until end-of-file
    //     std::cout << word << std::endl; // write each word followed by a new line
    // std::cout << "---" << std::endl;
    // while (std::cin >> word)
    // // read until end-of-file
    //     std::cout << word << std::endl; // write each word followed by a new line
    // std::cout << "---" << std::endl;

    // std::string line;
    // // read input a line at a time until end-of-file
    // while (std::getline(std::cin, line))
    //     std::cout << line << std::endl;
    // std::cout << "---" << std::endl;

    // std::string str_ = "Hello";
    // std::string phrase = "Hello World";
    // std::string slang = "Hiya";
    // if(str_ < phrase)
    //     std::cout << str_ << std::endl; 
    // else
    //     std::cout << phrase << std::endl; 
    // if(str_ < slang)
    //     std::cout << str_ << std::endl;    
    // else
    //     std::cout << slang << std::endl; 
    // if(slang >  phrase)
    //     std::cout << phrase << std::endl;
    // else
    //     std::cout << slang << std::endl; 

    // std::string s1 = "hello", s2 = "world";
    // std::string s3 = s1 + ", " + s2 +'-'+ '\n';
    // std::cout << s3 << std::endl;
    std::string s = "12345";
    for(auto c : s)
    {
        std::cout << c << " ";
        c++;
    }
    std::cout << std::endl; 

    std::cout << s << std::endl; 
    for(auto &c : s)
    {
        std::cout << c << " ";
        c++;
    }
    std::cout << std::endl; 

    std::cout << s << std::endl; 

}