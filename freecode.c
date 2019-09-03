#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//the first one triangle example
/* 
int main()
{
	printf("   /|\n");
	printf("  / |\n");
	printf(" /  |\n");
	printf("/___|\n");
	
	return 0;
}
*/

// from the second one 21:09 variables
/*
int main()
{
	char characterName[] = "Tom";
	int characterAge = 69;
	
	printf("There once was a man named %s\n", characterName);
	printf("he was %d years old.\n", characterAge);
	
	characterAge = 30;
	printf("He really liked the name %s\n", characterName);
	printf("but did not like being %d\n", characterAge);
	
	return 0;
}	
*/

// from the third one 32:25 data types
/*
int main()
{
	int age = 40;
	double gpa = 3.6;
	char grade = 'B';
	char phrase[] = "Giraffe Academy"
	
	
	return 0;
}
*/

//from the fourth one 38:32 printf 
/*
int main()
{
	int favNum = 90;
	char myChar = 'i';
	float favFloat = 500.98754;
	
	printf("My favourite %c is %f", myChar, favFloat);
	printf("\nMy favourite %s is %d", "number", favNum);
	printf("\nMy favourite %s is %f", "number", 500.98754);
	return 0;
	
}
*/

//from the fifth one 45:22 Working with numbers
/*
int main()
{
	int num = 6;
	float flott = 36.656; //example used for the ceil and floor funcs
	printf("%f", 8.9);
	printf("\n%f", 5.0 +4.5);
	printf("\n%f", 5 +4.5); //returns floating point number after int implicit conversion
	printf("\n%d", 5/4); //returns an int due to the fact that there are 2 ints
	printf("\n%f", 5/4.0);//returns the true value of 1.25 since there is a float present
	//printf("\n%f", 5/4);//returns correct float value though there is a warning about 2 ints
	printf("\n%d", num);
	printf("\n%f", pow(2,3) ); //premade function for power. 2^3
	printf("\n%f", sqrt(36) ); //premade function for square root on argument.
	//sqrt, pow func works though the compiler complains about needing math.h or declaring.
	printf("\n%f", ceil(flott) );
	printf("\n%f", floor(flott) );
	//compilation fails here: freecode.c:(.text+0x145): undefined reference to `floor'
	//freecode.c:(.text+0x12a): undefined reference to `ceil', added math.h as a result
	//still didn't work, so i searched online to see it was a linker error.
	//after seeing that the static library i needed libc6-dev was already installed, i just 
	//did gcc freecode.c -lm, using the -lm linker instead of the ld one i guess? then did ./a.out
	//does not work in terminal, changed "build" in the build command by adding -lm to rectify
	
	return 0;	
}
*/

//from the sixth one 52:22 Comments
/*
int main()
{
	
	//This prints out text
	//best practise of using comments only when abs necessary...rip
	printf("Comments are fun");
	
	return 0;
}

*/

//from the seventh one 56:00 Constants
/*
int main()
{
	int num = 5;
	printf("%d\n", num);
	num = 8;
	printf("%d", num); //num was mutable: output 5 (newline) 8
	
	const int NUM2 = 5; //best practise all caps on const
	printf("%d\n", NUM2);
	num = 8; //this does not throw an error
	printf("%d", NUM2); //this does not print
			
	printf("Hello"); //this is a const too, since is not mutable at all
	printf("%d", 90); //also a const. no way to change these unless we do so manually
	return 0;
}
*/

//from the eigth one 1:00:13
/*
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age); //(%data type, &variable) use of a pointer
	printf("You are %d years old", age);
	
	double gpa;
	printf("\nEnter your gpa: ");
	scanf("%lf", &gpa);
	printf("Your gpa is %f", gpa);
	
	//There is a problem with doing char scanf as a third input. No 
	//comp/build errors, but the printf is just "Your grade is" and %c is not stored.
	//This does not occur when grade is the only input required in the program
	char grade;
	printf("\nEnter your grade: ");
	scanf(" %c", &grade); //Seems that scanf() has a buffer problem which 
	//removes the first char of any input due to the newlines in code. This requires a 
	//leading space " %c) which will be erased instead of %)
	printf("Your grade is %c", grade);
	
	char name[20];
	printf("\nEnter your name: ");
	//scanf("%s", name); //does not need & for string
	fgets(name, 20, stdin); //second param is how many chars to limit to, third is input
	printf("Your name is %s", name);//fgets skips the input, scan works fine after removing \n from %s
	
	
	return 0;
}
*/

//from the ninth one 1:12:10 basic calculator
/*
int main()
{
	double num1;
	double num2;
	printf("Enter first number: ");	
	scanf("%lf", &num1);
	printf("Enter the second number: ");
	scanf("%lf", &num2);
	
	printf("Answer is %f", num1 + num2);
	return 0;
}
*/

//from the tenth one 1:17:45 Building a madlibs game
/*
int main()
{
	char color[15];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];
	
	printf("Enter a color: ");
	scanf("%s", color);	
	printf("Enter a plural-noun: ");
	scanf("%s", pluralNoun);	
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);
	
	
	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun );
	printf("I love %s %s \n", celebrityF, celebrityL);
	//breaks if user enters only a first name
	
	return 0;
}
*/

//from the eleventh one 1:26:31 Arrays
/*
int main()
{
	//for the given array
	//int luckyNums[] = {4, 8, 15, 16, 23, 42};
	//luckyNums[1] = 220;
	//printf("%d", luckyNums[1]);
	
	//for an unknown array
	int luckyNumbs[10];
	luckyNumbs[1] = 80;
	luckyNumbs[0] = 90;
	printf("%d", luckyNumbs[0]);
	return 0;
}
*/

//from the twelvth one 1:36:45 Functions
/*
int main()
{
	
	sayHi("Nadim", 22); //this has warnings of conflicting types for sayHi and previous implicit dec. still compiles and runs.

	return 0;
}

void sayHi(char name[], int age)
{
	printf("Hello %s, you are %d", name, age);	
}
*/

//from the thirteenth one at 1:45:36 Return statements
/*
//functions that return need to be defined before the main function.

//double cube(double num); this is a prototype, which can be used if function was placed below main.

double cube(double num){
	
	return num*num*num;
	printf("placeholder"); //this will never be executed as return breaks out of function.
}

int main(){
	
	printf("Answer: %f", cube(3.0));
	
	return 0;
}
*/

//from the fourteenth one at 1:53:22 if statements
/*
int max(int num1,  int num2, int num3){
	int result;
	
	if(num1 >=num2 && num1>=num3){
		result = num1;
	}
	else if(num2>=num1 && num2>=num3){
		result = num2;
	}
	else{
		result = num3;
	}
	
	return result;
}

int main()
{
	
	//printf("%d", max(1,2,3));
	
	if(3 > 2 || 2 > 5){
		printf("True"); //example of || "or" operand. only one needs to be true
	}
	//other operands !negation etc were shown but simple.
	return 0;
}
*/

//from the fifteenth one at 2:07:18 Building a better calculator
/*
int main(){
	
	double num1;
	double num2;
	char op;
	
	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op); //here is the problem we faced earlier!!!
	printf("Enter a second number: ");
	scanf("%lf", &num2);
	
	if(op == '+'){
		printf("%f", num1 + num2);
	}
	else if(op == '-'){
		printf("%f", num1 - num2);
	}
	if(op == '/'){
		printf("%f", num1 / num2);
	}
	if(op == '*'){
		printf("%f", num1 * num2);
	}
	else{
		printf("Invalid operator"); //TODO this seems to print even after a valid answer returns
	}
	
	
	
	
	return 0;
}
*/

// from the sixteenth on at 2:14:52 Switch statements
/*
int main(){
	
	char grade = 'C';
	
	switch(grade){
		case 'A':
			printf("You did good fam");
			break;
		case 'B':
			printf("You did ok");
			break;
		case 'C':
			printf("You did poorly");
			break;
		case 'D':
			printf("You did very bad");
			break;
		case 'F':
			printf("You failed");
			break;
		default:
			printf("Invalid Grade");
			break;
		
	}
	
	return 0;
}
*/

//from the seventeeth one at 2:21:26 Structs
 /*
struct Student{ //caps on structs as best practise
	char name[50]; //can hold 50 characters maximum
	char major[50];
	int age;
	double gpa;
};

int main(){
	
	struct Student student1; //created a container of Student called student1
	student1.age = 22; //assigns a 22 for the age in student1
	student1.gpa = 3.6;
	//student.name = "asdh" does not work as string is an array
	strcpy( student1.name, "Nadim");
	strcpy( student1.major, "Software Engineering");
	
	struct Student student2; 
	student1.age = 22; 
	student1.gpa = 4.2;
	strcpy( student1.name, "Oscar");
	strcpy( student1.major, "Memeology");
	
	printf("%d", student2.gpa);
	
	return 0;
}
*/

//from the eighteenth one 2:29:45 While loops
/*
int main(){
	
	int index = 1;
	//while(index <= 5){
		//printf("%d\n", index);
		//index++;
	//}
	do {
		printf("%d\n", index);
		index++;
	}while(index<=5) //checks conditional after
	
	
	return 0;
}
*/

// from the nineteenth one 2:37:47 building a guessing game
/*
int main(){
	int secretNumber = 5;
	int guess; //input has not been guessed yet.
	int guessCount = 0; //number of guesses, number of loops
	int guessLimit = 3;
	int outofGuesses = 0;
	
	while(guess != secretNumber && outofGuesses == 0){ //make sure that they still have guess
		if(guessCount < guessLimit){ //only executes if the user has guesses left
			printf("Enter your guess: ");
			scanf("%d", &guess); //stores input from user as guess on each loop
			guessCount++;
		}
		else {
			outofGuesses = 1; //bool-like to control/notify us that the user has lost
		}
	}
	
	//to make sure that scenario where user breaks out of the loop, need conditional
	
	if(outofGuesses == 1){
		printf("out of guesses");
	}else{
		printf("You win");
	}
	
			 
	
	return 0;
	
	
}
	

*/

//from the twentieth one 2:50:12 For Loops
/*
int main(){
	
	//using a while loop for long-ways
	int i = 1;
	
	while(i<=5){ //i is simply a marker for the current iteration of the loop
		printf("%d\n", i);
		i++;
	}
	
	//for-loops as a functionally same and condensed alternative function
	
	int j = 6;
	
	for(j; j<=10; j++){ //contains the iteration variable, loop condition and step
		printf("%d\n", j); //code to execute
	}
	
	//using for-loops to print the contents of an array
	
	int luckyNums[] = {4,8,15,16,23,42}; //array to loop in execution loop
	int k; //iteration variable
	
	for(k=0; k<6; k++){
		printf("%d\n", luckyNums[k]);
	}
	
	
	return 0;
}
*/

//from the twenty-first one 2:59:06, 2D Arrays and Nested Loops
/*
int main(){
	
	//Top level has 3 elements (number of arrays), bottom layer (each lower array) has 2 elements
	
	int nums[3][2] = {
					{1,2}, //first element of the array
					{3,4}, //second element of the array
					{5,6}  //third element of the array
					};
	
	//printf("%d", nums[2][0]); //gets the 1st element of the 3rd element(which is the {5,6} array)
	
	//nested for loops
	int i, j;
	for(i=0; i<3; i++){ //happens 3 times, for each array element
		//each time above for loop occurs, this for loop goes through each j element in the selected i array from above.
		for (j=0; j<2; j++){ 
			printf("%d,", nums[i][j]); //prints the value of the current array element (i)index and internal element (j) index. 
		}
		printf("\n");
	}
	
	return 0;
	
}
*/

// 3:09:11, Memory Addresses
/*

int main(){
	
	int age = 30; //this value of 30 will be stored somewhere in Ram. Same as below.
	double gpa = 3.4; //These values have a memory address where they are physically stored
	char grade = 'A'; 
	
	//%p notates pointer value, & is the physical address of the variable.
	//printf("%p", &age); //simple example
	
	printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
	
	return 0;
}
*/

// 3:17:22 Pointers
/*
int main(){
	
	int age = 30; //an integer variable which is storing an integer
	
	// a pointer variable therefore needs a physical pointer value .i.e a physical address.
	// this is a memory address of another variable which exists in this program, since ram is cleared.
	
	int * pAge = &age; // * denotes a pointer, starting a var with p<variable> is a convention.
	// as follows
	
	double gpa = 3.4;
	double * pgpa = &gpa; //pointer = address of gpa || pgpa = &gpa
	
	char grade = 'A';
	char * pgrade = &grade; // .:. pgrade = &grade
	
	
	printf("age's memory address: %p\n", &age); //&age is a type of data that is a memory address. it is a pointer.
	
	printf("pAge is %p, pgpa is %p, pgrade is %p", pAge, pgpa, pgrade);
	
	
	return 0;
}
*/

// 3:27:42 Dereferencing pointers
/*
int main(){
	
	int age = 30;
	int *page = &age;
	
	// Using * on a pointer variable dereferences it, which returns the value associated to an address
	
	
	printf("pointer is: %p.\ninteger is %d.\n", page, *page);
	
	// for a value, & will return the memory address, and * will find the value. so you can chain them.	
	printf("pointer is: %p.\ninteger is %d.", &*&age, *&*&age);
	
	return 0;
}
*/

// 3:32:39 Writing Files 
/*
int main(){
	
	// r mean reads, w means write or overwrite, a means append.
	
	//pointer var which stores the memory address of a file
	//FILE * fpointer = fopen("employees.txt", "w"); //writes a file called employees.txt, as in creates a file of that name
	
	//prints to file
	//fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nBeter, Sysadmin");
		
	//change fopen arg to a so now appending info.
	FILE * fpointer = fopen("employees.txt", "a");
	fprintf(fpointer, "\nJim Sterling: Model");
	
	fclose(fpointer); //closes the file
	return 0;
	
}
*/

// 3:41:53 Reading Files
/*
int main(){
	
	char line[255];
	FILE * fpointer = fopen("employees.txt", "r"); //Selecting read mode from r param
	
	//stores each line in the indices of the line variable. fpointer is incremented too with fgets, so each time it moves to the next line.
	fgets(line, 255, fpointer); //reads file line by line
	
	printf(line);
	return 0;
	
}
*/
