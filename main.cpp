#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int space[3][3] = {{00, 01, 02},{10, 11, 12}, {20, 21, 22}};
    // 3 rows and 3 coloums....

    string p1, p2;

    cout<<"Enter the name of the first player: ";
    getline(cin, p1);

    cout<<"Enter the name of the second player: ";
    getline(cin, p2);

    cout<<p1<<" is player1"<<endl;
    cout<<p2<<" is player2"<<endl;





    return 0;
}
