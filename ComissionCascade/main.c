#include <stdio.h>
#include <stdlib.h>

int main()
{




   float transaction,
         commission,
         total;

       printf("\n\n   Enter transaction value: ");
       scanf("%f", &transaction);

       /*minimum commission = 39.
       minimum transaction = 530.
       */

       if( transaction <= 0)
       {
           printf("\n\n\a   Error: You must enter an amount larger than zero\n\n");
       }
       else
       {
           if( transaction > 0 &&transaction < 530 )
           {

                  commission = 39;
                  total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f\n\n", total);
           }
          else
           {

               if(transaction >= 530 &&transaction < 2500)
                {

                     commission = 30 + transaction*0.017;
                     total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f\n\n", total);
                }
               else
                {

                     if(transaction >= 2500 &&transaction < 6250)
                      {
                         commission = 56 + transaction*0.0066;
                         total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f\n\n", total);
                      }
                      else
                      {
                          if( transaction < 20000)
                          {
                              commission = 76 + transaction*0.0034;
                              total = transaction  + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f\n\n", total);
                          }
                          else
                          {
                              if( transaction < 50000)
                              {

                              }
                          }
                      }
                 }




           }
       }



    return 0;
}



/*    if(transaction > 2500)
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
                                comission = 155 + (transaction*0.0011);
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
                 comission = 30 + 9
                 total = transaction + commission;

                                printf("\n\n The Broker's commission is:");
                                printf("%f", commission);
                                printf("\n\n Your total:");
                                printf("%f", total);
           }

*/
