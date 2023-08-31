#define PI 3.141593

void menu(void)
{
   printf("\n\n   Choose from an option below"
           "\n\n\t\t- Diameter.........(1)."
           "\n\n\t\t- Circumference....(2)."
           "\n\n\t\t- Area.............(3)."
           "\n\n\t\t- Volume...........(4)."
           "\n\n\t\t- End Program......(Any other value).\n");
}

int diameterC(int x)
{
    return 2*x;
}

float circumferenceC(float x)
{
    float circumference;

    circumference = 2*PI*x;

    return circumference;
}

float areaC(float x)
{
    float area;

    area = PI*pow(x, 2);

    return area;
}

float volumeC(float x)
{
    float volume;

    volume = 4*(PI*pow(x, 3))/3;

    return volume;
}
