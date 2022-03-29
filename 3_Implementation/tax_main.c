//Revision : 19 March 2022, 20 March 2022, 22 March 2022
//By HNS

#include <stdio.h>

extern double oldreg_60less(double income_o);
extern double oldreg_60more(double income_o);
extern double oldreg_80more(double income_o);

extern double newreg_all(double income_n);

int main()
{
    double income = 0;
    int age = 0;
    double tax_o = 0;
    double tax_n = 0;

    printf("-------------------------------------------INCOME TAX CALCULATOR-------------------------------------\n");
    
    printf("Enter your annual income : \n");
    scanf("%lf",&income);

    printf("Enter your age : \n");
    scanf("%d",&age);

    if(age < 60)
    {
        tax_o = oldreg_60less(income);
        tax_n = newreg_all(income);
    }
    else if(age >= 60 && age < 80)
    {
        tax_o = oldreg_60more(income);
        tax_n = newreg_all(income);
    }
    else
    {
        tax_o = oldreg_80more(income);
        tax_n = newreg_all(income);
    }

    printf("Tax payable in Old Regime : %lf\n",tax_o);
    printf("Tax payable in New Regime : %lf\n",tax_n);

    printf("******************************************************************************************************");

    return 0;


}