#include <math.h>

float notmap(float value, float xMin, float xMax, float yMin, float yMax)
{
    float a = (xMax - yMax) / (xMin - yMin);
    float out = a*value + yMin;
    return out;
}

float affine(float value, float xMin, float xMax, float yMin, float yMax)
{ 
    return notmap(value ,xMin, xMax, yMin, yMax);
}

float pythagore (float oppose, float adjacent)
{
    float out = sqrtf(pow(oppose,2) + pow(adjacent,2));
    return out;
}

float alkashi(float longueurCote1, float longueurCote2, float angle)
{
    float out = pow(longueurCote1, 2) + pow(longueurCote2, 2);
    out = out - 2 * longueurCote1 * longueurCote2 * cos(angle * (M_PI / 180));
    out = sqrtf(out);
    return out;   
}

