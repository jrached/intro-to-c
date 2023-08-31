/* Date: 05/21/19
   Description: intro to programming with conditionals and if statements.
   */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int radius;
   printf("enter a value for radius:");
   scanf("%d", &radius);

   if( radius> 9000)
   {
       printf("\n\n IT'S OVER 9000!!!");
   }



 int move1,
     fail1,
     move2,
     move3;

     printf("\n\nVegita: DIEEEE!!");
     printf("\n...A billion blasts shoot in your direction. What do you do?");
     printf("\n\n (1)Dodge.   (2)Blast Back.   (3)Shield. ");
     scanf("\n\n%d", &move1);

     if(move1 < 3)
     {
         printf("\n\nGoku: That was close! \n*A cloud of smoke formed from the blasts* \nGoku: I'll counter attack before he sees me.");
         printf("\n\n (1)Blast barrage.   (2)Charge at him. (3)Instant transmission Kame-Hame-Ha.");
         scanf("\n\n%d", &move2);

         if(move2 == 3)
         {
             printf("\n\n*You surprised Vegita and your attack was successful. He is weakened now, FINISH HIM");
             printf("\n\n (1)KaioKen!   (2)Super Kame-Hame-Ha. (3)Spirit Bomb.");
             scanf("/n/n%d", &move3);

              if(move3 == 3)
             {
                 printf("\n\nPeople of the Earth, lend me your energy!");
                 printf("\n...\n");
                 printf("\nSPIRIT BOMB");
                 printf("\n\n YOU WIN");
             }
             else
             {
                 printf("\n\nVegita: That won't work!!");
                 printf("\n*He charges at you and pummels you against an arrangement of giant rock formations*");
                 printf("\n\nVegita: GAKLICK GUN!");
                 printf("\n\nVegita: All low-class warriors are the same: Pathetic.");
                 printf("\n\nGAME OVER.\n\n");
             }
         }
         else
         {
           printf("\n\n*Vegita rushes out of the smoke and charges at you*");
           printf("\nVegita: KAKAROT!");
           printf("\n\n (1)Face him.    (2)Jump above the cloud.    (3)Jump back and blast.");
           scanf("\n\n%d", &fail1);

            if(fail1 == 2)
            {
             printf("\n\nGoku: Uff! I'll counter attack before he sees me.");
             printf("\n\n (1)Blast barrage.   (2)Charge at him. (3)Instant transmission Kame-Hame-Ha.");
             scanf("\n\n%d", &move2);

             if(move2 == 3)
             {
             printf("\n\n*You surprised Vegita and your attack was successful. He is weakened now, FINISH HIM");
             printf("\n\n (1)KaioKen!   (2)Super Kame-Hame-Ha. (3)Spirit Bomb.");
             scanf("/n/n%d", &move3);

              if(move3 == 3)
             {
                 printf("\n\nPeople of the Earth, lend me your energy!");
                 printf("\n...\n");
                 printf("\nSPIRIT BOMB");
                 printf("\n\n YOU WIN");
             }
             else
             {
                 printf("\n\nVegita: That won't work!!");
                 printf("\n*He charges at you and pummels you against an arrangement of giant rock formations*");
                 printf("\n\nVegita: GAKLICK GUN!");
                 printf("\n\nVegita: All low-class warriors are the same: Pathetic.");
                 printf("\n\nGAME OVER.\n\n");
             }

         }
         }
         else
         {
             printf("\n\nVegita: That won't work!!");
             printf("\n*He charges at you and pummels you against an arrangement of giant rock formations*");
             printf("\n\nVegita: GAKLICK GUN!");
             printf("\n\nVegita: All low-class warriors are the same: Pathetic.");
             printf("\n\nGAME OVER.\n\n");
         }
         }
     }
     else
     {
         printf("\n\n*A cloud of smoke formed around you. You can't see at all*\n*Vegita rushes out of the smoke and charges at you*");
         printf("\nVegita: KAKAROT!");
         printf("\n\n (1)Face him.    (2)Jump above the cloud.    (3)Jump back and blast.");
         scanf("\n\n%d", &fail1);

         if(fail1 == 2)
         {
             printf("\n\nGoku: Uff! I'll counter attack before he sees me.");
             printf("\n\n (1)Blast barrage.   (2)Charge at him. (3)Instant transmission Kame-Hame-Ha.");
             scanf("\n\n%d", &move2);

             if(move2 == 3)
         {
             printf("\n\n*You surprised Vegita and your attack was successful. He is weakened now, FINISH HIM");
             printf("\n\n (1)KaioKen!   (2)Super Kame-Hame-Ha. (3)Spirit Bomb.");
             scanf("/n/n%d", &move3);

             if(move3 == 3)
             {
                 printf("\n\nPeople of the Earth, lend me your energy!");
                 printf("\n...\n");
                 printf("\nSPIRIT BOMB");
                 printf("\n\n YOU WIN");
             }
             else
             {
                 printf("\n\nVegita: That won't work!!");
                 printf("\n*He charges at you and pummels you against an arrangement of giant rock formations*");
                 printf("\n\nVegita: GAKLICK GUN!");
                 printf("\n\nVegita: All low-class warriors are the same: Pathetic.");
                 printf("\n\nGAME OVER.\n\n");
             }


         }
         }
         else
         {
             printf("\n\nVegita: That won't work!!");
             printf("\n*He charges at you and pummels you against an arrangement of giant rock formations*");
             printf("\n\nVegita: GAKLICK GUN!");
             printf("\n\nVegita: All low-class warriors are the same: Pathetic.");
             printf("\n\nGAME OVER.\n\n");
         }
     }




     return 0;
}
// "the logical and" && = ^ in discrete mathematics.
// "the logical or" || = v in discrete mathematics.
