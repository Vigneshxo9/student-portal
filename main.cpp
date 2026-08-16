#include <iostream>
#include <string>

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}
void printPortalStatus() {
    std::cout << "Student Portal is ready for development." << std::endl;
}
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printWelcomeMessage();
    greetUser();
    printPortalStatus();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;

    return 0;
}