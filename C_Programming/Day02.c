#include<stdio.h>
#include<math.h>


int main(){
    double mealCost;
    int tip,tax;

    scanf("%lf",&mealCost);
    scanf("%d",&tax);
    scanf("%d",&tip);

    double  tip1 = (mealCost * tip/100);

   double tax1 = (mealCost * tax/100);


    int totCost;

    totCost = (int) round((mealCost + tax1 + tip1));

    
   

    printf("The total meal cost is %d dollars.\n",totCost);

    return 0;

}