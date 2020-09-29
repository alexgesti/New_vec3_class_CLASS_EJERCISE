#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Newvec3
{
	public:
		float x, y, z;

		/*Newvec3() //Inicializa las variables a 0.
		  {
			x = 0;
			y = 0;
			z = 0;
		  }*/

		Newvec3(const float* Dx, const float* Dy, const float* Dz) //Te pide las variables.
		{
			printf("Give me the vector:");
			scanf_s("%f", &x);
			scanf_s("%f", &y);
			scanf_s("%f", &z);
		}

		/*Newvec3(float x2, float y2, float z2) //Guarda la anterior posicion del vector3.
		  {
			x2 = x;
			y2 = y;
			z2 = z;
		  }*/
};

void Normalize(Newvec3 first, Newvec3 second)
{
	float a;
	float x = first.x;
	float y = first.y;
	float z = first.z;

	x = pow(x, 2);
	y = pow(y, 2);
	z = pow(z, 2);

	a = x + y + z;
	a = sqrt(a);

	x = x / a;
	y = y / a;
	z = z / a;

	printf_s("The unit vector is %f %f %f.\n", x, y, z);
}

void Zero(Newvec3* vector)
{
	int a;

	printf_s("Do you want to put the vector 1 a 0?\n 1: Yes 2: No\n");
	scanf_s("%d", &a);
	
	if (a == 1)
	{
		vector->x = 0;
		vector->y = 0;
		vector->z = 0;
	}
}

void IsZero(Newvec3 vector)
{
	if (vector.x == 0 && vector.y == 0 && vector.z == 0) printf_s("The vector is 0, dosen't move from the position 0, 0, 0.\n");
	else printf_s("The vector is diferent from 0, it has the position %f %f %f.\n", vector.x, vector.y, vector.z);
}

void DistanceTo(Newvec3 first, Newvec3 second)
{
	float distance;
	float x = second.x - first.x;
	float y = second.y - first.y;
	float z = second.z - first.z;
	
	x = pow(x, 2);
	y = pow(y, 2);
	z = pow(z, 2);

	distance = x + y + z;
	distance = sqrt(distance);

	printf_s("The distance between the 2 vectors is %f.\n", distance);
}

int main()
{
	Newvec3 vec1 = {0, 0, 0};
	Newvec3 vec2 = {0, 0, 0};

	Normalize(vec1, vec2);
	Zero(&vec1);
	IsZero(vec1);
	DistanceTo(vec1, vec2);

	printf_s("And this ends here, bye!\n");

	system("pause");

	return 0;
}