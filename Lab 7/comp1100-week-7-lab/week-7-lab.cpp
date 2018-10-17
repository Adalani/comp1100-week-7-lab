#include <iostream>
// Library needed to get a random seed.
#include <time.h>

using namespace std;

int main()
{
    // Gets a random seed for our rand() function.
    // ONLY RUN ONCE.
    srand( time(NULL) );

    cout << "To start, you have 500$ to (responsibly) gamble with." << endl << endl;

    int remainingMoney = 500;

    while (remainingMoney >0)
    {
        if (remainingMoney <= 0)
        {
            cout << "You have no money!" << endl << endl;
            break;
        }
        cout << "Choose either the number 1 or 0, type it, and press enter." << endl << endl;
        int inputNumber;

        cin >> inputNumber;

        if (inputNumber > 1)
        {
            cout << "You must enter either the number 1 or 0.  No other numbers are accepted." << endl << endl;
            break;
        }

        else if (inputNumber < 0)
        {
            cout << "You must enter either the number 1 or 0.  No other numbers are accepted." << endl << endl;
            break;
        }

        cout << "How much do you want to bet?" << endl << endl;
        int inputBet;

        cin >> inputBet;
        
        if (inputBet >500)
        {
            cout << "You only have 500$ to gamble with!" << endl << endl;
            break;
        }

        else if (inputBet <=0)
        {
            cout << "The thing with gambling is that you actually have to use money." << endl << endl;
            break;
        }

        else if (inputBet > remainingMoney)
        {
            cout << "You don't have enough money to do that" << endl << endl << endl;
            break;
        }

        cout << "Good luck!" << endl << endl << endl;

        // Picks either 0 or 1 randomly with equal probablilty	
        int random = rand() % 2;

        cout << random << endl;

        if (inputNumber = random)
        {
            cout << "Congratulations! You doubled what you just bet!" << endl << endl;

            inputBet = inputBet * 2;

            remainingMoney = remainingMoney + inputBet;

            cout << "You now have " << remainingMoney << "$." << endl << endl;
        }

        else
        {
            cout << "You didn't win!" << endl << endl;

            remainingMoney = remainingMoney - inputBet;

            cout << "You now have " << remainingMoney << "$." << endl << endl;
        }

        
    }


    return 0;
}