#include <stdio.h>
int main(void){

	//A sweet picture of Stinkface the Robot
	printf("\n\n");
        printf("     o  o    \n");
        printf("     |__|    \n");
        printf("    [~  ~]   \n");
        printf(" _____||_____\n");
        printf(" | |Stink | |\n");
        printf(" | | Face | |\n");
        printf(" | |______| |\n");
        printf(" O  |    |  C\n");
        printf("    |____|   \n");
        printf("    | || |   \n");
        printf("    | || |   \n");
        printf("  __| || |__ \n");
        printf("  |___||___| \n");
	
        //Stinkface's introduction and beginning questions
        system("espeak \"I am Stinkface the Robot. Lets do some math.\">/dev/null 2>&1\n\n");
        printf("Hello Jonas.  I am Stinkface the Robot.  I want to do some math with you.\n");

        //Prompt user for the number of questions to answer
        int x,y,answer,question_num,a;
        a = 0;
        system("espeak \"How many questions do you want to answer?\">/dev/null 2>&1");
        printf("How many questions do you want to answer?\n");
        scanf("%d", &question_num);

        //Put that number into the while loop
        while (a < question_num){
                srand(time(NULL));
                x=rand() % 15;  // x is random number in range of 0 - 14 
                y=rand() % 15;  // y is random number in range of 0 - 14 
                
                //Ask the questions
                printf("%d + %d = ",x,y);
                scanf("%d", &answer); 

                if(answer == (x+y)){
                        printf("That's right! Great job.\n");
                        system("espeak \"Good job!\">/dev/null 2>&1");
                }
                else{
                        printf("Not quite right. The correct answer was %d\n", x+y);
                        system("espeak \"Sorry, not right!\">/dev/null 2>&1");
                }
                a++;
        }
        system("espeak \"Let's play again soon!\">/dev/null 2>&1\n");

        return 0;


	//Begin espeak introduction
	//system("espeak \"Hello Jonas, I am Stinkface the Robot.  I want to do some math with you.\">/dev/null 2>&1");
        //printf("\n\nHello Jonas.  I am Stinkface the Robot.  I want to do some math with you.\n"); 
	//Addition portion
	//system("espeak \"Let's practice some addition problems.\">/dev/null 2>&1");
	
	//Subtraction portion
	//system("espeak \"Let's practice some subtraction problems.\">/dev/null 2>&1");

	//Multiplication portion
	//system("espeak \"Let's practice some multiplication problems.\">/dev/null 2>&1");

	//Division portion
	//system("espeak \"Let's practice some division problems.\">/dev/null 2>&1");

	//return 0;

}
