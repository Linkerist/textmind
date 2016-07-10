
#include <stdio.h>

#define N 8

char board[N + 2][N + 2];
int count = 0;

/*
 * initialize the array like this:
 *
 * ##########
 * #        #
 * #        #
 * #        #
 * #        #
 * #        #
 * #        #
 * #        #
 * #        #
 * ##########
 */
void init(void)
{
	int i, j;
	for (i = 0; i < N + 2; i++) {
		board[0][i] = board[N + 1][i] = '#';
		board[i][0] = board[i][N + 1] = '#';
	}
	for (i = 1; i < N + 1; i++)
		for (j = 1; j < N + 1; j++)
			board[i][j] = ' ';
}

/*
 * display the array like this:
 *
 * # # # # # # # # # #
 * #                 #
 * #                 #
 * #                 #
 * #                 #
 * #                 #
 * #                 #
 * #                 #
 * #                 #
 * # # # # # # # # # #
 */
void display(void)
{
	int i, j;
	for (i = 0; i < N + 2; i++) {
		for (j = 0; j < N + 2; j++) {
			printf("%c", board[i][j]);
			putchar(' ');
		}
		printf("\n");
	}
}

int main()
{
	init();
	display();
	return 0;
}

