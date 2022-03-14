#include "std_lib_facilities.h"

int main()
{
    string hello_world = "#include <iostream>\n"
                  " \n"
                  "int main() {\n"
                  "std::cout << \"Hello, World!\\n\" << std::endl;\n"
                  "return 0;\n"
                  "}";
    cout << hello_world;
}