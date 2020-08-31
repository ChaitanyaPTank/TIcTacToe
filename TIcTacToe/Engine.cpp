#include "pch.h"
#include <iostream>
#include "Variables.h"

using namespace std;

// Checks if someone has won or not
bool winningDecision()
{

    for (int j = 0; j < 3; ++j)
    {

        //Checks for horizontal line
        if ((board[j][0] == 'X') && (board[j][1] == 'X') && (board[j][2] == 'X'))
        {
            cout << "Player \"X\" wins" << endl;
            return true;
        }
        else if ((board[j][0] == '0') && (board[j][1] == '0') && (board[j][2] == '0'))
        {
            cout << "Player \"0\" wins" << endl;
            return true;
        }

        // Checking for vertical lines
        else if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X')
        {
            cout << "Player \"X\" wins" << endl;
            return true;
        }
        else if (board[0][j] == '0' && board[1][j] == '0' && board[2][j] == '0')
        {
            cout << "Player \"0\" wins" << endl;
            return true;
        }
    }

    // Checking for cross entry
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[2][2] == 'X' && board[1][1] == 'X' && board[0][0] == 'X'))
    {
        cout << "Player \"X\" wins" << endl;
        return true;
    }
    else if ((board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') || (board[2][2] == '0' && board[1][1] == '0' && board[0][0] == '0'))
    {
        cout << "Player \"0\" wins" << endl;
        return true;
    }

    return false;
}