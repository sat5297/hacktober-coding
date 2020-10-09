#include <iostream>
#include <string>

int main() {
    std::string s = "";
    std::cout << "Enter the String:-" << std::endl;
	std::cin >> s;
    
    std::string x = "", y = "";

    std::cout << "Enter the character to remove" << std::endl;
    std::cin >> x;

    if(x.length() > 1) {
        std::cout << "You have entered a string instead of a character" << std::endl;
    } else {
        size_t pos;
        while ((pos = s.find(x)) != std::string::npos) {
            s.replace(pos, 1, y);
        }
        std::cout << s << std::endl;
    }

	return 0;
}