#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    //std::cout<<"argc: " << argc;
    std::string input_file, output_file;
    for (int i = 1; i < argc; ++i) {
        std::string str = argv[i];
        if(static_cast<int>(str.size()) > 2){
            if(input_file.size() == 0){
                input_file = str;
                continue;
            }
            output_file = str;
        }
    }

    std::cout << input_file << std::endl;
    std::cout << output_file << std::endl;

    for (int i = 1; i < argc; ++i) {
        std::string str = argv[i];
        if(static_cast<int>(str.size()) < 3){
            std::cout << str << std::endl;
        }
    }
    
    return 0;
}