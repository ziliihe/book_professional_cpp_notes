#include <iostream>

enum class PieceType
{
    King = 1,
    Queen,
    Rook = 20,
    Pawn
};

using enum PieceType;

int main()
{
    std::cout << (int)PieceType::Pawn << std::endl;

    if (PieceType::Queen == (PieceType)2)
        std::cout << "hello world!\n" << std::endl;

    PieceType piece { King };
    std::cout << "hui : " << (int) piece << std::endl;
    return 0;
}