#include <stdio.h>
#include <stdlib.h>
float vetScore[10] = {0,0,0,0,0,0,0,0,0,0};
teste
void exibirScore();
int insertScore();
float downloadScore(float value);
void removeScore();
void clearScore();
void uploadScore(int value);
void clearScore();

int main(){
	int op;
	
	do{
	exibirScore();	
		
	printf("\n1 - Insert Score\n2 - Remove Score\n3 - Clear Score\n4 - Exit\n");
	printf("Choose an option\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:	insertScore();
				break;
		case 2: removeScore();
				break;
		case 3: clearScore();
				break;
		case 4: break;
	}
	system("cls");
	}while(op!=4);
	
	return 0;	
}

void exibirScore(){
	int i;
	printf("\tScore\n");
	for(i=0; i<10;i++)
		printf("%d\t%.2f\n",i+1,vetScore[i]);
	
}

int insertScore(){
	float sco;
	
	printf("Insert a new score: \n");
	scanf("%f",&sco);
	downloadScore(sco);
}

float downloadScore(float value){
	int i;
		for(i=0; i<10; i++){
			if(value > vetScore[i]){
				int t;
				for(t = 9; t >= i; t--)
					vetScore[t+1] = vetScore[t];
			vetScore[i] = value;
			break;
			}
		}
	
}

void removeScore(){
	int pos;
	
	printf("Insert the position number: \n");
	scanf("%d",&pos);
	uploadScore(pos);
}

void uploadScore(int value){
	int i;
	
	for(i=value-1;i<=10;i++){
		vetScore[i] = vetScore[i+1];
		vetScore[10] = 0;
	}
}

void clearScore(){
	int i;
	for(i=0;i<11;i++)
		vetScore[i] = 0;
}
