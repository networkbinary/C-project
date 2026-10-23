#include <stdio.h>

// Function prototypes
float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);

float calculateAverage(int grades[], int size) {
    // TODO: Calculate and return the average grade
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += grades[i];
        

    }
    float result = (float)sum / size;
    return result;

     
}

int findHighestGrade(int grades[], int size) {
    // TODO: Find and return the highest grade
    int highest = grades[0];
    for(int i = 1; i < size; i++){
        if (grades[i] > highest){
            highest = grades[i];
        }
    }
    return highest;
}

char determineLetterGrade(int grade) {
    // TODO: Determine and return the letter grade
    if (grade >= 90){
        return 'A';
    }else if (grade >= 80){
        return 'B';
    }else if (grade >= 70){
        return 'C';
    }else if (grade >= 60){
        return 'D';
    }else{
        return 'F';
    }
       





}

int main() {
    int size;
    scanf("%d", &size);
    int grades[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &grades[i]);
    }
    
    // Calculate and display the average grade
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);
    
    // Find and display the highest grade
    int highest = findHighestGrade(grades, size);
    printf("Highest grade: %d\n", highest);
    
    // Display letter grade for each numerical grade
    printf("\nStudent Grades:\n");
    for (int i = 0; i < size; i++) {
        char letterGrade = determineLetterGrade(grades[i]);
        printf("Student %d: %d - %c\n", i+1, grades[i], letterGrade);
    }
    
    return 0;
}
