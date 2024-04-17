#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>


char* get_current_dir(){
	char* cwd;
	size_t allocSize = sizeof(char) * 1024;
	cwd = (char *)malloc(allocSize);
	if (getcwd(cwd, allocSize) != NULL) {
		return cwd;
	} else {
		perror("getcwd() error");
		return "";
	}
	return 0;
}


char* lowered(char* inpt){
	// Convert string into lowercase
	char* converted;
	for(int i = 0; i < strlen(inpt); i++) {
		converted[i] = tolower(inpt[i]);
	}
	printf("TOLOWERED: %s\n", converted);
	return converted;
}


bool check_flag(char* flag, char* inpt, bool format){
	if(strcmp(format ? lowered(inpt) : inpt, flag) == 0){
		return true;
	}
	return false;
}

