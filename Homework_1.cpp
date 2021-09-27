#include "Homework_1.h"


using namespace std;

int main()
{
	Vec3 v1(-6, 8, 1);
	Vec3 v2(5, 12, 1);
	Vec3 v3(1, 1, 1);

	Vec3 operator+(const Vec3 & vector) const
	{
		return Vec3(x + vector.x, y + vector.y, z + vector.z);
	}

	void operator+=(const Vec3 & vector)
	{
		x += vector.x;
		y += vector.y;
		z += vector.z;
	}

	Vec3 operator-(const Vec3 & vector) const
	{
		return Vec3(x - vector.x, y - vector.y, z - vector.z);
	}

	void operator-=(const Vec3 & vector)
	{
		x -= vector.x;
		y -= vector.y;
		z -= vector.z;
	}

	Vec3 operator*(const Vec3 & vector) const
	{
		return Vec3(x * vector.x, y * vector.y, z * vector.z);
	}

	Vec3 operator*(const T & value) const
	{
		return Vec3(x * value, y * value, z * value);
	}


};

#endif



