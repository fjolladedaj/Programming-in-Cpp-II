/*
 CH08-320142
 a3 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */


#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
 */

class NaiveString {
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString(); //add the destructor
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char* t) {
    str = new char[strlen(t) + 1];
    strcpy(str, t);
    cout << "First constructor is being called" << endl;
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
 */


NaiveString::NaiveString(const NaiveString& src) {
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout << "The copy constructor is being called" << endl;
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}

//Define the body of destructor to print a message
NaiveString::~NaiveString() {
    cout << "Destructor is being called" << endl;
    delete []str;  //release memory
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}


void NaiveString::print() {
    cout << str << endl;
}

void funcByVal(NaiveString s) {
    cout << "funcbyval() being called" << endl;
    s.update('B', 'C');
    s.print();
}

//Implementation of funcByRef
void funcByRef(NaiveString& s) {
    cout << "funcbyref() being called" << endl;
    s.update('B', 'C');
    s.print();
}


int main(int argc, char** argv)
{
    
    //Create the objects
    
    NaiveString a("aBcBdB");
    a.print();
    cout << "About to call funcbyval()" << endl;
    funcByVal(a);
    a.print();
    
    cout << endl;
    
    NaiveString b("aBcBdB");
    b.print();
    cout << "About to call funcbyref()" << endl;
    funcByRef(b);
    b.print();
    
    cout << endl;
    
    NaiveString c(b); //use copy constructor
    c.print();
    cout << "About to call functionbyval()" << endl;
    funcByVal(c);
    c.print();
    
    cout << endl;
    
    NaiveString d(b); //use copy constructor
    d.print();
    cout << "About to call functionbyref()" << endl;
    funcByRef(c);
    d.print();
}
