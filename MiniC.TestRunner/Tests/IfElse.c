﻿int main() {
	bool b;
	b = true;
	if (b) print_bool(b);
	if (!b || b)
	{
		int i;
		i = 1;
		if (i < 1) print_int(10);
		else print_int(20);
	}
	return 0;
}

/*
BEGIN-OUTPUT
True
20
END-OUTPUT
*/