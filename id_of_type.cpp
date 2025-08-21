#include <iostream>
#include <typeinfo>
#include <vector>

int str_to_num(const std::string str) {
    int res {}; // 0
    for (char c : str) {
        c = static_cast <int> (c);
        res += c;
    }
    return res;
}
template <typename T>
void CheckInfo (T var, std::string input) {
    std::cout << "Id of " << input << " is: " << typeid(var).name() << std::endl;
    std::cout << "And default size of " << input << " is: " << sizeof(var) << std::endl;
}
int main(int argc, char *argv[]) {
    std::vector <std::string> types = {"int", "float", "double", "short", "long", "long-long", "unsigned", "signed", "bool", "std::byte", "size_t", "int8_t", "int16_t", "int32_t" "uint8_t", "uint16_t", "uint32_t", "uint64_t", "std::string", "char", "char16_t", "char32_t", "wchar_t"};
    if (argc > 2 || argc == 1) {
        std::cout << "Usage: " << argv[0] << " <data type> \n";
        std::cout << "Avaible types of data: \n";
        for (std::string x : types) {
            std::cout << x << std::endl;
        }
        return -1;
    }
    else {
        for (int i = 0; argv[1][i] != '\0'; ++i) {
            argv[1][i] = std::tolower(argv[1][i]);
        }
        const int argumentN = str_to_num(argv[1]);
        switch (argumentN) {
            case 331: {
                int type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 1110: {
                std::string type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 414: {
                char type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 534: {
                float type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 635: {
                double type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 560: {
                short type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 432: {
                long type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 909: {
                long long type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 861: {
                unsigned type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 634: {
                signed type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 428: {
                bool type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 883: {
                std::byte type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 654: {
                size_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 598: {
                int8_t type{};
                CheckInfo(type, argv[1]);
                break;
            }
            case 645: {
                int16_t type{};
                CheckInfo(type, argv[1]);
                break;
            }
            case 643: {
                int32_t type{};
                CheckInfo(type, argv[1]);
                break;
            }
            case 715: {
                u_int8_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 762: {
                u_int16_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 760: {
                u_int32_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 765: {
                u_int64_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 728: {
                char16_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 726: {
                char32_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            case 744: {
                wchar_t type {}; 
                CheckInfo(type, argv[1]);
                break;
            }
            default: {
                std::cout << "This data type is not exists \n";
                break;
            }

        }

    }
    return 0;
}
