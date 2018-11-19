//STATIC DATA MEMBERS,STATIC MEMBER FUNCTIONS

#include <iostream>
using namespace std;

class static_member
{
    public:
        static int x;               //static data members
        static int fun()
        {
            int y = x+15;
            return(y);
        }
};
int static_member::x = 5;           //initialize static DM

int main(int argc, char const *argv[])
{
    cout<<"DM --> "<< static_member::x<<"\n";        //calling static DM
    cout<<"MF --> "<<static_member::fun();       //calling static MF
    return 0;
}
