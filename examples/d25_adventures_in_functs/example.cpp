void print(int);
void print(float);
void print(double);
void print(char);


int sum(int a, int b);
long sum(long a, long b);
float sum (float a, float b);
double sum (double a, double b);
char sum(char a, char b);


int sum(int a, int b)
{
    return a + b;
}
long sum(long a, long b)
{
    return a + b;
}
float sum (float a, float b)
{
    return a + b;
}
double sum (double a, double b)
{
    return a + b;
}
char sum(char a, char b)
{
    return a + b;
}

template <typename T> T sum(T a, T b)
{
    return a + b;
}

