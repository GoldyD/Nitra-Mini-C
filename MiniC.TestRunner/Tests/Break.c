﻿int main() {
	int i;
	i = 0;
	while (i < 10)
	{
		print_int(i);
		if (i < 5) break;
		i = i + 1;
	}
	return 0;
}

/*
BEGIN-OUTPUT
0
1
2
3
4
END-OUTPUT
*/