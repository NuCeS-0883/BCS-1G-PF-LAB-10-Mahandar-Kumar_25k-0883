#include<stdio.h>
#include<string.h>
int main(){
char word[4][10]= {"Apple", "Carrot", "Peach", "Grape" };
int i,j;
char fruit[10]= "Orange";
	strcpy(word[1], fruit);
 printf("3 sentences:\n");
 for(i = 0; i < 4; i++) {
 	printf("----------------\n");
 	printf("Fruit %d : %s\n",i+1,word[i]);
 	for(j=0; word[i][j]!='\0'; j++){
 		printf("%c\n", word[i][j]);
	 }
	printf("String length: %d\n", strlen(word[i]));
 }
 
 return 0;	
}



