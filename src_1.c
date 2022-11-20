/*
	File: 201835502_ÀÌÁö¹Î.c
	Author: lee jimin (dlwlals1207@gachon.ac.kr)
	Date: 2022_08_30
	Recently update: 2022_09_05
	Course: Problem Solving Method

	Summary of File:
	This file contains code that can play Slot machine.
	There are 3 slots and goal(exit condition) is JackPot(3 Cherry hit).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BAR 1
#define	BELL 2
#define LEMON 3
#define CHERRY 4

int main()
{
	int slot1, slot2, slot3;
	char pressButton;

	while (1)
	{
		printf("¡ÚWelcome to slot machine!!¡Ú\n");
		printf("type Enter to start the slot machine\n");
		scanf("%c", &pressButton);

		/*rand seed initialization*/
		srand(time(NULL));

		/*Generate random number and assign*/
		slot1 = rand() % 4 + 1;
		slot2 = rand() % 4 + 1;
		slot3 = rand() % 4 + 1;

		/*print each slot's value*/
		switch (slot1)
		{
			case 1:
				printf("First is %d\n",slot1);
				break;
			case 2:
				printf("First is %d\n",slot1);
				break;
			case 3:
				printf("First is %d\n",slot1);
				break;
			case 4:
				printf("First is %d\n",slot1);
		}

		switch (slot2)
		{
		case 1:
			printf("Second is %d\n",slot2);
			break;
		case 2:
			printf("Second is %d\n", slot2);
			break;
		case 3:
			printf("Second is %d\n", slot2);
			break;
		case 4:
			printf("Second is %d\n", slot2);
		}

		switch (slot3)
		{
		case 1:
			printf("Third is %d\n\n",slot3);
			break;
		case 2:
			printf("Third is %d\n\n", slot3);
			break;
		case 3:
			printf("Third is %d\n\n", slot3);
			break;
		case 4:
			printf("Third is %d\n\n", slot3);
		}

		if ((slot1 == slot2) && (slot2 == slot3) && (slot1 == CHERRY))
		{	//Case 1: slot 1,2,3's value are CHERRY
			printf("Paid out: JACKPOT!!!!!!!!!!!!!!!!!\n\n\n");
		}

		else if ((slot1 == CHERRY) || (slot2 == CHERRY) || (slot3 == CHERRY))
		{	//Case 2: slot 1 or 2 or 3's value is CHERRY 
			printf("Paid out: ONE DIME!\n\n\n");
		}

		else if ((slot1 == slot2) && (slot2 == slot3))
		{	//Case 3: slot 1,2,3 's value is not CHERRY, but same outcome
			printf("Paid out: NICKEL!\n\n\n");
		}

		else
		{	//Other cases
			printf("Sorry. Better Luck Next Time.......\n\n\n");
		}

		/*If the output is JACKPOT(Case 1), exit loop*/
		if ((slot1 == slot2) && (slot2 == slot3) && (slot1 == CHERRY))
			break;

	}

	return 0;

}