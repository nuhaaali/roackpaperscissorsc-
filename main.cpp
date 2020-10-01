#include <stdio.h>
#include<iostream>
int main()

{
    printf("Winning Rules of the Rock paper scissor game as follows; \n"
                                "Rock vs paper->paper wins \n \
                                 Rock vs scissor->Rock wins \n \
                                 paper vs scissor->scissor wins \n");

  
  
    
    printf("Enter choice \n 1. Rock \n 2. paper \n 3. scissor \n");
    int choice;
   
    printf("user turn \n");
	
    printf("enter user choice: ");
    int user_choice;
    std::cin >> user_choice;
    
   String choice_name;
   if(user_choice == 1){
   	printf("choice_name = Rock");

   }
  	else if  (user_choice == 2){
   	printf("choice_name = Paper");
   }
   else{
   	printf("choice_name = Scissor");
   }

   	printf("user choice is: " + choice_name); 
	printf("\n Now its computer turn.......") ;
	
	String comp_choice_name;
	
    if (comp_choice == 1 ){
    	printf("comp_choice_name = Rock");
	}
	else if (comp_choice == 2){
		printf("comp_choice_name = Paper");
	}
	else{
		printf("comp_choice_name = Scissor");
	}
        
          
    printf("Computer choice is: " + comp_choice_name); 
  
    printf(choice_name + " V/s " + comp_choice_name); 
    

	if((user_choice == 1 and comp_choice == 2) or(user_choice == 2 and comp_choice == 1)){
		Printf("Paper wins ", + end = "" );
		result = Paper;
 	}
 	else if ((choice == 1 and comp_choice == 3) or (user_choice == 3 and comp_choice == 1)){
 		printf("Rock wins");
 		result = Rock;
	 }
	 else{
	 	printf("Scissor wins");
	 	result = Scissors;
	 }
	 
 	//printng either user or computer wins	
	 if(result = choice_name){
	 printf("user wins");
	}
	else {
		printf("computer wins");
	}
	
	String ans;
	printf("do you want to play again ?  Y/N");
	
	if(ans == n){
			false;
	}
	else(ans == N){
		false;
	}
}
	
