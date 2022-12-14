#include<iostream>

using namespace std;

int space[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    // 3 rows and 3 coloums....

int row, coloum; //Global variables..
char token = 'X';
bool tie;
string p1, p2;

void funtionStr()
{
   
    system("cls");

    

    cout<<"Enter the name of the first player: ";
    getline(cin, p1);

    cout<<"Enter the name of the second player: ";
    getline(cin, p2);

    cout<<endl<<endl<<p1<<" is player1"<<endl;
    cout<<endl<<p2<<" is player2"<<endl<<endl<<endl;
    

    //#Structure:

    cout<<"            |     |    "<<endl;
    cout<<"        "<< space[0][0]<<"   |  "<<space[0][1]<<"  |  "<<space[0][2]<<"  "<<endl; //Adding numbers in the structure.
    cout<<"         ___|_____|____"<<endl;
    cout<<"            |     |    "<<endl;
    cout<<"        "<< space[1][0]<<"   |  "<<space[1][1]<<"  |  "<<space[1][2]<<"  "<<endl;
    cout<<"         ___|_____|____"<<endl;
    cout<<"            |     |    "<<endl;
    cout<<"        "<< space[2][0]<<"   |  "<<space[2][1]<<"  |  "<<space[2][2]<<"  "<<endl;
    cout<<"            |     |    "<<endl<<endl<<endl;


}

void Value()
{
    int digit;

    if (token == 'X')
    {
        cout<<p1<<"please enter: ";
        cin>>digit;
    }

     if (token == 'O')
    {
        cout<<p2<<"please enter: ";
        cin>>digit;
    }

    if (digit == 1)
    {
        row = 0;        
        coloum = 0;
        // position = 1
    }

     if (digit == 2)
    {
        row = 0;        
        coloum = 1;
        // position = 2
    }

     if (digit == 3)
    {
        row = 0;        
        coloum = 2;
        // position = 3
    }

     if (digit == 4)
    {
        row = 1;        
        coloum = 0;
        // position = 4
    }

     if (digit == 5)
    {
        row = 1;        
        coloum = 1;
        // position = 5
    }

     if (digit == 6)
    {
        row = 1;        
        coloum = 2;
        // position = 6
    }

     if (digit == 7)
    {
        row = 2;        
        coloum = 0;
        // position = 7
    }

     if (digit == 8)
    {
        row = 2;        
        coloum = 1;
        // position = 8
    }


     if (digit == 9)
    {
        row = 2;        
        coloum = 2;
        // position = 9
    }

    else
    {
        cout<<"Invalid Input!"<<endl;
        cout<<"Try Again"<<endl;
    }


    if (token == 'X' && space[row][coloum] != 'X' && space[row][coloum] != 'O')
    {
        space[row][coloum] = 'X';
        token = 'O';

    }

    else if (token == 'O' && space[row][coloum] != 'X' && space[row][coloum] != 'O')
    {
        space[row][coloum] = 'O';
        token = 'X';
    }

    else
    {
        cout<<"There is no empty space"<<endl;
        Value();
        //To play it again
    }
     

}


bool funthree(){ //For game going on or draw

    for (int i = 0; i < 3; i++)//for win
    {
         if (space[i][0] == space[i][1]  && space[i][0] == space[i][2] || space[0][i] == space[1][i]  && space[0][i] == space[2][i])
         {

            // for X X X or O O O (1st condition before ||)
            /*for X or O (2nd one)
                  X or O
                  X or O
             */

            return true;

         }         
    }
    
    if (space[0][0] == space[1][1]  && space[1][1] == space[2][2] || space[0][2] == space[1][1]  && space[1][1] == space[2][0])
    {
        return true; /* for angle O
                                    O 
                                      O*/
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            if (space[i][j] != 'X' && space[i][j] != 'O')
            {
                return false;//game is still going on 
            } 
        }
        
    }
    
    tie = true;
    return false;




}


int main(int argc, char const *argv[])
{
   while (!funthree())//until any player wins the game
   {
    funtionStr();
     Value();
      !funthree();
    
   }
   

   if (token == 'X' && tie == false)
   {
     cout<<p2<<"Wins"<<endl;
   }
   else if(token == 'O' && tie == false)
   {
     cout<<p1<<"Wins"<<endl;
   }

   else
   {
    cout<<"Draw!!!"<<endl;
   }
   
   
    
    
    return 0;
}
