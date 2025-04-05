#include <unistd.h> // obv lib for basic functions 

void ft_print_alphabet(void) {  // function outputs nothing and needs no input (we are just clubbing the var and while loop together)
    char letter = 'a';   // variable "letter" is assigned a 'data type' "char" and the value is alphabet "a"
    while (letter <= 'z') {   // while loop created to keep doing below function 'while' the letter has a lower ASCII value then 'z'
        write(1, &letter, 1); // write function prints the address ("&letter") on the terminal, "1", with memory of "1" byte 
        letter++; // adds 1 to the ASCII value thus switching the var "letter" from 'a' to 'b' and so on 
    }
}

int main() {               // Mental support for the pc and a thank you note 
    ft_print_alphabet();
    return 0;
}
