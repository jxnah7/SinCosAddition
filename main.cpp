/////////////////////////////////////////////////////////////////////
//
// Name: <Jonah Barrera>
// Due date: 2/14/24
// Class: <CSCI 1470.04>
// Semester: <Spring 2024>
// CSCI 1470 Instructor: <Gustavo Dietrich>
//
// Using your own words describe below what the program does 
// Program Description: 
// This program stores the users input to variables that allow an equation to add cosine and sine of an angle with a precision of 3 decimal places.
/////////////////////////////////////////////////////////////////////

#include <typeinfo>				// to be able to use operator typeid

// Include here all the other libraries that required for the program to compile

#include <iostream>             // allows you to use input/output statements
#include <string>               // allows you to use strings
#include <iomanip>              // allows you to use setprecision/setw
#include <cmath>                // allows you to use cos and sin

using namespace std;            // allows you to shorten naming statements

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))


int main()
{
	// Declares constant PI:3.141592
	
	const double PI = 3.141592;
	
	// Declares variable name that holds text
	
	string name;
	
	// Declares variables alpha,beta,sina,cosb, and total that hold double precision real numbers
	
    double alpha, beta, sina, cosb, total;
    
	// Prompts the user to "Please enter your full name: "
	
	cout << "Please enter your full name: ";
	
	// Reads the full name from keyboard and stores it in the corresponding variable
	
	cin >> name;
	
	// Prompts the user to "Please enter angle alpha: "
	
	cout << endl << "Please enter angle alpha: ";
	
	// Reads the value from the keyboard and stores it in the corresponding variable
	
	cin >> alpha;
	
	// Prompts the user to "Please enter angle beta: "
	
    cout << endl << "Please enter angle beta: ";
    
	// Reads the value from the keyboard and stores it in the corresponding variable
	
	cin >> beta;
	
	// Displays "Thanks ", name
	
	cout << endl << "Thanks " << name << endl << endl;
	
	// Calculates the sine of alpha and the cosine of beta, and stores the results in the corresponding variables
	
    sina = sin(alpha * PI / 180);
    cosb = cos(beta * PI / 180);
    
	// Calculates the total as the addition of the sine and the cosine and stores it in the corresponding variable
	
    total = sina + cosb;
    
	// Formats the output to display the values in fixed format with three decimal digits
	
	cout << fixed << setprecision(3);
	
	// Prints a message like the one below:
	// Using 23 columns displays "sine of alpha: ", using 6 columns displays sina
	
	cout << "\t" << setw(23) << "sine of alpha: " << setw(6) << sina;
	
	// Using 23 columns displays "+ cosine of beta: " , using 6 columns displays cosb
	
	cout << "\t" << setw(23) << "+ cosine of beta: " << setw(6) << cosb;
	
	// Using 30 columns displays "-------"
	
	cout << setw(30) << "-------";
	
	// Using 23 columns displays "total: ",  using 6 columns displays total
	
	cout << setw(23) << "total: " << setw(6) << total;
	
	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(name) == typeid(string));		// Incorrect data type used for name
	test(typeid(alpha) == typeid(1.));			// Incorrect data type used for alpha
	test(typeid(beta) == typeid(1.));			// Incorrect data type used for beta
	test(typeid(sina) == typeid(1.));			// Incorrect data type used for sina
	test(typeid(cosb) == typeid(1.));			// Incorrect data type used for cosb
	test(typeid(total) == typeid(1.));			// Incorrect data type used for total
	if (alpha == 33. && beta == 33.)
		test(fabs(total - 1.384) < 0.0001);		// Incorrect rounding
	if (alpha == 66.45 && beta == 66.45)
		test(fabs(total - 1.317) < 0.0001);		// Incorrect rounding
	if (alpha == 87.33 && beta == 87.33)
		test(fabs(total - 1.046) < 0.0001);		// Incorrect rounding
	if (alpha == 25.76 && beta == 25.76)
		test(fabs(total - 1.336) < 0.0001);		// Incorrect rounding
	if (alpha == 25.89 && beta == 25.89)
		test(fabs(total - 1.337) < 0.0001);		// Incorrect rounding
    return 0;								//  Successful completion
}

