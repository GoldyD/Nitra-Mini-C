﻿void f() {
	return;
}

int g(int i) {
	return i;
}

int main() {
    int i;
	f();
    g(1);
    i = g(2);
	return 0;
}

/*
BEGIN-OUTPUT
END-OUTPUT
*/