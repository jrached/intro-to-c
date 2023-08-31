void menu(void)
{
    printf("\tChoose from an option below"
           "\n\n\t\t1. Diameter."
           "\n\n\t\t2. Circumference."
           "\n\n\t\t3. Area."
           "\n\n\t\t4. Volume."
           "\n\n\t\t5. End Program.\n");
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
