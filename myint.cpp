#include <iostream>
#include "myint.h"

using namespace std;

int main(){
    MyInt x = 12345;
    MyInt y = "6000000000000";
}
MyInt operator+ (const MyInt& x, const MyInt& y){
    unsigned int storage;
    storage = x.test + y.test;
    return storage;
}
MyInt operator* (const MyInt& x, const MyInt& y){
    unsigned int storage;
    storage = x.test * y.test;
    return storage;
}

ostream& operator<< (ostream& os, MyInt& intObject){
    os << intObject.test;
    return os;
}
istream& operator>> (istream& input, MyInt& intObject){
    input >> intObject.test;
    return input;
}

bool operator< (const MyInt& x, const MyInt& y){
    if (x.test < y.test){
        return true;
    }
    else{
        return false;
    }
}
bool operator> (const MyInt& x, const MyInt& y){
    if (x.test > y.test){
        return true;
    }
    else{
        return false;
    }
}
bool operator>= (const MyInt& x, const MyInt& y){
    if ((x.test > y.test) || (x.test == y.test)){
        return true;
    }
    else{
        return false;
    }
}
bool operator<= (const MyInt& x, const MyInt& y){
    if ((x.test < y.test) || (x.test == y.test)){
        return true;
    }
    else{
        return false;
    }
}
bool operator== (const MyInt& x, const MyInt& y){
    if (x.test == y.test){
        return true;
    }
    else{
        return false;
    }
}
bool operator!= (const MyInt& x, const MyInt& y){
    if (x.test != y.test){
        return true;
    }
    else{
        return false;
    }
}
MyInt::MyInt(int n){
    if (n < 0){
        std::cout<<"Negative number, initialized to 0 \n";
        test = 0;
    }
    else{
        //Need to account for the copy constructor when using a regular
        //integer, rather than a char
        test = n;
    }
}
MyInt::MyInt(char const* s){
        unsigned int size = strlen(s);
        bool check = false;
        for (int i = 0; i < size; i++){
        if((s[i] != '0') && (s[i] != '1') && (s[i] != '2') && (s[i] != '3') && (s[i] != '4') && (s[i] != '5') && (s[i] != '6') && (s[i] != '7') && (s[i] != '8') && (s[i] != '9')){
            std::cout<<"Invalid Input, initializing to 0 \n";
            value = 0;
            check = true;
        }
    }
        if (check == false){
            collection = size;
            strcpy(array, s);
            test = strtoul(s, NULL, 10);
            cout<<array<<"\n";
        }
}

MyInt::~MyInt(){
    delete [] array;
}
MyInt::MyInt(const MyInt& intObject){
    array = new char[intObject.getCapacity()];
    for( int i = 0 ; i < intObject.getCapacity(); i++){
        array[i] = intObject.array[i];
    }
     cout<<intObject.getCapacity()<<"\n";
}
unsigned int MyInt::getValue() const
{
    return value;
}
unsigned int MyInt::getCapacity() const
{
    return collection;
}

int C2I(char c)
// converts character into integer (returns -1 for error)
{
   if (c < '0' || c > '9')	return -1;	// error
   return (c - '0');				// success
}

char I2C(int x)
// converts single digit integer into character (returns '\0' for error)
{
   if (x < 0 || x > 9)		return '\0';	// error
   return (static_cast<char>(x) + '0'); 	// success
}

// Add in operator overload and member function definitions 
