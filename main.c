#include <stdio.h>
#include <limits.h>

int main(){
	char name1[INT_MAX];
	char name2[INT_MAX];
	int hp1;
	int hp2;

	printf("this is a fighting simulator. in this simulator, there will be two champions fighting to the death. you will choose the name of these champions and their health values. the first champion will attack first, then the second champion will attack first, then the cycle repeats. the champion whose health points do not drop to zero before the other champion does is declared the victor.\n\n");

	printf("who will be your first champion? ");
	scanf("%s",name1);
	printf("\n");

	printf("who will be your second champion? n");
	scanf("%s",name2);
	printf("\n");

	printf("how many health points shall %s have? (enter a number): ",name1);
	scanf("%d",&hp1);
	printf("\n");

	printf("how many health points shall %s have? (enter a number): ",name2);
	scanf("%d",&hp2);
	printf("\n");

	printf("%s %s %d %d\n",name1,name2,hp1,hp2);
	return 0;
}
