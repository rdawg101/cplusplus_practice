#include <iostream>

// will create namespace out of the function 
// if we don't explicity state namespace we're using, we will use local version of an entity

namespace first {
    int x  = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // namespace => provides a solution for preventing name conflicts in large projects
    // each entity needs a unique name
    // a namespace allows for identically named entities as long as the namespaces are different!!!!
    using namespace first; // this will allow us to use the entities in the first namespace without having to prefix them with first::

    //using namespace std; // this will allow us to use the entities in the std namespace without having to prefix them with std::
    // ^ HOWEVER std namespace has HUNDREDS of entities (very likely to run into naming conflict) 
    // can just do the following instead
    using std::cout;
    using std::string;

    // will not be using namespace std, but if you see it in the future, it is just to allow us to use the entities in the std namespace without 
    // having to prefix them with std::

    int x = 0;
    //int x = 1; // this will cause an error, because we cannot have two variables with the same name in the same scope - error: redefinition of 'x'

    // prefix with namespace name and scope resolution operator (::) to specify which version of x we want to use - uses local by default though
    //std::cout << x << '\n'; // this will print 0, because we are using the local version of x, which is 0
    //std::cout << first::x << '\n'; // this will print 1, because we are using the version of x that is in the first namespace, which is 1
    //std::cout << second::x << '\n'; // this will print 2, because we are using the version of x that is in the second namespace, which is 2

    string name = "Ronald";
    cout << name << '\n'; 
    // ^ notice how we don't need the std:: prefix for cout and string, because we used the using declaration to bring them into the global namespace, 

    return 0;
}