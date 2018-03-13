/* CpSc 1010, section 2 class exercise:  grade calculator
	gradeCalculator.c

	[this version uses a switch statement]

	grade components and weights for this class:
		PA1 10%
		PA2 10%
		PA3 10%
		lab 10%
		q_zb 20%  		// quizzes + zyBooks
		T1 10%
		T2 10%
		final 20%		// final exam

	phase 1 alorithm:
		enter grade for each component
		calculate the weighted grade for each one and save into same variable
		after all componenets are entered, calculate average out of 80%

		ask user what grade they are trying to get to
		switch on that character
			trying for an A
				if grade is B or higher, show what is needed on the final
					to keep an A (if grade is already an A)
					to get an A (if grade is a B)
			trying for a B
				if grade is a C, show what is needed on the final
					to get a B
					to keep a C
			trying for a C
				if grade is a D, show what is needed on the final
					to get a C
					to keep a D
			trying for a D
				if grade is an F, show what is needed on the final
					to get a D

	phase 2:
		the above is out of 80%, assuming there are grades for everything
			except for the final exam
		expand this for cases where the percentage is less than 80%
		in other words, allow for calculation of the average with grades
			at any point in the semester (percentage less than 80%)

		- - > try to think of an algorithm to incorporate that
				functionality in with this existing program i.e. modify
				the algorithm in phase 1 to include this added functionality

		so in the end:
			if the percentage is 80% (phase 1 - already done)
				show what the current average is AND
				show the outputs from phase 1 above
			if the percentage is less than 80% (phase 2)
				show what the current average is for whatever grades are entered


	phase 3:
		create functions so that the main() function is shorter, cleaner,
			more concise

	phase 4:
		could generalize the program so that you can use this in other
		classes that have different components and different weights
*/


#include <stdio.h>

int main(void) {
	float PA1, PA2, PA3, lab, q_zb, T1, T2;
	float avg, finalExam;
	char letterGrade;

	// printf("\n\nEnter grade of asg1: ");
	scanf("%f", &PA1);
	PA1 = PA1 * .10;

	// printf("\n\nEnter grade of asg2: ");
	scanf("%f", &PA2);
	PA2 = PA2 * .10;

	// printf("\n\nEnter grade of asg3: ");
	scanf("%f", &PA3);
	PA3 = PA3 * .10;

	// printf("\n\nEnter grade of lab: ");
	scanf("%f", &lab);
	lab = lab * .10;

	// printf("\n\nEnter grade of q_zb: ");
	scanf("%f", &q_zb);
	q_zb = q_zb * .20;

	// printf("\n\nEnter grade of T1: ");
	scanf("%f", &T1);
	T1 = T1 * .10;

	// printf("\n\nEnter grade of T2: ");
	scanf("%f", &T2);
	T2 = T2 * .10;

	avg = (PA1 + PA2 + PA3 + lab + q_zb + T1 + T2) / .8;
	printf("\n\navg is %.2f\n\n", avg);

	printf("What letter grade are you shooting for?  ");
	scanf(" %c", &letterGrade);
	printf("\n\n");

	switch(letterGrade) {
		// cases for each letter grade
		case 'A':
		case 'a':
			finalExam = (89.5 - (avg * .8) ) / .2;
			// already have an A
			if (avg > 89.5)
				printf("need a %.2f on the final to keep an A\n\n", finalExam);
			// grade is a B
			else {
				printf("need a %.2f on the final to get an A\n\n", finalExam);
				finalExam = (79.5 - (avg * .8) ) / .2;
				printf("need a %.2f on the final to keep a B\n\n", finalExam);
			}
			break;

		case 'B':
		case 'b':
			// grade is a C
			finalExam = (79.5 - (avg * .8) ) / .2;
			printf("need a %.2f on the final to get a B\n\n", finalExam);
			finalExam = (69.5 - (avg * .8) ) / .2;
			printf("need a %.2f on the final to keep a C\n\n", finalExam);
			break;

		case 'C':
		case 'c':
			// grade is a D
			finalExam = (69.5 - (avg * .8) ) / .2;
			printf("need a %.2f on the final to get a C\n\n", finalExam);
			finalExam = (59.5 - (avg * .8) ) / .2;
			printf("need a %.2f on the final to keep a D\n\n", finalExam);
			break;

		case 'D':
		case 'd':
			// grade is an F
			finalExam = (59.5 - (avg * .8) ) / .2;
			printf("need a %.2f on the final to get a D\n\n", finalExam);
			break;
	}

	return 0;
}
