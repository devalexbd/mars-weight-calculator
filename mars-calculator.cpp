//Pulls in from a library. Allows for input and output in terminal.
#include <iostream>

//Declaring the main function
int main(){

    //Declaring and initialising Earth and Mars gravity
    double marsGrav = 3.71;
    double earthGrav = 9.807;

    //Declaring itemWeight
    int itemWeight;

    //Ask user for a weight
    std::cout << "Please enter a weight in kg: ";
    //Allow user to type in weight, assign it to itemWeight
    std::cin >> itemWeight;

    //Declare and initialise marsWeight
    double marsWeight = itemWeight * (marsGrav / earthGrav);

    //Tell the user the marsWeight
    std::cout << itemWeight << "kg on Mars would be: " << marsWeight << "kg!\n";

    //Return 0, program ran successfully
    return 0;
}