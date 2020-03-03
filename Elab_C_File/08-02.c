#include <stdio.h>
#include <string.h>

typedef struct {
char id[13];
int score;
} studentRecord;

void init(studentRecord list[], int size) {
	for(int i = 0; i < size; i++){
		sprintf(list[i].id, "%d%05d", 551, i+1);
		list[i].score = 0;
	}
}

void enterScore(studentRecord list[], int size){
	char findid[13];
	int setscore;
	// char charsetscore[10];
    scanf("%s %d", findid, &setscore);
	// sprintf(charsetscore, "%d", setscore); // PUT integer to array
	// printf("charsetscore is %s\n", charsetscore);
	for(int i = 0; i < 3; i++){
		// printf("list[%d].id = %s\n", i, list[i].id);
		if(strstr(list[i].id, findid)!= NULL){
			list[i].score = setscore;
			// printf("setting list[%d] = %d\n", i, setscore);
		}
	}
}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}




int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);

}