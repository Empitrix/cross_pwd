#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <linux/limits.h>
#include "utils.c"

int main(int argc, char* argv[]){

	// Get Current Path
	char* path;
	path = get_current_dir();


	for(int i = 0; i < argc; i++){
		bool status = check_flag("-s", argv[i], false);
		printf("argument [%s] with value of {%s}\n", argv[i], status ? "\033[0;32mTRUE\033[0;37m" : "\033[0;31mFALSE\033[0;37m");
	}

	// Apply Actions
	printf("%s\n", path);
	return 0;
}

