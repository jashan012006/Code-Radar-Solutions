#include <stdio.h>
#include <math.h>
#include <float.h>

typedef struct {
    double x, y;
} Point;

double calculate_distance(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

void find_min_distance(Point points[], int n) {
    double min_distance = DBL_MAX;
    Point