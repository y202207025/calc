#include "sub.h"

int dive(int x, int y)
{
	int cnt = 0;

	while (x >= y) {
		x = sub(x, y);
		cnt++;
	}
	return cnt;
}