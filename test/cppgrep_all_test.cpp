#include "test.hpp"

#include <cppgrep/cppgrep.hpp>

#include <array>

int main()
{
    const auto cpp_file = "\"" + (RESOURCES / "people.cpp").generic_string() + "\"";
    std::array argv { "cppgrep", "-cstfv", cpp_file.c_str() };
    return static_cast<int>(klang::cppgrep::main(argv.size(), argv.data()));
}