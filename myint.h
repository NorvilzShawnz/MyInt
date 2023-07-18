// starter file for MyInt class header
class MyInt
{
   // these overload starters are declared as friend functions
   
   friend MyInt operator+ (const MyInt& x, const MyInt& y);
   // add in multiplication, as well
   friend MyInt operator* (const MyInt& x, const MyInt& y);
   friend bool operator< (const MyInt& x, const MyInt& y);
   // add in the other comparison overloads, as well
   // >, <=, >=, ==, !=,
   friend bool operator> (const MyInt&x, const MyInt& y);
   friend bool operator<= (const MyInt&x, const MyInt& y);
   friend bool operator>= (const MyInt&x, const MyInt& y);
   friend bool operator== (const MyInt&x, const MyInt& y);
   friend bool operator!= (const MyInt&x, const MyInt& y);
   // declare overloads for input and output (MUST be non-member functions)
   //  you may make them friends of the class
   friend std::ostream& operator<< (std::ostream& os, MyInt& intObject);
   friend std::istream& operator>> (std::istream& input, MyInt& intObject);

public:
   MyInt(int n = 0);		// first constructor
   MyInt(char const* s);
   ~MyInt();
   MyInt (const MyInt& intObject);
   unsigned int getValue() const;
   unsigned int getCapacity() const;
   // be sure to add in the second constructor, and the user-defined 
   //  versions of destructor, copy constructor, and assignment operator

private:
    unsigned int collection = 2;
    unsigned int value;
    unsigned int test;
    char* array = new char[collection];
   // member data (suggested:  use a dynamic array to store the digits)

};