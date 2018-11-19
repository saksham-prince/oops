// // FRIEND FUNCTION (OBJECT IS CREATED IN FRIEND FUNCTION)
// #include <iostream>
// using namespace std;
// class friend_fun
// {
//     private:
//         int i;          //THIS IS PRIVATE DM AND IF WE WANT TO ACCESS THIS THE USE
//     public:
//         friend void myfun();
// };
// void myfun()
// {
//     friend_fun obj;
//     obj.i = 100;
//     cout<<obj.i;
// }

// int main(int argc, char const *argv[])
// {
//     friend_fun obj;
//     myfun();
//     return 0;
// }

//----------------------------------------------------------------
// FRIEND FUNCTION (OBJECT IS CREATED IN MAIN FUNCTION)
#include <iostream>
 
using namespace std;
 
class Box {
   double width;
   
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}
 
// Main function for the program
int main() {
   Box box;
 
   // set box width without member function
   box.setWidth(10.0);
   
   // Use friend function to print the wdith.
   printWidth( box );
 
   return 0;
}
