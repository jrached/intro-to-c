#include <stdio.h>
#include <stdlib.h>

int main()
{


   float transaction,
         commission,
         total;

       printf("\n\n   Enter transaction value,");
       scanf("%f", &transaction);

       /*minimum comission = 39.
       minimum transaction = 530.
       */


       if(transaction > 530)
       {
           if(transaction > 2500)
           {
              if(transaction > 2500 )
              {
                  if(transaction > 6250)
                  {
                     if(transaction > 20000)
                     {
                         if(transaction > 50000)
                         {
                            if(transaction > 500000)
                            {
                                commission = 255 + (transaction*0.0009);
                                total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
                            }
                            else
                            {
                                commission = 155 + (transaction*0.0011);
                                total = transaction + commission;
                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
                            }
                         }
                         else
                         {
                              commission = 100 + (transaction*0.0035);
                              total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
                         }
                     }
                     else
                     {
                          commission = 80 + (transaction*0.0066);
                          total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
                     }
                  }
                  else
                  {
                       commission = 60 + (transaction*0.009);
                       total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
                  }
              }
              else
              {
                    commission = 40 + (transaction*0.012);
                    total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
              }
           }
           else
           {
                 commission = 39;
                 total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
           }
       }
       else
       {
          printf("\n\n\n   Error: Transaction value must be larger than 0 .\n\n");
       }





    return 0;
}
