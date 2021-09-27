#pragma once

#ifndef __POINT_H__
#define __POINT_H__
#include <math.h>

template<class TYPE>
class Vec3
{
public:

	TYPE x, y, z;

	Vec3()
	{}

	Vec3(const Point<TYPE>& v)
	{
		this->x = v.x.z;
		this->y = v.y.z;
		this->z = v.y.z;
	}

	Vec3(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vec3& create(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = x;
		this->y = y;
		this->z = z;

		return(*this);
	}

	// Math ------------------------------------------------
	Vec3 operator -(const Vec3& v) const
	{
		p2Vector2 r;

		r.x = x - v.x;
		r.y = y - v.y;
		r.z = z - v.z;
		return(r);
	}

	Vec3 operator + (const Vec3& v) const
	{
		p2Vector2 r;

		r.x = x + v.x;
		r.y = y + v.y;
		r.z = z + v.z;

		return(r);
	}

	const Vec3& operator -=(const Vec3& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z

		return(*this);
	}

	const Vec3& operator +=(const Vec3& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;

		return(*this);
	}

	bool operator ==(const Vec3& v) const
	{
		return (x == v.x && y == v.y && z == v.z);
	}

	bool operator !=(const Vec3& v) const
	{
		return (x != v.x || y != v.y || z != v.z);
	}

	// Utils ------------------------------------------------
	bool IsZero() const
	{
		return (x == 0 && y == 0 && z == 0);
	}

	Vec3& SetToZero()
	{
		x = y = z = 0;
		return(*this);
	}

	Vec3& Negate()
	{
		x = -x;
		y = -y;
		z = -z;

		return(*this);
	}

	// Distances ---------------------------------------------
	TYPE DistanceTo(const Vec3& v) const
	{
		TYPE fx = x - v.x;
		TYPE fy = y - v.y;
		TYPE fz = z - v.z;

		return sqrtf((fx * fx) + (fy * fy) + (fz * fz));
	}

	TYPE DistanceNoSqrt(const Vec3& v) const
	{
		TYPE fx = x - v.x;
		TYPE fy = y - v.y;
		TYPE fz = z - v.z;

		return (fx * fx) + (fy * fy) + (fz * fz);
	}

	TYPE DistanceManhattan(const Vec3& v) const
	{
		return abs(v.x - x) + abs(v.y - y) + abs(v.z - z);
	}
};

typedef Vec3<int> iVec3;
typedef Vec3<float> fVec3;
#endif // __POINT_H__


