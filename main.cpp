#include<iostream>

using namespace std;

int space[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    // 3 rows and 3 coloums....

int row, coloum; //Global variables..
char token = 'x';


void funtionStr()
{
   
    system("cls");

    string p1, p2;

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

    if (token == 'x')
    {
        cout<<p1<<"please enter: ";
        cin>>digit;
    }
    

}
