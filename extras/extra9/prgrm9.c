#include <stdio.h>
struct student
{
    char name[10];
    int roll;
};
void show(struct student st);
int main()
{
    struct student std;
    printf("\nEnter Student record:\n");
    printf("\nStudent name:\t");
    scanf("%9s", std.name);
    printf("\nEnter Student roll no:\t");
    scanf("%d", &std.roll);
    show(std);
    return 0;
}
void show(struct student st)
{
    printf("\nStudent name is %s", st.name);
    printf("\nRoll is %d\n", st.roll);
}

