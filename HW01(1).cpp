///////////////
//Ian Fish
//CS172
//HW1
//////////////

#include<iostream>
#include<ctime>  //included for time()
#include<cstdlib> //included for rand() and srand()
#include<cmath>  //included for sqrt()
#include<string> //included for string and getline()
using namespace std;

void ex02(); 
void ex03(); 
void ex04();
int doubleNumber(int number);
int add(int number1, int number2);
int addOne(int& parameter);
void ex05();
int arrayDisplay(int array1[], int size);
int arrayValue(int array2[], int size);

int main() {
	ex02();
	ex03(); 
	ex04();
	ex05();
	return 0;
}

//EX01_01
void ex02() {
	//a)
	bool hasPassedTest = true; //hasPassedTest is now set to true
	
	//b)
	srand(time(0));   //makes x and y change everytime the program in run.
	double x = rand();//random number generatod for x using the rand() function.
	double y = rand();//random number generated for y using the rand() function.
	bool xGrtrThanY; //will end up storing the answer to the question below.
	cout << "x is greater than or equal to y: "; //askes question to be responded to by the if else statement
	if (x >= y) {
		xGrtrThanY = true; //stored for possible future use
		cout << "true" << endl; //responds true if true
	}
	else {
		xGrtrThanY = false; //stored for possible future use
		cout << "false" << endl; //responds false if false
	}

	//c)
	double numberOfShares;
	bool sharesLessThan100; //holds whether or not the number of shares is less than 100 for any future use
	cout << "Enter a number of shares: " << endl;
	cin >> numberOfShares;
	cout << "Number of shares is less than or equal to 100: "; //asks a true or false question
	if (numberOfShares <= 100) {
		sharesLessThan100 = true; //for any future reference to the amount of shares
		cout << "true" << endl; //responds true if true
	}
	else {
		sharesLessThan100 = false; //for any future reference to amount of shares
		cout << "false" << endl; //responds false if false
	}

	//d)
	double boxW; //width of a box
	double bookW;//width of a book
	cout << "Enter box width:" << endl;
	cin >> boxW;
	cout << "Enter book width:" << endl;
	cin >> bookW;
	double divideDec = boxW / bookW; //dividing box width by book width allowing for decimals.
	int divideInt = boxW / bookW; //dividing and resulting in an integer, cutting off any decimals.
	bool divisible; //holds whether the box width is divisible by book width
	cout << "Box width is evenly divisible by the book width: "; //asking a question that the following if else statement will answer.
	if ((divideDec - divideInt) == 0.0) {  //checking if there were any decimals on the resulting product from divididing box width by book width.
		cout << "true" << endl; //if there were no decimals, box width is evenly divisable by book width and true is displayed to the screen.
		divisible = true; //sets divisible to true for any posible future use
	}
	else {
		cout << "false" << endl; //if there were resulting decimals, false is displayed as an answer
		divisible = false;//divisible is set to false
	}
	//e)
	double shelfLife; //shelf life of a box of chocolate
	double outsideTemp; //outside temperature at the moment
	cout << "Input the shelf life of a box of chocolate:" << endl; //prompts for input of shelf life of chocholate
	cin >> shelfLife; //input stored in shelfLife
	cout << "Input the outside temperature:" << endl; //prompts for input of outside temperature
	cin >> outsideTemp; //input stored in outsideTemp
	if (outsideTemp >= 90.0)
		shelfLife = shelfLife - 4.0;  //removes four from shelf life if it is hotter than 90.
}

//EX01_02
void ex03() {
	//a)
	double area;
	cout << "Enter the area of a square:" << endl; //promts user for area of square
	cin >> area;
	double side = area / 2; //calculates the side length of the square
	double diagonal = sqrt((side * side) + (side * side)); //uses the side length and the pythagorean theorem to calculate diagonal
	cout << "The length of the diagonal is: " << diagonal << endl; //displays diagonal length to screen

	//b)
	char answer;
	cout << "Enter a yes or no (y or n):" << endl; //asks for a y or an n to be inputed
	cin >> answer;
	if (answer == 'y') {
		cout << "yes\n"; //if y is inputed yes is displayed
	}
	else if (answer == 'n') {
		cout << "no\n"; //if n is inputed no is displayed
	}
	else {
		cout << "INVALID INPUT\n"; //if neither y nor n was inputed, an INVALID INPUT message is displayed
	}

	//c)
	char tab = 9; //the tab character is 9 on the ascii table to the char variable called tab was initialized to the tab character.

	//d)
	string mailingAddress;
	cin.ignore(); //prevents any leftover characters from interfering with getline
	cout << "Enter mailing address: \n";
	getline(cin, mailingAddress); //stores input in mailingAddress allowing for spaces

	//e)
	string emptyString = ""; //string initialized to be empty
}

//EX01_03
void ex04() {
	//a)
	int number;
	cout << "Enter a number between 1 and 10: \n";
	do {
		cin >> number;
		if (number > 10 || number < 1) {
			cout << "INVALID INPUT. ENTER NEW NUMBER:\n"; //prompts user to enter new number if number entered is not within specified range
		}
	} while (number > 10 || number < 1); //stops loop when valid number is entered.

	//b)
	for(int i = 1; i <= number; i++){
		cout << i*i*i << "   ";   // for loop multipies every number between 1 and inputed number and displays it to the screen.
	}
	cout << endl;

	//c)
	int n = 0;
	do{
		cout << "* ";  //displays an asterisks
		n = n + 1;
	}
	while (n < number); //stops displaying asterisks when there are as many as the inputed number displayed
	cout << endl;

	//d)
	for(int j = 0; j <= 20; j++){
		cout << 2*j << "  "; //displays all even numbers from 0 to 40, counting 0 as an even number.
	}
	cout << endl;

	//e)
	doubleNumber(number);  //calls doubleNumber() function that is written below and passes the inputed number to it

	//f)
	srand(time(0)); 
	add(rand(), rand());  //calls add() and gives it two random numbers

	//g
	srand(time(0));
	int x = rand(); //intitializes x to a random number
	addOne(x); //addOne() is called and given x
}

//e)
int doubleNumber(int number){ //doubles the number that is passed to it
	return (number * 2); 
}

//f)
int add(int number1, int number2){ //adds two random numbers
	return (number1 + number2); 
}

//g
int addOne(int& parameter){ //adds one to the parameter
	parameter++;
	return (parameter);
}

//EX01_04
void ex05(){
	//a)
	int numbers[5]; //initializes an array with a size of five
	for(int i = 0; i < 5; i++){
		cout << "Enter number " << i + 1 << " of 5 to be stored in an array: " << endl;
		cin >> numbers[i]; //stores inputed number into the array
	}

	//b)
	int sum = 0; //initializes sum to 0 so there is no unwanted value
	int product = 1; //initializes product to 1 so there is no unwanted value
	for(int n = 0; n < 5; n++){
		sum += numbers[n]; //adds number stored in this array slot to sum
		product *= numbers[n]; //multiplies number stored in this array slot by product
	}
	cout << "The sum of all the numbers in the array is "  << sum << endl;
	cout << "The product of all the numbers in the array is " << product << endl;

	//c)
	arrayDisplay(numbers, 5);

	//d)
	arrayValue(numbers, 5);
}

//c)
int arrayDisplay(int array1[], int size){ 
	for(int i = 0; i < size; i++){ 
		cout << array1[i] << "  "; //displays the number stored in this array slot to the screen
	}
	cout << endl;
	return 0;
}

//d)
int arrayValue(int array2[], int size){
	int value;
	bool valuePresent = false; //variable representing whether or not the inputed value is present, initialized to false
	cout << "Input a value: " << endl; //prompts user for a value
	cin >> value;
	for(int i = 0; i < size; i++){
		if(value == array2[i]){ //checks if inputed value is in current array slot
			cout << "Array contains inputed value." << endl; //tells user that inputed value is in the array
			valuePresent = true; //changes valuePresent to true if inputed value is in array
		}
	}
	if(valuePresent == false){ //if valuePresent has not been changed, message displaying that the array does not contain value is displayed
		cout << "Array does not contain inputed value." << endl;
	}
	return 0;
}