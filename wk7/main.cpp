#include <iostream>

struct area 
{
	float length;
	float width;
	float height;
};

int main()
{
	area b = {2, 3, 4};
	printf("Box volume is %.1f\n", b.length * b.width * b.height);
	
	return 0;
}