/*
Author: Filipe Tanus Marçal
Description: This program calculate the distance between two points with given coordinates.
*/
#include <stdio.h>
#include <math.h>
typedef struct coordinate{
  float x;
  float y;
} coordinate;
//Calculate the average position
coordinate averageposition(coordinate points[],int n){
  coordinate average = {0,0};
  for (int i = 0; i<n; i++){
    average.x += points[i].x;
    average.y += points[i].y;
  }
  average.x /= n;
  average.y /= n;
  return average;
//Calculate the distance
float Distance(coordinate p1, coordinate p2){
  return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main(){
  int count;
  printf("How many points?");
  scanf("%d", &count);

  coordinate points[count];

  //Coordinates
  for (int i = 0; i < count; i++) {
        printf("Enter coordinates for point %d (x y): ", i + 1);
        scanf("%f %f", &points[i].x, &points[i].y);
    }

  // Calculate the average position
    coordinate average = calculateAverage(points, count);
    printf("Average position: (%.2f, %.2f)\n", average.x, average.y);

    // Calculate distances between each point and the average
    for (int i = 0; i < count; i++) {
        float distance = calculateDistance(points[i], average);
        printf("Distance from point %d to average: %.2f\n", i + 1, distance);
    }

    return 0;
}
  

