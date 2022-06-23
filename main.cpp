#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int myAge = 3;
    int counter = 0;
    int volume = 10;
    float lenght = 10.5f;
    float width = 5.5f;
    float height = 8.1f;
    bool isTrue = true;
    bool isFalse = false;
    bool lastCall = false;
    double attack = 0.2;
    double decay = 1.8;
    double release = 3.1;
    char firstLetter = 'a';
    char secondLetter = 'b';
    char lastLetter ='z';
    unsigned int player = 5;
    unsigned int enemy = 20;
    unsigned int gameLevel = 2;
    

    
    ignoreUnused(number, myAge, counter, volume, lenght, width, height, isTrue, isFalse, lastCall, attack, decay, release, firstLetter, secondLetter, lastLetter, player, enemy, gameLevel); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addNumbers(int numOne, int numTwo)
{
    ignoreUnused(numOne, numTwo);
    return{};
}
/*
 2)
 */
void setVolumeLevel(int volumeLevel)
{
    ignoreUnused(volumeLevel);
}
/*
 3)
 */
bool shouldIGoOrShouldIStay(int numberOfDrinks, bool isMusicGood)
{
    ignoreUnused(numberOfDrinks, isMusicGood);
    return{};
}
/*
 4)
 */
void playTrack(int trackNr, bool cdInside)
{
    ignoreUnused(trackNr, cdInside);
}
/*
 5)
 */
void makeCoffee(int numberOfCups = 2, int amountWater = 10, bool extraHot = true)
{
    ignoreUnused(numberOfCups, amountWater, extraHot);
}
/*
 6)
 */
int feedCat(int catAge = 5, int catWeight = 5, int foodType = 1)
{
    ignoreUnused(catAge, catWeight, foodType);
    return{};
}
/*
 7)
 */
float getVolume(double lenght, double width, int height = 10)
{
    ignoreUnused(lenght, width, height);
    return{};
}
/*
 8)
 */
double getEnvelope( double attack, double decay, double release = 5.1)
{
    ignoreUnused(attack, decay, release);
    return{};
}
/*
 9)
 */
float getFilter (float cutoff, float resonance = 5.1f, float drive = 3.1f)
{
    ignoreUnused(cutoff, resonance, drive);
    return{};
}
/*
 10)
 */
double calculatePrice( double price, double tax = 1.19)
{
    ignoreUnused(price, tax);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto sum = addNumbers(2, 7);
    //2)
    setVolumeLevel(100);
    //3)
    auto questionOfTheDay = shouldIGoOrShouldIStay(10, true);
    //4)
    playTrack(1, false);
    //5)
    makeCoffee(1, 10, true);
    //6)
    auto catFeeder = feedCat(1, 10, 2);
    //7)
    auto calculateVolume = getVolume(2.5, 2.8, 5);
    //8)
    auto auxEnvelope = getEnvelope(0.2, 2.5, 3.6);
    //9)
    auto filterA = getFilter(25.3f, 5.5f, 4.2f);
    //10)
    auto priceCalculation = calculatePrice(1.99, 1.19);
    
    ignoreUnused(carRented, sum, questionOfTheDay, catFeeder, calculateVolume, auxEnvelope, filterA, priceCalculation);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
