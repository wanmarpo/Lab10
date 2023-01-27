#include <iostream>
using namespace std;

void display(const char text[], int size ) //function display receive 2 parameters
{
    for (int i = 0; i < size; ++i) //loop 15 times (i=0 to 14)
    {
        cout << text[i]; //display the walue of array text the index
    //first loop = text[0] P | second loop = text[1] R
    }
    cout << endl;
}
int main() //function main
{
    const int textLength = 15; //assign constant value to the variable textlenght
    
    char greetText1[textLength] = {'P', 'R', 'O', 'G', 'R',
                                   'A', 'M', 'M', 'I', 'N',
                                   'G', ' ', ' ', ' ', ' '};
    //char greetText1[15] --> an array named greetText1 is declared with size 15
    char greetText2[textLength] = {'I', 'S', ' ', 'F', 'U',
                                   'N', '!', ' ', ' ', ' ',
                                   ' ', ' ', ' ', ' ', ' '};
    //char greetText2[15] --> an array named greetText2 is declared with size 15                               
    display(greetText1, textLength); //calling functon display by passing 2 parameters; greetText1 array and textlenght
    display(greetText2, textLength); //calling functon display by passing 2 parameters; greetText2 array and textlenght
}