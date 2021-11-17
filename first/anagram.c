#include <stdio.h>
#include <string.h>

int check_if_anagram(char *s1, char *s2) {
	int m = strlen(s1);
	int n = strlen(s2);
	int k = 0;

	if (m == n) {
		for (int i = 0; i < m; i++)
			for (int j = i; j < n; j++)
				if (s1[i] == s2[j])
					k++;
		if (k >= n)
			return 1;
	}
	return 0;
}

void main() {
	printf("Anagram\n");
	printf("%d\n", check_if_anagram("iii", "ijj"));	
	printf("%d\n", check_if_anagram("jij", "ijj"));	
}
