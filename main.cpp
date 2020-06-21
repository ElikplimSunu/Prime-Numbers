/*This program prints out the prime numbers between the range
 from 2 to the number,n using the sieve of Erastosthenes*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char userInput;

    do{
    //clearing the screen
    system("CLS");

    int number;

    cout << "Please enter a positive number: ";
    cin >> number;

    //making sure the input is a positive number
    if(number > 0){

    //array with all elements initialized to FALSE which will be used to mark out the multiples
    //of counter1
    bool prime[number] = {false};

    cout << endl <<  "Below are the prime numbers between 2 and " << number << ":" << endl;


    //counting from 2 through number,n
    for (int counter1 = 2; counter1 < number; counter1++)
    {
        //checking to remove the multiples of counter1
        for (int counter2 = counter1 * counter1; counter2 < number; counter2+=counter1)
        {
            //the non-prime elements index is being marked as true
            prime[counter2 - 1] = true;
        }
    }

    //checking to see if the numbers are marked as FALSE in the prime array and to print it if so
    for (int counter1 = 2; counter1 < number; counter1++)
    {
        if (prime[counter1 - 1] == false)
            //displaying the result(arrays elements that are marked as FALSE) in a grid layout
            cout << counter1 << "\t ";
    }

    } else {
    cout << "\nThe number entered is invalid!";}

    cout << endl << endl << "Would you like to run the program again? Press Y to run again and any other key to quit. ";
    cin >> userInput;

    } while(userInput == 'y');

    return 0;
}
