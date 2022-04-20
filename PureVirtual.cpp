// Implementation of Pure Virtual function...
#include  <iostream>
using namespace std;
class PureVirtual
{
    public:  // Telling the compiler to make the function as pure Virtual...
        virtual int sum() = 0;  // creation of pure virtual virtual function...
};
class DerivedSum2: public PureVirtual
{
    public:           // Class for getting sum of two numbers
        int a1, a2;
        DerivedSum2(int x, int y)
        { a1 = x; a2 = y;}
    public:
        int sum()            // Function Overriden
        {return a1 + a2;}
};
class DerivedSum3: public PureVirtual
{
    public:                // Class for getting sum of three numbers
        int a1, a2, a3;
        DerivedSum3(int x, int y, int z)
        { a1 = x; a2 = y; a3 = z;}
    public:
        int sum()                // Function Overriden
        {return a1 + a2 + a3;}
};
int main()
{
    PureVirtual *Virtual;      // Making pointer of the Pure Virtual class
    DerivedSum2 Sum2(10, 20);       // Object creation
    DerivedSum3 Sum3(30, 25, 45);      // Object creation
    Virtual = &Sum2;
    int x = Virtual -> sum();    // Overriding the Pure virtual function
    cout << "The Sum for 2 numbers is : " << x << endl;
    Virtual = &Sum3;
    x = Virtual -> sum();        // Overriding the Pure virtual function
    cout << "The Sum for 3 numbers is : " << x << endl;
    return 0;
}