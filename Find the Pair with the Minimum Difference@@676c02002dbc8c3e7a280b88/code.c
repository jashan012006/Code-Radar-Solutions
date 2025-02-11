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
    Point p1, p2;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = calculate_distance(points[i], points[j]);
            if (distance < min_distance) {
                min_distance = distance;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }

    printf("The closest pair of points are: (%.2f, %.2f) and (%.2f, %.2f)\n", p1.x, p1.y, p2.x, p2.y);
    printf("Minimum distance: %.2f\n", min_distance);
}

int main() {
    Point points[] = {{0.0, 0.0}, {1.0, 1.0}, {2.0, 2.0}, {3.0, 3.0}};
    int n = sizeof(points) / sizeof(points[0]);

    find_min_distance(points, n);

    return 0;
}
