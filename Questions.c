
#include "Questions.h"


int Q1_for(){
	int sum;
	sum = 0;
	//start a loop that iterates from 30 to 1000 (inclusive)
	for (int i = 30; i <= 1000; i++){
		//if the iteration is divisible by 4 it's added to sum
		if (i % 4 == 0){
			sum += i;
		}
	}
	
	// here, we return the calcualted sum:
	return sum;
}

int Q1_while(){
	int sum;
	sum = 0;
	int i = 30;
	//for as long as i is <= 1000 perform loop statements
	while (i <= 1000){
		//if the iteration is divisible by 4 it's added to sum
		if (i % 4 == 0){
			sum += i;
		}
		i ++;
	}

	// here, we return the calcualted sum:
	return sum;
}

int Q1_do(){
	int sum;
	sum = 0;
	int i = 30;
	//perform the statements within do{} once
	do{
		//if the iteration is divisible by 4 it's added to sum
		if (i % 4 == 0){
			sum += i;
		}
		i ++;
	}
	//as long i <= 1000 the statements within do{} run
	while(i <= 1000);

	// here, we return the calcualted sum:
	return sum;
}

//===============================================================================================
int Q2(int Q2_input){
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit;
	//checks if the input is <= 99999 and >= 10000
	if (Q2_input >= 10000 && Q2_input <= 99999){
		IsFiveDigit = 1;
	}
	//if above is not satisfied, checks if the input is >= -99999 and <= -10000
	else if (Q2_input <= -10000 && Q2_input >= -99999){
		IsFiveDigit = 1;
	}
	//if neither it is not a 5 digit number
	else{
		IsFiveDigit = 0;
	}

	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){
	/* Question 3:
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89,
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
	*/
	// this is the varaible that holds the out value to return
	float GPA;
	//checks if input is between 0 and 100 to run grade checks
	if(Q3_input >= 0 && Q3_input <= 100.0){
		//if the input is <= 59 GPA is 0.0
		if (Q3_input <= 59.0){
			GPA = 0.0;
		}
		//if the input is <= 69 GPA is 1.0
		else if (Q3_input <= 69.0){
			GPA = 1.0;
		}
		//if the input is <= 79 GPA is 2.0
		else if (Q3_input <= 79.0){
			GPA = 2.0;
		}
		//if the input is <= 89 GPA is 3.0
		else if (Q3_input <= 89.0){
			GPA = 3.0;
		}
		//if the input is none of the above but between 0 and 100, GPA must be a 4.0
		else{
			GPA = 4.0;
		}
	}
	//if the input is not between 0 and 100 grade is not checked
	else{
		GPA = -1;
	}

	// finally, we return the GPA
	return GPA;
}
//===============================================================================================
double Q4(int Q4_input){
	// this is the variable that holds the pi value to return
	double pi=0;
	//a loop is made to operate 'input' times
	for (int i = 0; i < Q4_input; i++){
		//if the current repetition is even, current value for pi is added to 4 / respective odd denominator
		if (i % 2 == 0){
			pi = pi + (double)(4) / (1 + 2 * i);
		}
		//if the current repetition is odd, current value for pi is subtracted by 4 / respective odd denominator
		else{
			pi = pi - (double)(4) / (1 + 2 * i);
		}
	}

	// finally, we return the pi value
	return pi;
}
//===============================================================================================
int Q5(){
	// this is the varaible that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;
	int hypot;
	int side1;
	int side2;
	/*
	Hypotenuse is incremented from 1 to 400 as specified in the question,
	for each value it takes on side1 takes on a value up to the hypotenuse
	value because it is not possible for it to be greater than the hypotenuse.
	Before side1 is incremented side2 is incremented from 1 up to the side 2 value
	only in order to avoid duplicate ordered triple checks. For each unique combo
	of values the sides take on it is checked if they are an ordered triple
	*/
	for (hypot = 1; hypot <= 400; hypot ++){
		for (side1 = 1; side1 <= hypot; side1 ++){
			for (side2 = 1; side2 <= side1; side2 ++){
				if (hypot * hypot == side1 * side1 + side2 * side2){
					totNumTribles ++;
				}
			}
		}
	}

	//finally you should return the total number of tribles.
	return totNumTribles;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	//counts is the variable that should hold the total number of found perfect numbers
	int counts=0;
	//perfect is an array that you need to add into it any perfect number you find
    int perfIndex = 0, sumOfFacts;
    //start a loop checking every number <= the input for perfection
	for (int perfCheck = 1; perfCheck <= Q6_input; perfCheck++){
		sumOfFacts = 0;
		//start a loop checking if positive integers below the number of interest are factors
		for (int factCheck = 1; factCheck < perfCheck; factCheck++){
			//if the factor check number is divisible by the perfection check number it is added to the sum of factors
			if (perfCheck % factCheck == 0){
				sumOfFacts += factCheck;
			}
		}
		//if the sum of factors is equal to the number checked for perfection, count is incremented
		if (sumOfFacts == perfCheck){
			counts ++;
			//perfect number is inserted in the array
			perfect[perfIndex] = perfCheck;
			perfIndex ++;
		}
	}

   return counts;
}
//===============================================================================================
int Q7a(int Q7_input){
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	int trailingDig = Q7_input % 10, truncatedInt = Q7_input, count = 0;
	//perform loop operations 7 times for 7 digits
	while(count < 7){
		/*
		if the current digit is a 0 the reversed integer is multiplied by 10
		reversedInt starts at 0 so x10 has no effect
		if reversedInt > 0 x10 inserts a 0
		*/
		if(trailingDig == 0){
			truncatedInt /= 10;
			trailingDig = truncatedInt % 10;
			reversedInt *= 10;
			count ++;
			continue;
		}
		reversedInt = reversedInt * 10 + trailingDig;
		truncatedInt /= 10;
		trailingDig = truncatedInt % 10;
		count ++;
	}

	return reversedInt;
}


int Q7b(int Q7b_input){
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	int trailingDig = Q7b_input % 10, truncatedInt = Q7b_input;
	//infinite loop
	while(1){
	//when on the final digit of the input insert it to reversedInt and break the loop
		if(truncatedInt < 10){
			reversedInt = reversedInt * 10 + truncatedInt;
			break;
		}
		//same as Q7a
		if(trailingDig == 0){
			truncatedInt /= 10;
			trailingDig = truncatedInt % 10;
			reversedInt *= 10;
			continue;
		}
		reversedInt = reversedInt * 10 + trailingDig;
		truncatedInt /= 10;
		trailingDig = truncatedInt % 10;
	}

	return reversedInt;
}
