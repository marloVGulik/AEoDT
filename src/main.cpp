#include "main.hpp"

std::vector<std::string> options = {
    "--help",
    "-d", "--decrypt",
    "-e", "--encrypt",
    "-i", "--input"
};

int main(int argc, char* argv[]) {
    std::cout << "Program has " << argc << " arguments\n";

    for(unsigned short i = 0; i < argc; i++) {
        std::cout << "Argument number " << i << ": " << argv[i] << "\n";

        for(unsigned short j = 0; j < options.size(); j++) {
            if(argv[i] == options[j]) {
                bool optionHasData = true;
                if(i + 1 < argc) {
                    for(unsigned short k = 0; k < options.size(); k++) {
                        if(argv[i + 1] == options[k]) optionHasData = false; 
                    }
                } else optionHasData = false;
                if(optionHasData) {
                    std::cout << "Found option " << argv[i] << " with data: " << argv[i + 1] << "\n";
                } else {
                    std::cout << "Found option " << argv[i] << "\n";
                }
            }
        }
    }



    getchar();
    return 0;
}