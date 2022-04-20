#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <climits>
#include <chrono>
#include <thread>
using namespace std;

//function to display the input screen
void displayInputScreen()
{
    //define numThreads
    int numThreads;
    cout << "Please enter the number of threads you would like to use: ";
    // cin >> prompt user for number of threads;
    cin >> numThreads;

   

    cout << "WELCOME TO PAIR MATCHING CARD GAME\n\n";
   cout << "*          GAME DATA INPUT         *\n\n\n";
}
// Function to display the table header
void displayTableHeader()
{
    //define player names
    string player1Name;
    string player2Name;
    cout << "Please enter the name of player 1: ";
    cin >> player1Name;
    cout << "Please enter the name of player 2: ";
    cin >> player2Name;


    cout << "*          GAME DATA OUTPUT        *\n\n";
    cout << "Player 1: ";
    cout << "Player 2: ";
}
void displayGame()
{
    // system("cls");
    displayInputScreen();
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
}



// Function to display All Table with delay of 2 seconds
void displayTable(vector<string> &player1, vector<string> &player2)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        cout << player1[i] << " ";
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        cout << player2[i] << " ";
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
    this_thread::sleep_for(chrono::seconds(2));
}
// Function to display the board
void displayBoard(vector<string> &player1, vector<string> &player2)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        cout << player1[i] << " ";
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        cout << player2[i] << " ";
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
}
// function to display the board with the cards flipped in pairs removed from display
void displayBoard(vector<string> &player1, vector<string> &player2, vector<int> &p1, vector<int> &p2)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        if (p1[i] == 1)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
}
 // clearing screen function
void clearScreen()
{
    system("cls");
}
// function to display the winner
void displayWinner(string winner)
{
    cout << "The winner is: " << winner << "\n\n";
}
// loops to output playing board
void displayBoard(vector<string> &player1, vector<string> &player2, vector<int> &p1, vector<int> &p2, int &turn)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        if (p1[i] == 1)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
    cout << "Turn: " << turn << "\n\n";
}
// the slots with the cards empty for matched cards
void displayBoard(vector<string> &player1, vector<string> &player2, vector<int> &p1, vector<int> &p2, int &turn, int &p1Score, int &p2Score)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        if (p1[i] == 1)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
    cout << "Turn: " << turn << "\n\n";
    cout << "Player 1 Score: " << p1Score << "\n\n";
    cout << "Player 2 Score: " << p2Score << "\n\n";
}

// function to display the board with the cards flipped in pairs removed from display
void displayBoard(vector<string> &player1, vector<string> &player2, vector<int> &p1, vector<int> &p2, int &turn, int &p1Score, int &p2Score, int &p1Turn, int &p2Turn)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        if (p1[i] == 1)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        // display a star for untouched slots
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
        
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
    cout << "Turn: " << turn << "\n\n";
    cout << "Player 1 Score: " << p1Score << "\n\n";
    cout << "Player 2 Score: " << p2Score << "\n\n";
    cout << "Player 1 Turn: " << p1Turn << "\n\n";
    cout << "Player 2 Turn: " << p2Turn << "\n\n";
}

    // array function to display points for each player
void displayBoard(vector<string> &player1, vector<string> &player2, vector<int> &p1, vector<int> &p2, int &turn, int &p1Score, int &p2Score, int &p1Turn, int &p2Turn, int &p1Points, int &p2Points)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1: ";
    for (int i = 0; i < player1.size(); i++)
    {
        if (p1[i] == 1)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "Player 2: ";
    for (int i = 0; i < player2.size(); i++)
    {
        if (p2[i] == 1)
        {
            cout << player2[i] << " ";
        }
        else
        {
            cout << "*" << " ";
        }
    }
    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "*      Try to find matching cards   *\n";
    cout << "\n\n";
    cout << "Turn: " << turn << "\n\n";
    cout << "Player 1 Score: " << p1Score << "\n\n";
    cout << "Player 2 Score: " << p2Score << "\n\n";
    cout << "Player 1 Turn: " << p1Turn << "\n\n";
    cout << "Player 2 Turn: " << p2Turn << "\n\n";
    cout << "Player 1 Points: " << p1Points << "\n\n";
    cout << "Player 2 Points: " << p2Points << "\n\n";
}
//function to store data of the points scored
void storePoints(int &p1Points, int &p2Points)
{
    // system("cls");
    displayInputScreen();
    displayTableHeader();
    cout << "\n\n";
    cout << "Player 1 Points: " << p1Points << "\n\n";
    cout << "Player 2 Points: " << p2Points << "\n\n";
}
int main(){
    // variables
    int turn = 1;
    int p1Score = 0;
    int p2Score = 0;
    int p1Turn = 0;
    int p2Turn = 0;
    int p1Points = 0;
    int p2Points = 0;
    int p1Wins = 0;
    int p2Wins = 0;
    int p1Losses = 0;
    int p2Losses = 0;
    int p1Ties = 0;
    int p2Ties = 0;
    int p1Total = 0;
    int p2Total = 0;
    int p1WinPercentage = 0;
    int p2WinPercentage = 0;
    int p1LossPercentage = 0;
    int p2LossPercentage = 0;
    int p1TiePercentage = 0;
    int p2TiePercentage = 0;
    int p1TotalPercentage = 0;
    int p2TotalPercentage = 0;
    int p1TotalWins = 0;
    int p2TotalWins = 0;
    

    // vectors
    vector<string> player1;
    vector<string> player2;
    vector<int> p1;
    vector<int> p2;
    vector<int> p1PointsVector;
    vector<int> p2PointsVector;
    vector<int> p1WinsVector;
    vector<int> p2WinsVector;
    vector<int> p1LossesVector;
    vector<int> p2LossesVector;
    vector<int> p1TiesVector;
    vector<int> p2TiesVector;
    vector<int> p1TotalVector;
    vector<int> p2TotalVector;
    vector<int> p1WinPercentageVector;
    vector<int> p2WinPercentageVector;
    vector<int> p1LossPercentageVector;
    vector<int> p2LossPercentageVector;
    vector<int> p1TiePercentageVector;
    vector<int> p2TiePercentageVector;
    vector<int> p1TotalPercentageVector;
    vector<int> p2TotalPercentageVector;
    vector<int> p1TotalWinsVector;
    vector<int> p2TotalWinsVector;
    vector<int> p1TotalLossesVector;

    // arrays
    int p1PointsArray[100];
    int p2PointsArray[100];
    int p1WinsArray[100];
    int p2WinsArray[100];
    int p1LossesArray[100];
    int p2LossesArray[100];
    int p1TiesArray[100];
    int p2TiesArray[100];

    // initialize vectors
    for (int i = 0; i < 100; i++)
    {
        p1PointsVector.push_back(0);
        p2PointsVector.push_back(0);
        p1WinsVector.push_back(0);
        p2WinsVector.push_back(0);
        p1LossesVector.push_back(0);
        p2LossesVector.push_back(0);
        p1TiesVector.push_back(0);
        p2TiesVector.push_back(0);
        p1TotalVector.push_back(0);
        p2TotalVector.push_back(0);
        p1WinPercentageVector.push_back(0);
        p2WinPercentageVector.push_back(0);
        p1LossPercentageVector.push_back(0);
        p2LossPercentageVector.push_back(0);
        p1TiePercentageVector.push_back(0);
        p2TiePercentageVector.push_back(0);
        p1TotalPercentageVector.push_back(0);
        p2TotalPercentageVector.push_back(0);
        p1TotalWinsVector.push_back(0);
        p2TotalWinsVector.push_back(0);
        p1TotalLossesVector.push_back(0);
    }

    // initialize arrays
    for (int i = 0; i < 100; i++)
    {
        p1PointsArray[i] = 0;
        p2PointsArray[i] = 0;
        p1WinsArray[i] = 0;
        p2WinsArray[i] = 0;
        p1LossesArray[i] = 0;
        p2LossesArray[i] = 0;
        p1TiesArray[i] = 0;
        p2TiesArray[i] = 0;
    }
    // initialize variables
    int p1TotalPoints = 0;
    int p2TotalPoints = 0;

    // initialize variables
    int p1TotalWinPercentage = 0;
    int p2TotalWinPercentage = 0;

    // initialize variables
    int p1TotalLossPercentage = 0;
    int p2TotalLossPercentage = 0;

// call functions
// function to declare identifier p1Choice and p2Choice
    int p1Choice = 0;
    int p2Choice = 0;
    int p1TotalChoice = 0;
    int p2TotalChoice = 0;
    int p1TotalWinPercentageChoice = 0;
    int p2TotalWinPercentageChoice = 0;
    int p1TotalLossPercentageChoice = 0;
    int p2TotalLossPercentageChoice = 0;
    int p1TotalPointsChoice = 0;
    int p2TotalPointsChoice = 0;
    int p1TotalWinsChoice = 0;
    int p2TotalWinsChoice = 0;
    int p1TotalLossesChoice = 0;
    int p2TotalLossesChoice = 0;
    int p1TotalTiesChoice = 0;
    int p2TotalTiesChoice = 0;
    int p1TotalPercentageChoice = 0;
    int p2TotalPercentageChoice = 0;

    //declare identifer p1TotalLosses and p2TotalLosses and initialize to 0
    int p1TotalLosses = 0;
    int p2TotalLosses = 0;

    

   
    // function to declare identifier p1Choice and p2Choice
    int p1ChoiceArray = 0;
    int p2ChoiceArray = 0;
    // declareChoice(p1Choice, p2Choice);



  

    displayInputScreen();
    displayTableHeader();

    cout << "\n\n";
    cout << "*      Try to find matching cards...     *\n";
    cout << "\n\n";
    cout << "Turn: " << turn << "\n\n";
    cout << "Player 1 Score: " << p1Score << "\n\n";
    cout << "Player 2 Score: " << p2Score << "\n\n";
    cout << "Player 1 Turn: " << p1Turn << "\n\n";
    cout << "Player 2 Turn: " << p2Turn << "\n\n";
    cout << "Player 1 Points: " << p1Points << "\n\n";
    cout << "Player 2 Points: " << p2Points << "\n\n";
    cout << "Player 1 Wins: " << p1Wins << "\n\n";
    cout << "Player 2 Wins: " << p2Wins << "\n\n";
    cout << "Player 1 Losses: " << p1Losses << "\n\n";
    cout << "Player 2 Losses: " << p2Losses << "\n\n";
    cout << "Player 1 Ties: " << p1Ties << "\n\n";
    cout << "Player 2 Ties: " << p2Ties << "\n\n";
    cout << "Player 1 Total: " << p1Total << "\n\n";
    cout << "Player 2 Total: " << p2Total << "\n\n";
    cout << "Player 1 Win Percentage: " << p1WinPercentage << "\n\n";
    cout << "Player 2 Win Percentage: " << p2WinPercentage << "\n\n";
    cout << "Player 1 Loss Percentage: " << p1LossPercentage << "\n\n";
    cout << "Player 2 Loss Percentage: " << p2LossPercentage << "\n\n";
    cout << "Player 1 Tie Percentage: " << p1TiePercentage << "\n\n";
    cout << "Player 2 Tie Percentage: " << p2TiePercentage << "\n\n";
    cout << "Player 1 Total Percentage: " << p1TotalPercentage << "\n\n";
    cout << "Player 2 Total Percentage: " << p2TotalPercentage << "\n\n";
    cout << "Player 1 Total Wins: " << p1TotalWins << "\n\n";
    cout << "Player 2 Total Wins: " << p2TotalWins << "\n\n";
    cout << "Player 1 Total Losses: " << p1TotalLosses << "\n\n";
    cout << "Player 2 Total Losses: " << p2TotalLosses << "\n\n";
    cout << "Player 1 Points Vector: " << p1PointsVector.size() << "\n\n";
    cout << "Player 2 Points Vector: " << p2PointsVector.size() << "\n\n";
    cout << "Player 1 Wins Vector: " << p1WinsVector.size() << "\n\n";
    cout << "Player 2 Wins Vector: " << p2WinsVector.size() << "\n\n";
    cout << "Player 1 Losses Vector: " << p1LossesVector.size() << "\n\n";
    cout << "Player 2 Losses Vector: " << p2LossesVector.size() << "\n\n";
    cout << "Player 1 Ties Vector: " << p1TiesVector.size() << "\n\n";
    cout << "Player 2 Ties Vector: " << p2TiesVector.size() << "\n\n";
    cout << "Player 1 Total Vector: " << p1TotalVector.size() << "\n\n";
    cout << "Player 2 Total Vector: " << p2TotalVector.size() << "\n\n";
    cout << "Player 1 Win Percentage Vector: " << p1WinPercentageVector.size() << "\n\n";
    cout << "Player 2 Win Percentage Vector: " << p2WinPercentageVector.size() << "\n\n";
    cout << "Player 1 Loss Percentage Vector: " << p1LossPercentageVector.size() << "\n\n";
    cout << "Player 2 Loss Percentage Vector: " << p2LossPercentageVector.size() << "\n\n";
    cout << "Player 1 Tie Percentage Vector: " << p1TiePercentageVector.size() << "\n\n";
    cout << "Player 2 Tie Percentage Vector: " << p2TiePercentageVector.size() << "\n\n";
    cout << "Player 1 Total Percentage Vector: " << p1TotalPercentageVector.size() << "\n\n";
    cout << "Player 2 Total Percentage Vector: " << p2TotalPercentageVector.size() << "\n\n";
    cout << "Player 1 Total Wins Vector: " << p1TotalWinsVector.size() << "\n\n";
    cout << "Player 2 Total Wins Vector: " << p2TotalWinsVector.size() << "\n\n";
    cout << "Player 1 Total Losses Vector: " << p1TotalLossesVector.size() << "\n\n";

        // call functions
        //prompt player 1 for input
        cout << "Player 1, enter your choice: ";
        cin >> p1Choice;
        cout << "\n\n";
        //prompt player 2 for input
        cout << "Player 2, enter your choice: ";
        cin >> p2Choice;
        cout << "\n\n";
        



    
    // Shuffling Array
    int array[100];
    for (int i = 0; i < 100; i++)
    {
        array[i] = i + 1;
    }
    // getting the highest number of points in the points array
  int count;
    int highest = 0;
    for (int i = 0; i < 100; i++)
    {
        count = 0;
        for (int j = 0; j < 100; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count > highest)
        {
            highest = count;
        }
    }
    // no cards left on the table
    if (highest == 0)
    {
        cout << "No cards left on the table.\n";
        return 0;
    }
    // getting the highest number of points in the points array
    int highestPoints = 0;
    for (int i = 0; i < 100; i++)
    {
        count = 0;
        for (int j = 0; j < 100; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count == highest)
        {
            highestPoints = array[i];
        }
    }

    
    // getting the highest number of wins in the wins array
    int count2;
    int highest2 = 0;
    for (int i = 0; i < 100; i++)
    {
        count2 = 0;
        for (int j = 0; j < 100; j++)
        {
            if (array[i] == array[j])
            {
                count2++;
            }
        }
        if (count2 > highest2)
        {
            highest2 = count2;
        }
    }
    //annoncing the wiunner by outputting the playerwith the most points
    cout << "The winner is: " << array[0] << endl;
    cout << "The number of points is: " << highest << endl;
    cout << "The number of wins is: " << highest2 << endl;



    //DISPLAYING THE PLAYER WITH THE MOST POINTS
    for (int i = 0; i < 100; i++)
    {
        count = 0;
        for (int j = 0; j < 100; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count == highest)
        {
            cout << "The player with the most points is: " << array[i] << endl;
        }
    }
    cout << "BEST WINNER WITH HIGHEST SCCORE " << 100 - highest2 << endl;
}
