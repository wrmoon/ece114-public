
int main()
{
    // get block of 10 ints
    int *psome = new int[10];

    // use the memory

    // free memory
    delete[] psome;
    psome = nullptr;

    return 0;
}
