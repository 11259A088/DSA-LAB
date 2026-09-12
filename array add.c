include <stdio.h>

int main()
{
    int marks[50],studentCount;

        printf("Enter number of students: ");
    scanf("%d", &studentCount);

    printf("Enter %d marks: ", studentCount);
    for (int i = 0; i < studentCount; i++)
        scanf("%d", &marks[i]);

    printf("Marks List: ");
    for (int i = 0; i < studentCount; i++)
    {
        printf("%d ", marks[i]);
        printf("\n");
    }

    printf("Marks Array Base: ");
    printf("%p ", (void *)&marks);
    printf("\n");

    printf("Marks Array Addresses: ");
    for (int i = 0; i < studentCount; i++)
    {
        printf("%p ", (void *)&marks[i]);
        printf("\n");
    }
    return 0;
}
