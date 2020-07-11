#include<stdio.h>
char displayString(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
}
int getLength(char str[]) {
	int i=0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

void changeCase(char str[]) {
	int i = 0;
	while( str[i] != '\0') {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}
		i++;
	}
	displayString(str);
}
void countVowelsConsonants(char str[], int *vowels, int *conso) {
	int i = 0; *vowels = 0; *conso = 0;
	while (str[i] != '\0') {
		if (str[i] == 'A' || str[i] == 'a' ||str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i]=='i'|| str[i]=='O'|| str[i]=='o'||str[i]=='U'||str[i]=='u')
		{	
			*vowels += 1;
			
		}
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
			*conso += 1;
		}
		i++;
	}
}
int CountWords(char str[]) {
	int i = 0, count=0;
	while (str[i] != '\0') {
		if ((str[i] == ' ') && (str[i-1] != ' ')) {
			count++;
		}
		i++;
	}
	return count+1;
}
int main() {
	char val[] = "STRING Wonderful morning";
	printf("%d",CountWords(val));
}