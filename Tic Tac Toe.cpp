/*

~ C o d e B y T o d o r s k i ~

Do not enter anything but numbers :)

~ C o d e B y T o d o r s k i ~

*/

#include <iostream>

using namespace std;

int main()
{
    int input, counter = 1;
    char player;
    char position[9] = { '1','2','3','4','5','6','7','8','9' };

    while (counter <= 9)
    {
        cout << " " << position[0] << " | " << position[1] << " | " << position[2] << endl;
        cout << "-----------" << endl;
        cout << " " << position[3] << " | " << position[4] << " | " << position[5] << endl;
        cout << "-----------" << endl;
        cout << " " << position[6] << " | " << position[7] << " | " << position[8] << endl;
        cout << endl;

        if (counter % 2 != 0) player = 'X';
        else                  player = 'O';

        cout << "Enter number of position you would like to mark with " << player << " :" << endl;
        cin >> input;
        cout << endl;

        if (input < 1 || input > 9)
        {
            cout << "This number of position is smaller than 1 or greater than 9, enter again! " << endl; cout << endl;
            counter--;
        }

        else if (input == 1 && (position[0] != 'X' && position[0] != 'O')) position[0] = player;
        else if (input == 2 && (position[1] != 'X' && position[1] != 'O')) position[1] = player;
        else if (input == 3 && (position[2] != 'X' && position[2] != 'O')) position[2] = player;
        else if (input == 4 && (position[3] != 'X' && position[3] != 'O')) position[3] = player;
        else if (input == 5 && (position[4] != 'X' && position[4] != 'O')) position[4] = player;
        else if (input == 6 && (position[5] != 'X' && position[5] != 'O')) position[5] = player;
        else if (input == 7 && (position[6] != 'X' && position[6] != 'O')) position[6] = player;
        else if (input == 8 && (position[7] != 'X' && position[7] != 'O')) position[7] = player;
        else if (input == 9 && (position[8] != 'X' && position[8] != 'O')) position[8] = player;

        else
        {
            cout << "This number of position is already marked, enter again!" << endl; cout << endl;
            counter--;
        }

             if (position[0] == 'X' && position[1] == 'X' && position[2] == 'X' || position[0] == 'O' && position[1] == 'O' && position[2] == 'O') break;
        else if (position[3] == 'X' && position[4] == 'X' && position[5] == 'X' || position[3] == 'O' && position[4] == 'O' && position[5] == 'O') break;
        else if (position[6] == 'X' && position[7] == 'X' && position[8] == 'X' || position[6] == 'O' && position[7] == 'O' && position[8] == 'O') break;
        else if (position[0] == 'X' && position[3] == 'X' && position[6] == 'X' || position[0] == 'O' && position[3] == 'O' && position[6] == 'O') break;
        else if (position[1] == 'X' && position[4] == 'X' && position[7] == 'X' || position[1] == 'O' && position[4] == 'O' && position[7] == 'O') break;
        else if (position[2] == 'X' && position[5] == 'X' && position[8] == 'X' || position[2] == 'O' && position[5] == 'O' && position[8] == 'O') break;
        else if (position[0] == 'X' && position[4] == 'X' && position[8] == 'X' || position[0] == 'O' && position[4] == 'O' && position[8] == 'O') break;
        else if (position[2] == 'X' && position[4] == 'X' && position[6] == 'X' || position[2] == 'O' && position[4] == 'O' && position[6] == 'O') break;

        counter++;
    }

    if (counter > 9) cout << "Draw!" << endl;
    else             cout << "Player " << player << " Wins!" << endl;

    return 0;
    system("PAUSE");
}
