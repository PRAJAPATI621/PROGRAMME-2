include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    int total;
    float average;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    // Check for subject fail condition
    if (marks1 < 35 || marks2 < 35 || marks3 < 35) {
        printf("Result: Fail (Scored less than 35 in at least one subject)\n");
        return 0;
    }

    // Calculate total and average
    total = marks1 + marks2 + marks3;
    average = total / 3.0;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    // Assign grade
    if (average >= 70)
        printf("Grade: Distinction\n");
    else if (average >= 60)
        printf("Grade: First Class\n");
    else if (average >= 50)
        printf("Grade: Second Class\n");
    else if (average >= 35)
        printf("Grade: Third Class\n");
    else
        printf("Result: Fail\n");

   return 0;
}
