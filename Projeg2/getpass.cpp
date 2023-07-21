#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    char* password = getpass("Enter your password: ");
    std::cout << "Password: " << password << std::endl;

    // Do something with the password



    return 0;
}
