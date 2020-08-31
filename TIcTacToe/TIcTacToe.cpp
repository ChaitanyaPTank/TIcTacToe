#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "Variables.h"
#include "Engine.h"

using namespace System;
using namespace std;

char board[3][3] = { '1','2','3','4','5','6','7','8','9' };
char turn = 'x';
int numTurn = 9;
bool win = false;

void printBoard(); 
void Help();
int takeInput();
void userAction(int place);

int main()
{
    cout << "Jay Swaminarayana" << endl;
    Help();

    printBoard();

    for(numTurn; numTurn > 0; --numTurn)
    {
        userAction(takeInput());
        printBoard();

        // Checks if anyone has won 
        if (numTurn < 6)
        {
            win = winningDecision();
            if (win == true)
            {
                return 0;
            }
        }
    }
    
    return 0;
}

// PrintBoard function will print board
void printBoard()
{
    int y = 10;
    for (int i = 0; i < 3; i++)
    {
        Console::SetCursorPosition(15, y + i);
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

// Print help message
void Help()
{
    cout << "You can give input as number..." << endl;
    cout << "Press any number for putting your sign on it" << endl;
}

// takeInput will take input from user
int takeInput()
{
    int action = 0;
    Console::SetCursorPosition(0, 4);
    if (turn == 'x')
    {
        cout << "User \"X\" please enter your number :" << endl;
    }
    else
    {
        cout << "User \"0\" please enter your number :" << endl;
    }
    cin >> action;
    return action;
}

// will change the content of the array as per input given by user
void userAction(int place)
{
    if (turn == 'x')
    {
        board[place / 3][(place % 3)-1] = 'X';
        turn = 'o';
    }
    else
    {
        board[place / 3][(place % 3)-1] = 'O';
        turn = 'x';
    }
}