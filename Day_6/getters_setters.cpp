#include <iostream>

class Stove{
//public: // anything under public is accessible from outside the class - people can change these variables
//     int temperature = 0;
    private: 
        int temperature = 0; // is now private within this context - to edit, make a GETTER method

    public: // put the getter and setter methods under public so ppl outside can access these methods
        Stove(int temperature) {
            setTemp(temperature);
        }


        int getTemp() {
            return temperature;
        }

        void setTemp(int temperature) { // can add additional logic/checks for setters to make sure value entered is valid
            if (temperature < 0) {
                this->temperature = 0; // temp minimum is 0
            }
            else if (temperature >= 10) {
                this->temperature = 10; // temp maximum us 10
            }
            else {
                this->temperature = temperature; // temp can be anywhere from 0->10
            }
        }

};

int main() {
    /*
        Abstraction = hiding unnecessary data from outside a class
        GETTER = function that makes a private attribute READABLE
        SETTER = function that makes a private attribute WRITEABLE
    
    */

    Stove stove(4);

    //stove.temperature = 1000000;
    //stove.setTemp(-3);
    //stove.setTemp(11);
    //stove.setTemp(5);
    //stove.setTemp(10);

    std::cout << "The temperature settings is " << stove.getTemp() << '\n';

    // we don't want people changing the temperature attribute in Stove objects

    return 0;
}