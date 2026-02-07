namespace Moon
{
    void orbit(char*);
}
namespace Earth
{
    void orbit(char*);
}
int main()
{
    Moon::orbit("polar");
    Earth::orbit("geostationary");

    return 0;
}
