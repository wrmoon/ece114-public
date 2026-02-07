#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void generate_fibonacci(uint64_t fib[], size_t count);
void write_text_file(const char *filename, uint64_t fib[], size_t count);
void write_binary_file(const char *filename, uint64_t fib[], size_t count);
void read_text_file(const char *filename);
void read_binary_file(const char *filename);

int main()
{
    const size_t FIB_COUNT = 94;
    uint64_t fib[FIB_COUNT];

    generate_fibonacci(fib, FIB_COUNT);

    write_text_file("fibonacci.txt", fib, FIB_COUNT);
    write_binary_file("fibonacci.bin", fib, FIB_COUNT);

    read_text_file("fibonacci.txt");
    read_binary_file("fibonacci.bin");

    return 0;
}

void generate_fibonacci(uint64_t fib[], size_t count)
{
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < count; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void write_text_file(const char *filename, uint64_t fib[], size_t count)
{
    FILE *file = fopen(filename, "w");
    if (!file)
    {
        perror("Error opening text file");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%" PRIu64 "\n", fib[i]);
    }

    fclose(file);
}

void write_binary_file(const char *filename, uint64_t fib[], size_t count)
{
    FILE *file = fopen(filename, "wb");
    if (!file)
    {
        perror("Error opening binary file");
        return;
    }

    fwrite(fib, sizeof(uint64_t), count, file);
    fclose(file);
}

void read_text_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening text file for reading");
        return;
    }

    printf("Reading from text file:\n");
    uint64_t num;
    for (int i = 0; i < 10 && fscanf(file, "%" PRIu64, &num) == 1; i++)
    {
        printf("%" PRIu64 " ", num);
    }
    printf("...\n");

    fclose(file);
}

void read_binary_file(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error opening binary file for reading");
        return;
    }

    printf("Reading from binary file:\n");
    uint64_t num;
    for (int i = 0; i < 10 && fread(&num, sizeof(uint64_t), 1, file) == 1; i++)
    {
        printf("%lu ", num);
    }
    printf("...\n");

    fclose(file);
}