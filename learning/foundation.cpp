// FUNDAMENTAL TYPES AND VARIABLES

char caret_return = '\n';   // Single character
int meaning_of_life = 42 ;  // Integer number
short smaller_int{42};      // Short number (using {})
long bigger_int = 42L;      // Long number (L is a literal)
float fraction = 0.01f;     // Single precision float 
double precise_num = 0.01;  // Double precision float
double scientific = 2.42e-10;   // Double precision float
auto some_int{42};              // Automatic type [int] (using {})
auto some_float = 13.0F;        // Automatic type [float]
auto some_double = 13.0;        // Automatic type [double]
bool this_is_fun = false;       // Boolean: true or false

// Unsigned equivalents for integer types
unsigned int meaning_of_lifel = 42U;    // Unsigned integer number
//unsigned long bigger_int = 42UL;        // Unsigned long number
auto number = 42'232'424ul;         // Automatic type [unsigned long]
auto number_copy = number;          // Automatic type [unsigned long]
unsigned long explicit_copy = number;   

// Difference between Integer Types
#include <limits>
#include <cstdio>

// int main(){
//     std::printf("Min: %d, max: %d\n",
//     std::numeric_limits<int>::min(),
//     std::numeric_limits<int>::max());

//     // Const with references
//     int number = 42;
//     int& ref = number;
//     const int& const_ref = number;
//     std::printf("ref: %d, const_ref: %d\n, ref, const_ref");
//     ref = 0;
//     std::printf("ref: %d, const_ref: %d\n", ref,const_ref);
//     number = 23;
//     std::printf("ref: %d, const_ref: %d\n", ref,const_ref);
    
//     // func();
//     std::printf("%u /n",24U-42U);  // underflow
//     return 0;
// }

// ALWAYS INITIALIZE VARIABLES
int sad_uninitialized_variable; // do not do this!!!
// instead
bool initilizing_is_good = true;
bool set_to_default_value{};   // Initialize to false
int some_int_number{};         // Initialize to 0
double some_double_number{};   // Initialize to 0.0
float some_float_number{};     // Initialize to 0.0F

// ---------------------------------------------
// Uninitialized Variable --> Undefined Behaviour
// Hard to Debug !!!!

// ---------------------------------------------
// const & constexpr | if the value does not change
// run time & compile time
// constexpr --> const --> normal variable 
// run time: from start  ---- compile time: from the moment we call the compiler, binary creation starts

// ---------------------------------------------
// ALL variable live in scopes 
// Global scope (outside of all functions)
// Local scopes (start with { and end with })

constexpr auto kGlobalVariable{42};

void func(){
    std::printf("Global Variable: %d ",kGlobalVariable);
}

// ---------------------------------------------
// Operations
// Arithmetic operations : +, -, *, /, % 
// Comparisons <, > , <=, >=, == return bool
// a += 1 == a = a + 1, same for -=, *=, /=
// Avoid == for floating point types
// Boolean : or || -- and &&  -- not !
// / is integer division: 7/3 == 2
// % is modulo division: 7%3 == 1
// Increment operator: a++ == ++a == a += 1
// Decrement operator: a-- == --a == a -= 1


// ---------------------------------------------
// LIVE CODING 
#include <cstdio>

constexpr int kMeaningOfLife{4 * 10 + 2};

// int main(){
//     auto alternative_meaning_of_life{kMeaningOfLife};
//     alternative_meaning_of_life +=42;
//     std::printf("Meaning of life is: %d \n", 
//         kMeaningOfLife);
//     const auto& barrowed_meaning{alternative_meaning_of_life};
//     std::printf("Alternative meaning of life is: %d \n", 
//         barrowed_meaning);
//     alternative_meaning_of_life = 2002%2001;
//     std::printf("Or meaning of life is: %d \n", 
//         barrowed_meaning);
    
//     double uninitialized_variable;
//     std::printf("Uninitialized variable is: %e \n", uninitialized_variable);

//     return 0;
// }

// Namespaces for variables 
namespace cpp_course {
    // Variables, functions etc.
}

namespace foo{
    namespace bar{

    } // namespace bar
} // namespace 

namespace fare {
    constexpr auto kConstant{44};
}

namespace dore {
    constexpr auto kConstant{22};
}

namespace cpp_course
{
    constexpr auto kNumber{42};
} // namespace cpp_course

namespace cpp_course
{
    constexpr auto kAnotherNumber{kNumber};
} // namespace cpp_course

// unnamed namespaces
namespace {
    constexpr auto fConstant{25};
}

// int main(){
//     using cpp_course:: kAnotherNumber;
//     // never use using namespace <>
//     std::printf("%d \n", fare::kConstant);
//     std::printf("%d \n", dore::kConstant);
//     constexpr auto number{cpp_course::kNumber};
//     constexpr auto kaka{fConstant};
//     std::printf("%d \n", kaka);

//     return 0;
// }

// INPUT/OUTPUT streams in C++
#include <iostream>

// int main(){
//     int some_number{42};
    
//     std::cin >> some_number;
//     std::cout << "number = " << some_number << std::endl;
//     std::cerr << "boring error message" << std::endl;
//     return 0;   
// }

// STL sequence containers in modern C++
// std::pair
#include <iostream>
#include <utility>
 
int main() {
    std::pair pair{"The answer",42};
    std::cout << pair.first << " is " << pair.second  << std::endl;
    return 0;
}