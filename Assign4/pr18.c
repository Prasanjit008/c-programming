    // gread calculation in switch statement //

    #include <stdio.h>
    int main()
    {
        float m1, m2, m3, avg;
        int grp;
        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &m1, &m2, &m3);
        avg = (m1 + m2 + m3) / 3;
        grp = (int)avg / 10; // groups avg into tens for switch
        switch (grp)
        {
        case 10:
        case 9:
            printf("Grade: O\n");
            break;
        case 8:
            printf("Grade: E\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: B\n");
            break;
        case 5:
            printf("Grade: C\n");
            break;
        case 4:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
        }
        return 0;
    }