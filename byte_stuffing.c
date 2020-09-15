#include <stdio.h>
#include <string.h>

int main() {
	char sd[10];
	char ed[10];
	char string[100];
	char add[10];
	char output_string[100];
	char esc[] = "esc";
	int k = 0;
	printf("Enter the string :");
	scanf("%s", string);
	printf("Enter starting delimiter:");
	scanf("%s", sd);
	printf("Enter ending delimiter:");
	scanf("%s", ed);
	printf("Enter a string that is to be stuffed:");
	scanf("%s", add);

	for (int i = 0; i <strlen(sd); i++) {
		output_string[k] = sd[i];
		k++;
	}

	for (int i = 0; i < strlen(string); i++) {
		int count = 0;
		for (int j = i, l = 0; j < (i + strlen(sd)); j++,l++) {
			if (string[j] == sd[l]) {
				count++;
			} else {
				break;
			}
		}
		if (count == strlen(sd)) {
			for (int m = 0; m < strlen(add); m++) {
				output_string[k] = add[m];
				k++;
			}
		}
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(ed)); j++,l++) {
                        if (string[j] == ed[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(ed)) {
                        for (int m = 0; m < strlen(add); m++) {
                                output_string[k] = add[m];
                                k++;
                        }
                }
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(esc)); j++,l++) {
                        if (string[j] == esc[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(esc)) {
                        for (int m = 0; m < strlen(add); m++) {
                                output_string[k] = add[m];
                                k++;
                        }
                }
		 
		output_string[k] = string[i];
		k++;
	}

	for (int i = 0; i <strlen(ed); i++) {
                output_string[k] = ed[i];
                k++;
        }
	
	output_string[k] = '\0';

	printf("\nAfter Stuffing: %s\n", output_string);
	return 0;
}

