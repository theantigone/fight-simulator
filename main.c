//printf and scanf statements
#include <stdio.h>

//to handle errors
#include <errno.h>

int main(){
	char name1[100],name2[100];
	int hp1,hp2,atk1,atk2;

	printf("this is a fighting simulator. in this simulator, there will be two champions fighting to the death. you will choose the name of these champions, their health values, and their attack damages. the first champion will attack first, then the second champion will attack first, then the cycle repeats. the champion whose health points do not drop to zero before the other champion does is declared the victor.\n\n");

	printf("who will be your first champion? (max 100 characters): ");
	scanf("%s",name1);
	printf("\n");

	printf("who will be your second champion? (max 100 characters): ");
	scanf("%s",name2);
	printf("\n");

	printf("how many health points shall %s have? (enter an integer): ",name1);
	scanf("%d",&hp1);
	printf("\n");

	printf("how many health points shall %s have? (enter an integer): ",name2);
	scanf("%d",&hp2);
	printf("\n");

	printf("what should %s's attack damage be? (also enter an integer): ",name1);
	scanf("%d",&atk1);
	printf("\n");

	printf("what should %s's attack damage be? (also enter an integer): ",name2);
	scanf("%d",&atk2);
	printf("\n");

	//printf("%s %s %d %d %d %d\n",name1,name2,hp1,hp2,atk1,atk2);
	
	while(hp1>0&&hp2>0){
		printf("%s attacked %s for %d damage. %s's hp remaining: %d\n",name1,name2,atk1,name2,hp2);
		hp2-=atk1;
		printf("%s attacked %s for %d damage. %s's hp remaining: %d\n",name2,name1,atk2,name1,hp1);
		hp1-=atk2;
	}

	if(hp1<=0){
		printf("\n%s is victorious with %d remaining! to the victor the spoils!\n",name2,hp2);
		return 0;
	}
	else if(hp2<=0){
		printf("\n%s is victorious with %d remaining! to the victor the spoils!\n",name1,hp1);
		return 0;
	}
	else{
		perror("error");
		return 1;
	}
}
