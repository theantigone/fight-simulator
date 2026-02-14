#include "main.h"

#include <stdio.h> //printf and scanf statements
#include <errno.h> //to handle errors
#include <unistd.h> //sleep() functionality
//#include <windows.h> //for windows users, they might need this library instead of `unistd.h`
#include <stdbool.h> //boolean functionality
#include <string.h> //string library

bool check_victor(){
	if(champ2.hp<=0){
		printf("\n%s is victorious with %d hp remaining! To the victor the spoils!\n",champ1.name,champ1.hp);
		return true;
	}
	else if(champ1.hp<=0){
		printf("\n%s is victorious with %d hp remaining! To the victor the spoils!\n",champ2.name,champ2.hp);
		return true;
	}
	else
		return false;
}

int main(){

	printf("This is a fighting simulator. In this simulator, there will be two champions fighting to the death. You will choose the name of these champions, their health values, their damage type, and their power scaling. The first champion will attack first, then the second champion will attack, then the cycle will repeat. The champion whose health points do not drop to zero before the other champion does is declared the victor.\n\n");

	champ_t champ1, champ2;
	char*dmg_type;

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

	printf("Is %s an AD (attack damage) or an AP (ability power) champion? (enter `AD` or `AP`): ",champ2.name);
	scanf("%s",champ2.dmg_type);

	printf("How much %s should %s have? (also enter an integer): ",champ1.dmg_type,champ1.name);
	scanf("%d",&champ1.dmg);
	printf("\n");

	printf("How much %s should %s have? (also enter an integer): ",champ2.dmg_type,champ2.name);
	scanf("%d",&champ2.dmg);
	printf("\n");

	printf("The champions are locked in! Let the games begin!\n");
	printf("FIRST CHALLENGER:\n---\nNAME: %s\nHP: %d\n%s: %d\n---\n\n",champ1.name,champ1.hp,champ1.dmg_type,dmg1);
	printf("SECOND CHALLENGER:\n---\nNAME: %s\nHP: %d\n%s: %d\n---\n\n",champ2.name,champ2.hp,champ2.dmg_type,dmg2);
	
	while(champ1.hp>0&&champ2.hp>0){
		champ2.hp-=dmg1;
		printf("%s attacked %s for %d damage. %s's HP remaining: %d\n",champ1.name,champ2.name,dmg1,champ2.name,champ2.hp);
		sleep(1);
		if(check_victor())
			return 0;

		champ1.hp-=dmg2;
		printf("%s attacked %s for %d damage. %s's HP remaining: %d\n",champ2.name,champ1.name,dmg2,champ1.name,champ1.hp);
		sleep(1);
		if(check_victor())
			return 0;
	}
}
