#include<iostream>
int main() {
	int y, a, b, c, d, e, i;
	std::cin >> y;
	e = y + 1;
	for (e; 9000; 1)
	{
		y += 1;
		a = y % 10;
		b = y / 10 % 10;
		c = y / 100 % 10;
		d = y / 1000 % 10;
		if ((a != b) && (b != c) && (c != d) && (a!=c) &&(a!=d) && (b!=d))
		{
			std::cout << y;
			break;
		}
	}
}
