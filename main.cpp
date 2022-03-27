#include <iostream>
#include <fstream>

int main()
{
    char c;
    std::ifstream inputfile ("in1.txt");
    std::ofstream charfile ("out1.txt");
    std::ofstream numfile ("out2.txt");
    while (!inputfile.eof())
    {
        inputfile >> c;
        if ('0' <= c && c <= '9')
        {
            numfile << c << " ";
        } else if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || (c == ',') || (c == '.') || (c == ';') || (c == '-') || (c == ':') || (c == '\"') || (c == '(') || (c == ')') || (c == '!') || (c == '?') || (c == '\''))
        {
            charfile << c << " ";
        }
    }
    inputfile.close();
    charfile.close();
    numfile.close();
    return 0;
}
