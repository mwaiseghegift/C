#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <unistd.h>

using namespace std;

// Function to display the Input screen
void displayDataInput()
{
  cout << "==========================================\n\n";
  cout << "|   Welcome to PAIR MATCHING CARD GAME   |\n\n";
  cout << "==========================================\n\n";

  cout << "*          GAME DATA INPUT         *\n\n\n";

}

// Function to display the table head
void displayGame()
{
  cout << "\n\n";
  system("cls");
  // system("cls");//

  cout << "==========================================\n\n";
  cout << "|   Welcome to PAIR MATCHING CARD GAME   |\n\n";
  cout << "==========================================\n\n";

  cout << "*      Try to find matching cards...     *\n";
  cout << "\n\n";

}

// Function to display All Table with delay of 2 seconds
void displayBoard1(char ** table, int size)
{
  for(int i = 0; i < size*4 + 5 ;i++)
  {
    cout << "-";
  }
  cout << "\n\n";
  for (int i = 0; i < size; i++)
  {
    cout << i+1 << ".  | ";
    for(int j = 0; j < size; j++)
    {
      cout << table[i][j] << " | ";
    }
    cout << "\n";
  }
  cout << "\n   ";
  for(int i = 0; i < size;i++)
  {
    cout << "   " << i+1;
  }
  cout << "\n\n";

  for(int i = 0; i < size*4 + 5 ;i++)
  {
    cout << "-";
  }
  cout << "\n\n\n";

  
}

// Function to display * board
void displayBoard2(int size)
{
  for(int i = 0; i < size*4 + 5 ;i++)
  {
    cout << "-";
  }
  cout << "\n\n";
  for (int i = 0; i < size; i++)
  {
    cout << i+1 << ".  | ";
    for(int j = 0; j < size; j++)
    {
      cout << "*" << " | ";
    }
    cout << "\n";
  }
  cout << "\n   ";
  for(int i = 0; i < size;i++)
  {
    cout << "   " << i+1;
  }
  cout << "\n\n";

  for(int i = 0; i < size*4 + 5 ;i++)
  {
    cout << "-";
  }
  cout << "\n\n\n";
  
}

// function to display the board with the cards flipped in pairs removed from display
void displayboard3(int size,int fpairs, char ** table,vector<int> row1, vector<int> column1, vector<int> row2, vector<int> column2 )
{
  system("cls");
  fpairs = row1.size();
  for(int x = 0; x < size*4 + 5 ;x++)                                    //loops to display board with x being the row index and y being the column index
    {
       cout << "-";
    }
  cout << "\n\n";
  for (int x = 0; x < size; x++)
    {
      cout << x+1 << ".  | ";
      for(int y = 0; y < size; y++)                                      // most inner loop to output:
        {
        
          if((fpairs > 0) && (x == row1[y]-1 && y == column1[y]-1 || x == row2[y] - 1 && y == column2[y]-1) )                               // the slots with the cards empty for matched   //
            {
             cout << " " << " | ";
            }       
          else                                                                                                                                    // display a star for untouched slots                                                                                               
            {
             cout << "*" << " | ";
            }
        
        }  
      cout << "\n";
    }
  cout << "\n   ";
  for(int x = 0; x < size;x++)
    {
        cout << "   " << x+1;
    }
    cout << "\n\n";

  for(int x = 0; x < size*4 + 5 ;x++)
    {
        cout << "-";
    }
    cout << "\n\n";
}

void displayboardflips(int turn, int size,int fpairs,int plrnumv, char ** table,vector<int> vrow1, vector<int> vcolumn1, vector<int> vrow2, vector<int> vcolumn2,vector<int> prow1, vector<int> pcolumn1, vector<int> prow2, vector<int> pcolumn2)
{
  system("cls");                                // clearing screen 
    
   for(int i = 0; i < size*4 + 5 ;i++)           // loops to output playing board
    {
      cout << "-";
    }
   cout << "\n\n";
   for (int i = 0; i < size; i++)
    {
      cout << i+1 << ".  | ";
      for(int j = 0; j < size; j++)              // most inner loop to output: 
       {
         
         if(i == vrow1[turn] - 1 && j == vcolumn1[turn]-1 || i == vrow2[turn] - 1 && j == vcolumn2[turn]-1 )       // the slots with the cards empty for matched   //
           {
             cout << table[i][j]  << " | "; 
           }
         else if ((fpairs > 0) && (i == prow1[j]-1 && j == pcolumn1[j]-1 || i == prow2[j] - 1 && j == pcolumn2[j]-1))                                 // the character with card chosen for current turn                      
           { 
             cout <<" " << " | ";
           }
         else                                                                                     // display a star for untouched slots                                                                 
           {
             cout << "*" << " | ";
           }
        
           }

          cout << "\n";
        }

}

int main()
{

  vector<int> rturn1;
  vector<int> rturn2;
  vector<int> cturn1;
  vector<int> cturn2;                                       // vectors to store the row and column addresses for flipping and storing cards 

  vector<int> pairedrturn1;
  vector<int> pairedrturn2;
  vector<int> pairedcturn1;
  vector<int> pairedcturn2;

 
  vector<string> players;                                  // store names of players
  string input;
  int plrnum;
  int row1,row2,column1,column2;
  int num = 8;

  int turns = 0;
  int i = 0;
  int rightpairs = 0;
  int highest;

  // array to store the points for the players
  int * points = new int[plrnum];
  for (int i = 0; i < plrnum; i++){
    cin >> points[i];
  }

  // creating table of GAME
  char ** table = new char*[num];
  for (int i = 0; i < num; i++)
  {
    table[i] = new char[num];
  }

  // populating array
  char ch = 'A' - 1 ;
  for (size_t i = 0; i < num; i++)
  {
    for (size_t j = 0; j < num; j+= 2)
    {
      table[i][j] = ch;
      table[i][j+1] = ch;
      ch++;
    }
  }

  // Shuffling Array
  for (size_t i = 0; i < num * (num/2); i++)
  {
    // getting random indexes
    int n1 = rand()%num;
    int n2 = rand()%num;
    int n3 = rand()%num;
    int n4 = rand()%num;

    // swapping random indices
    char temp = table[n1][n2];
    table[n1][n2] = table[n3][n4];
    table[n3][n4] = temp;
  }

 for(int i = 0; i <plrnum; i++)
  {
      points[i] = 0;
  }
  

  displayDataInput();


  cout << "Enter the Number of players: ";                // getting input players
  cin >> plrnum;

  for (int i = 0; i < plrnum; i++)
  {
    cout << "Enter the name of player " << i+1 << ": ";
    cin >> input;
    players.push_back(input);
  }

  displayGame();

  displayBoard1(table, num);

  this_thread::sleep_for(chrono::milliseconds(20000));

  displayGame();

  displayBoard2(num);



  

  for(int turns = 0; turns < 12; turns++)
  {
    if(rightpairs <= 8)
      {
        while( i < plrnum)
         {
           system("cls");
           cout << "player name: "<< players[i] << endl;    // displaying the player name
           cout << "points accumalated by " << players[i] << " : " << points [i] << " points.\n";

           cout << "\n\n\n";

           cout << "choose which card to be flipped by typing in the row and column for the correspponding address\n" ;  // instructing the playeron how to choose the cards he wants to flip
           cout << "row: ";
           cin >> row1;
           cout <<"column: ";
           cin >> column1;

           rturn1.push_back(row1);
           cturn1.push_back(column1);                    // pushing back inputs into there vectors to be used flipping there addresses in the board

           system("cls");

           displayboardflips(turns,num,rightpairs,plrnum,table,rturn1,cturn1,rturn2,cturn2,pairedrturn1,pairedcturn1,pairedrturn2,pairedcturn2);
             
           cout << "which card do you think matches this card? \n";                // instructing the player to choose another card to match with the inital card flipped
           cout << "row: ";
           cin >> row2;
           cout << "\n";
           cout <<"column: ";
           cin >> column2;
           rturn2.push_back(row2);
           cturn2.push_back(column2);

           system("cls");

           displayboardflips(turns,num,rightpairs,plrnum,table,rturn1,cturn1,rturn2,cturn2,pairedrturn1,pairedcturn1,pairedrturn2,pairedcturn2);

           if(table[ rturn1[turns] - 1][ cturn1[turns] - 1] == table[ rturn2[turns]-1 ][ cturn2[turns] - 1 ])             // using 'if' keyword to inform  the player if they matched the cards right or wrong
             {

               cout<<"\n\n\n";
               cout << "cards match! 1 point for" << players[plrnum] << endl;
               points[plrnum] = points [plrnum] + 1;

               pairedrturn1 [turns] = rturn1 [turns];
               pairedcturn1 [turns] = cturn1 [turns];
               pairedrturn2 [turns] = rturn2 [turns];
               pairedcturn2 [turns] = cturn2 [turns];
                 
               rightpairs = pairedrturn1.size();

               rturn1.pop_back();
               rturn2.pop_back();
               cturn1.pop_back();
               cturn2.pop_back();


               std::this_thread::sleep_for(std::chrono::milliseconds(5000));

              }
            else
             {

               cout<<"\n\n\n";
               cout << "match wrong! no points for the current player" << endl;
               i++;
                if(i < plrnum)
                 {
                  rturn1.pop_back();
                  rturn2.pop_back();
                  cturn1.pop_back();
                  cturn2.pop_back();
                 }
                std::this_thread::sleep_for(std::chrono::milliseconds(5000));

              }



              
        }
      }
      

  }
  
  highest = points[0];                     // getting the highest number of points in the points array
  int count;
  for(count = 0; count < plrnum; count++)
   {
     if(points[count] < highest)
     highest = points[count];
   }

  system("cls");

  cout << "==========================================\n\n";     // annoncing the wiunner by outputting the playerwith the most points
  cout << "|  the winner is" << players[count]<< "  |\n\n";
  cout << "==========================================\n\n";
    
  
  // deallocating the memory
  for (int i = 0; i < num; i++)
  {
    delete [] table[i];
  }
  delete [] table;
  delete [] points;
  
  table = NULL;
  points = NULL;
  


}