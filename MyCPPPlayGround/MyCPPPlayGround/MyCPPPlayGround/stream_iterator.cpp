#include <iostream>
#include <string>
#include <iterator>
#include <vector>

int main()
{
    std::cout << "Enter one or more words. Enter ! to end:\n";
    std::istream_iterator<std::string> in {std::cin};     // Reads strings from cin
    std::vector<std::string> words;
    while(true)
    {
        std::string word = *in;
        if(word == "!") break;
        words.push_back(word);
        ++in;
    }
    std::cout << "You entered " << words.size() << " words." << std::endl;
}
