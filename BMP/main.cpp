#include "bitmapReader.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        std::cout << "Error occurred opening file." << std::endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        std::cout << "Re-run program specifing path for bmp file: ./bmp.exe #.bmp" << std::endl;
        return -1;
    }
    else {
        return BitmapReader::readBitmapFile(argv[1]);
    }
}
