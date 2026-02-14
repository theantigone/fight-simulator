#include "main.h"

#include <stdio.h> //printf and scanf statements
#include <errno.h> //to handle errors
#include <unistd.h> //sleep() function
//#include <windows.h> //for windows users, they might need this library instead of `unistd.h`
#include <stdbool.h> //boolean functionality
#include <string.h> //string library
#include <ctype.h> //toupper() function

//global values
champ_t champ1, champ2;
char*dmg_type;

bool check_victor(){
	champ_t victor;

	if(champ2.hp<=0){
		strcpy(victor.name,champ1.name);
		victor.hp=champ1.hp;
	}
	else if(champ1.hp<=0){
		strcpy(victor.name,champ2.name);
		victor.hp=champ2.hp;
	}
	else
		return false;
	printf("\n%s is victorious, with %d hp remaining! To the victor the spoils!\n",victor.name,victor.hp);
	return true;
}

int main(){

	printf("This is a League of Legends fighting simulator. In this simulator, you will choose two champions who will face off on the rift! You will select the champions, their health values, their damage type, and their power scaling. The first champion who you name will attack first, followed by the second champion, then the cycle will repeat. The champion who obtains first blood is declared the victor!\n\n");

	printf("Who will be your first champion? (max 100 characters): ");
	scanf("%s",champ1.name);
	printf("\n");

	printf("Who will be your second champion? (max 100 characters): ");
	scanf("%s",champ2.name);
	printf("\n");

	printf("How many health points shall %s have? (enter an integer): ",champ1.name);
	scanf("%d",&champ1.hp);
	printf("\n");

	printf("How many health points shall %s have? (enter an integer): ",champ2.name);
	scanf("%d",&champ2.hp);
	printf("\n");

	printf("Is %s an AD (attack damage) or an AP (ability power) champion? (enter `AD` or `AP`): ",champ1.name);
	scanf("%s",champ1.dmg_type);
	printf("\n");

	printf("Is %s an AD (attack damage) or an AP (ability power) champion? (enter `AD` or `AP`): ",champ2.name);
	scanf("%s",champ2.dmg_type);
	printf("\n");

	printf("How much %s should %s have? (also enter an integer): ",champ1.dmg_type,champ1.name);
	scanf("%d",&champ1.dmg);
	printf("\n");

	printf("How much %s should %s have? (also enter an integer): ",champ2.dmg_type,champ2.name);
	scanf("%d",&champ2.dmg);
	printf("\n");

	printf("The champions are locked in! Let the games begin!\n\n");

	printf("FIRST CHALLENGER:\n---\nNAME: %s\nHP: %d\n%s: %d\n---\n\n",champ1.name,champ1.hp,champ1.dmg_type,champ1.dmg);
	printf("SECOND CHALLENGER:\n---\nNAME: %s\nHP: %d\n%s: %d\n---\n\n",champ2.name,champ2.hp,champ2.dmg_type,champ2.dmg);

	printf("NOTE: Press `Ctrl + C` to cancel the fight!\n\n");
	
	while(champ1.hp>0&&champ2.hp>0){
		champ2.hp-=champ1.dmg;
		printf("%s attacked %s for %d damage. %s's HP remaining: %d\n",champ1.name,champ2.name,champ1.dmg,champ2.name,champ2.hp);
		sleep(1);
		if(check_victor())
			return 0;

		champ1.hp-=champ2.dmg;
		printf("%s attacked %s for %d damage. %s's HP remaining: %d\n",champ2.name,champ1.name,champ2.dmg,champ1.name,champ1.hp);
		sleep(1);
		if(check_victor())
			return 0;
	}
}
