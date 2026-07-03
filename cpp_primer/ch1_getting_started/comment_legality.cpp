#include <iostream>


int main() {
    std::cout << "/*";
    std::cout << "*/";
    // this one won't work, reads the first /**/ and treats everything after as if it weren't a comment
    // std::cout << /* "*/"  */; 

    // no nested comments allowed, reads the inner one on the right but not the outer comment notation on that side
    //std::cout << /* "*/"   /* "/**/" */;


    return 0;
}