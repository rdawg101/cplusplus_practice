#include <iostream>

int main() {
    int ival = 1024;
    int &refVal = ival; // refVal refers to ival
    //int &revVal2; // ERROR: a reference MUST BE INITIALIZED

    refVal = 2; // assigns 2 to the obj to which refVal refers (ival)
    int ii =  refVal; // same as ii = ival 
    // ^ ii refers to refVal which refers to ival
    // ii => refVal => ival

    // refVal3 bound to obj to which refVal is bound ival
    int &refVal3 = refVal;

    // initializes i from the value in hte obj to which refVal is bound
    int i = refVal; // initializes i to the same value as ival


    return 0;
}