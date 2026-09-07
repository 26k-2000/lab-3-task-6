#include <stdio.h>

int main() {

    char id[50];
    char analyst[50];
    float affected;
    float recover_cost;
    float totalcost;
    float downtime;

    printf("Enter Incident ID: ");
    fgets(id,50,stdin);

    printf("Enter Analyst Name: ");
    fgets(analyst,50,stdin); 

    printf("Enter Number of Affected Systems : ");
    scanf("%f", &affected);

    printf("Enter Estimated Recovery Cost per system: ");
    scanf("%f", &recover_cost);

    printf("Enter Downtime in hours: ");
    scanf("%f", &downtime);

    if (affected<0 || affected!=(int)affected)
    {
        printf("Number of affected system should be a whole number!!!");
        return 1;
    }

    if (recover_cost<0 || downtime<0)
    {
        printf("recovery cost and downtime can't be less than 0!!!");
        return 1;
    }
    
    
    totalcost = affected * recover_cost;

    printf("========================================\n");
    printf("   SECURITY INCIDENT REPORT\n");
    printf("========================================\n");
    printf("Incident ID:");
    fputs(id,stdout);
    printf("Analyst:");
    fputs(analyst,stdout);
    printf("Affected Systems: %.0f\n", affected);
    printf("Recovery Cost: %.2f\n", recover_cost);
    printf("Total Cost: %.2f\n", totalcost);
    printf("Downtime: %.2f hours\n", downtime);
    printf("========================================\n");

    return 0;
}
