#include <iostream>

void PlayGame(){
 // Print welcome messages to the terminal
    std::cout << "\nYou are a secret agent breaking into a secure server room...\n";
    std::cout <<"Enter the correct code to continue...\n\n";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 6;
    const int CodeC = 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA *  CodeB * CodeC;

    // Print CodeSum and CodeProduct to Terminal
    std::cout << std::endl;
    std::cout << "  * There are 3 numbers in the code";
    std::cout << "\n  * The codes add up to: " << CodeSum;
    std::cout << "\n  * The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int  GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct =  GuessA * GuessB * GuessC;

    // Check if the palyers guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "\nYou Win!";
    }
    else{
        std::cout << "\nYou Lose!";
    }
}

int main(){
    PlayGame();
    return 0;   
}