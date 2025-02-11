#include <stdio.h>

void write_program() {
    FILE *file = fopen("min_distance.c", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "#include <stdio.h>\n");
    fprintf(file, "#include <math.h>\n");
    fprintf(file, "#include <float.h>\n\n");
    fprintf(file, "typedef struct {\n");
    fprintf(file, "    double x, y;\n");
    fprintf(file, "} Point;\n\n");
    fprintf(file, "double calculate_distance(Point p1, Point p2) {\n");
    fprintf(file, "    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));\n");
    fprintf(file, "}\n\n");
    fprintf(file, "void find_min_distance(Point points[], int n) {\n");
    fprintf(file, "    double min_distance = DBL_MAX;\n");
    fprintf(file, "    Point p1, p2;\n\n");
    fprintf(file, "    for (int i = 0; i < n - 1; i++) {\n");
    fprintf(file, "        for (int j = i + 1; j < n; j++) {\n");
    fprintf(file, "            double distance = calculate_distance(points[i], points[j]);\n");
    fprintf(file, "            if (distance < min_distance) {\n");
    fprintf(file, "                min_distance = distance;\n");
    fprintf(file, "                p1 = points[i];\n");
    fprintf(file, "                p2 = points[j];\n");
    fprintf(file, "            }\n");
    fprintf(file, "        }\n");
    fprintf(file, "    }\n\n");
    fprintf(file, "    printf(\"The closest pair of points are: (%.2f, %.2f) and (%.2f, %.2f)\\n\", p1.x, p1.y, p2.x, p2.y);\n");
    fprintf(file, "    printf(\"Minimum distance: %.2f\\n\", min_distance);\n");
    fprintf(file, "}\n\n");
    fprintf(file, "int main() {\n");
    fprintf(file, "    Point points[] = {{0.0, 0.0}, {1.0, 1.0}, {2.0, 2.0}, {3.0, 3.0}};\n");
    fprintf(file, "    int n = sizeof(points) / sizeof(points[0]);\n\n");
    fprintf(file, "    find_min_distance(points, n);\n\n");
    fprintf(file, "    return 0;\n");
    fprintf(file, "}\n");

    fclose(file);
    printf("Program written to 'min_distance.c'\n");
}

int main() {
    write_program();
    return 0;
}
