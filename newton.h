#ifndef _NEWTON_H
#define _NEWTON_H

/**
* 2D box shape 
*/
typedef struct nt_Box
{
    float x, y; // top left corner 
    float w, h; // width and height of the collision box 
} nt_Box;

typedef struct nt_Vec2
{
    float x, y;
}nt_Vec2;

typedef struct nt_Polygon
{
    nt_Vec2* points;    // polygon close points  
    unsigned int count; // number of vertices
}nt_Polygon;

typedef struct nt_Circle
{
    float x, y; // center position  
    float r;    // radius of circle 
};



#endif