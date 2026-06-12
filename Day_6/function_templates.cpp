#include <iostream>


/*
int max(int x, int y) {
    return (x > y) ? x : y;
}

double max(double x, double y) {
    return (x > y) ? x : y;
}

char max(char x, char y) {
    return (x > y) ? x : y;
}
*/

template <typename T, typename U> // <-- here is the template parameter declaration

// to make a function template, instead of prefixing a function name with a dtype, use 'T'
// need to add a template parameter declaration before using 'T' though
//T max (T x, T y) {
//    return (x > y) ? x : y;
//}

// 'auto' keyword => compiler will deduce what the return type should be 
// second typename U allows up to 2 different dtypes to be accepted for the arguments
auto max(T x, U y) {
    return (x > y) ? x : y;
}
// this will work for all 3 dtypes we made overloaded functions for above - however, it will only work for arguments of the SAME DATA TYPE
// will NOT work if you enter an int x and double y, vice versa
// we can add another template name for this scenario (U)

int main() {
    /*
        function templates = describes what a function looks like,
        Can be used to generate as 
        many overloaded functions 
        as needed - each using 
        different data types
    */
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.2) << '\n'; // gets truncated, decimals aren't outputted since max fxn returns an int
    // would usually need to make an overloaded function (same name function but different dtype for parameters and different dtype output)
    std::cout << max('1', '2');

    // but it's a lot of work making 3 different overloaded functions that practically do the same thing, just for different dtypes

    return 0;
}