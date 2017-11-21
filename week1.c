#include<stdio.h>

int main(){
	
	float number1,number2;
	printf("\nFirst answer:\n\"Hello World!\""); //Question 1
	
	printf("\n\n\nSecond answer:\nPlease give me a number:");//Question 2
	scanf("%f",&number1);
	printf("Please give me another number:");
	scanf("%f",&number2);
	
	
	printf("\n\nThird answer:\nMultiplication:%f",number1*number2);//Question 3
	printf("\nAddition:%f",number1+number2);
	printf("\nSubtraction:%f",number1-number2);
	if(number2==0){
		printf("\nYour 1st number cannot divide by 2nd number because it's 0 ");
	}
	else{
		printf("\nDivision:%f",number1/number2);
	}
	
	printf("\n\n\nFourth answer:\n");//Question 4
	float dolar=3.953, euro=4.643, sterling=5.235, money;
	
	printf("Give me your money(TL):");
	scanf("%f",&money);
	printf("\nYour price %.3f TL = %.3f $, %.3f € ,%.3f £",money,money/dolar,money/euro,money/sterling);
	
	
	
	
	return 0;
}
