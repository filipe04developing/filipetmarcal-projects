/*
Author: Filipe Tanus Marçal
Description: This program calculates the distances between consecutive vertices of multiple polygons.
*/
#include <stdio.h>
#include <math.h>

typedef struct coordinate {
    float x;
    float y;
} coordinate;

// Function to calculate the distance between two points
float calculateDistance(coordinate p1, coordinate p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Function to calculate distances for a single polygon
void calculatePolygonDistances(coordinate vertices[], int m) {
    float totalDistance = 0.0;

    for (int i = 0; i < m; i++) {
        int nextIndex = (i + 1) % m;  // Wrap around to the first vertex
        float distance = calculateDistance(vertices[i], vertices[nextIndex]);
        printf("Distance from vertex %d to vertex %d: %.2f\n", i + 1, nextIndex + 1, distance);
        totalDistance += distance;
    }
    printf("Total distance of the polygon: %.2f\n\n", totalDistance);
}

int main() {
    int n, m;

    printf("Enter the number of polygons: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the number of vertices for polygon %d: ", i + 1);
        scanf("%d", &m);

        coordinate vertices[m];

        // Input vertices
        for (int j = 0; j < m; j++) {
            printf("Enter coordinates for vertex %d (x y): ", j + 1);
            scanf("%f %f", &vertices[j].x, &vertices[j].y);
        }

        // Calculate and display distances for the polygon
        printf("Distances for polygon %d:\n", i + 1);
        calculatePolygonDistances(vertices, m);
    }

    return 0;
}
