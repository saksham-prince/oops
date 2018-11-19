#include <iostream>
using namespace std;

class copy_contructor
{
    int a;
    public:
        // void copy_contruct(copy_contructor &b)
        // {

        // }
        int put_values(int x)
        {
            a = x;
            return(a);
        }
        int get_values()
        {
            return(a);
        }
};


int main(int argc, char const *argv[])
{
    copy_contructor obj1 ;
    int x = obj1.put_values(5);
    copy_contructor obj2(obj1);
    cout<<obj2.get_values();
    return 0;
}
