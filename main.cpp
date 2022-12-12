#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int space[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    // 3 rows and 3 coloums....

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
    cout<<"         ___|_____|____"<<endl;
    cout<<"            |     |    "<<endl;
    cout<<"         ___|_____|____"<<endl;
    cout<<"            |     |    "<<endl;
    cout<<"            |     |    "<<endl<<endl<<endl;





    return 0;
}
