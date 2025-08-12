#include <iostream>
#include <typeinfo>
#include <vector>
template <typename T>
void CheckInfo (T var, std::string input) {
    std::cout << "Id of " << input << " is: " << typeid(var).name() << std::endl;
    std::cout << "And default size of " << input << " is: " << sizeof(var) << std::endl;
}
int main(int argc, char *argv[]) {
    std::vector <std::string> types = {"int", "std::string", "char", "float", "double", "short", "long", "long-long", "unsigned", "signed", "bool", "uint8_t", "uint16_t", "uint32_t"};
    if (argc > 2 || argc == 1) {
        std::cout << "Usage: " << argv[0] << " <data type> \n";
        std::cout << "Avaible types of data: \n";
        for (std::string x : types) {
            std::cout << x << std::endl;
        }
        return -1;
    }
    else {
        if (std::string(argv[1]) == "int") {
            int type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "std::string") {
            std::string type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "char") {
            char type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "float") {
            float type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "double") {
            double type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "short") {
            short type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "long") {
            long type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "long-long") {
            long long type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "unsigned") {
            unsigned type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "signed") {
            signed type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "bool") {
            bool type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "uint8_t") {
            u_int8_t type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "uint16_t") {
            u_int16_t type {};
            CheckInfo(type, argv[1]);
        }
        else if (std::string(argv[1]) == "uint32_t") {
            u_int32_t type {};
            CheckInfo(type, argv[1]);
        }
        else {
            std::cout << "This data type is not exists \n";
            return -1;
        }

    }
    return 0;
}
