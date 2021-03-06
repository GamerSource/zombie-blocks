#include "vector.h"

// floating point vectors
vec2f *mv2f(void)
{
	vec2f *vec = (vec2f *) malloc(sizeof(vec2f));
	vec->x = vec->y = .0f;	
	return vec;
}

vec2f v2f(float x1, float y1, float x2, float y2)
{
	vec2f a;
	a.x = x2 - x1;
	a.y = y2 - y1;
	return a;
}

vec2f addv2f(vec2f a, vec2f b)
{
	a.x += b.x;
	a.y += b.y;
	return a;
}

vec2f subv2f(vec2f a, vec2f b)
{
	a.x -= b.x;
	a.y -= b.y;
	return a;
}

vec2f saddv2f(float s, vec2f a)
{
	a.x += s;
	a.y += s;
	return a;
}
vec2f smulv2f(float s, vec2f a)
{	
	a.x *= s;
	a.y *= s;
	return a;
}
vec2f sdivv2f(float s, vec2f a)
{	
	a.x /= s;
	a.y /= s;
	return a;
}

vec2f smulxv2f(float s, vec2f a)
{	
	a.x *= s;
	return a;
}
vec2f smulyv2f(float s, vec2f a)
{	
	a.y *= s;
	return a;
}

vec2f getVector(int angle)
{
  vec2f tmp;
  tmp.x = cos(angle);
  tmp.y = sin(angle);
  return tmp;
}

void setVector(vec2f *v, int angle)
{
  v->x = cos(angle);
  v->y = sin(angle);
}

vec2f genStartBaseVec(float x) // inappropriate
{
	vec2f tmp;
	tmp.x = ((rand()%2)?-1:1)*x;
	tmp.y = ((rand()%2)?-1:1)*sqrtf(1-pow(x,2));
	return tmp;
}
float mulv2f(vec2f a, vec2f b)
{
	return (a.x*b.x + a.y*b.y);
}
float lengthv2f(vec2f a)
{
	return sqrtf(powf(a.x,2.f) + powf(a.y,2.f));
}
vec2f basicv2f(vec2f a)
{
	return sdivv2f(lengthv2f(a),a);
}
