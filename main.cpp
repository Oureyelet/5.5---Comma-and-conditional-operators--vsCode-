#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    int x { 1 };
    int y { 2 };

    cout << (++x, ++y) << '\n' << endl; //increment x and y, evaluates to the right operand

    /*
    In almost every case, a statement written using the comma operator would be 
    better written as separate statements. For example, the above code could be written as:
    */
    int x1{ 1 };
    int y1{ 2 };
 
    ++x1;
    cout << ++y1 << '\n' << endl;

    /*-----------------------------
    Comma as a separator
    -----------------------------*/

    /*
    void foo(int x, int y)  //Comma used to separate parameters in function definition
    {
        add(x, y);  //Comma used to separate argument in function call
    
        constexpr int z{ 3 }, w{ 5 }; //Comma used to separate multiple variables being defined on 
                                     //the same line (don't do this)
    }
    */


    /*-----------------------------
    The conditional operator
    -----------------------------*/

    /*
    Operator 	    Symbol 	    Form 	        Operation
    Conditional 	?: 	        c ? x : y 	    If c is nonzero (true) then evaluate x, otherwise evaluate y
    */

    /*
    The ?: operator takes the following form:

    (condition) ? expression1 : expression2;

    (If condition evaluates to true, then expression1 is executed, otherwise expression2 is executed. 
    Note that expression2 is not optional.)
    */

    //Consider an if/else statement that looks like this:

    int p{5};
    int o{7};
    
    if (p > o)
        cout << "p is larger";
    else
        cout << "o is larger" << '\n';

    // can be rewritten as:
    cout << "larger is p: " << boolalpha << (p > o) ? p : y;
    cout << endl;

    /*--------------------------------------------------
    The conditional operator evaluates as an expression
    ---------------------------------------------------*/

    constexpr bool inBigClassroom { false };
    constexpr int classSize { inBigClassroom ? 30 : 20 };
    cout << "The class size is: " << classSize << '\n';


    /*--------------------------------------------------
    The type of the expressions must match or be convertible
    ---------------------------------------------------*/

    /*

    int main()
        {
	        constexpr int x{ 5 };
	        std::cout << (x != 5 ? x : "x is 5"); // won't compile
 
	r       eturn 0;
        }

    The above example won’t compile. One of the expressions is an integer, and the other is 
    a string literal. The compiler will try to find a way to convert the string literal to an integer, 
    but since it doesn’t know how, it will give an error. In such cases, you’ll have to use an if/else.

    */  

    

    return 0;
}