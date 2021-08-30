#include<stdio.h>
int main(){
    int valueCheck = 1;
    
    do{
		//Using these integers as checks to see if the user has entered a valid value.
        int startRange = 1;
        int endRange = 1;
        int fizz = 0;
        int buzz = 0;
        int startCheck = 1;
        int endCheck = 1;
        
		//While startCheck is 1, ask the user to enter a start of range value greater than 0.
        do{
            printf("Enter start of range: ");
            scanf("%d", &startRange);
            if(startRange < 1){
                continue;
            }
            startCheck = 0;
        } while(startCheck);
        
		
		//While endCheck is 1, ask the user to enter a end of range value greater than 0.
        do{
            printf("Enter end of range: ");
            scanf("%d", &endRange);
            if(endRange < 1){
                continue;
            }
            endCheck = 0;
        } while(endCheck);
        
		//Check to see if the start of the range is greater than the end, then ask again.
        if(startRange > endRange){
            continue;
        }
        
		//Ask the user for a fizz value
        do{
            printf("Enter \'Fizz\' value: ");
            scanf("%d", &fizz);
        } while(fizz < 0);
        
		//Ask the user for a buzz value
        do{
            printf("Enter \'Buzz\' value: ");
            scanf("%d", &buzz);
        } while(buzz < 0);
		
		//prinf("Test");
		
        printf("\n");
		
		//Use a for loop to go through the range of startRange and endRange
        for(int i = startRange; i <= endRange; i++){
			//If the integer is divisble by fizz, then print fizz
            if (i % fizz == 0){
				//printf("1");
                printf("Fizz");
            }
            //If the integer is divisble by buzz, then print buzz
            if (i % buzz == 0){
				//printf("2");
                printf("Buzz");
            }
            //If the integer is divisble by both, then print fizzbuzz
            if(i % fizz == 0 || i % buzz == 0){
                printf("\n");
                continue;
            }
            //printf("Should be number");
            printf("%d\n", i);
            
        }
        break;
    } while(valueCheck);
	//End of program
    return 0;
}
