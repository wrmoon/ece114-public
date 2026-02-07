char name[42];         // array of 42 characters
float temp_deg_C[365]; // array of 365 floats
int states[50];        // array of 50 states

double balance[4];   // array declaration
balance[0] = 1000;   // 1st element 
balance[1] = 2.0;    // 2nd element
balance[2] = 3.4;    // 3rd element
balance[3] = 7.0;    // 4th element
// or 
double balance[4] = {1000.0, 2.0, 3.4, 7.0};


// rainfall per day for a 4 week period
float weeklyRainfall[4][7];
// number of widgets produced per day per hour
int weeklyProduction[7][24];

float weeklyRainfall [4][7] = {
	{1.2, .3, .4, 0, 2, 2.1, .1},
	{.1, 0, 0, 0, 2, .5, .2},
	{.3, .4, .5, .2, 0, 0, .1},
	{0, .4, .2, .8, 1, 1.1, .3}
	};
size = sizeof(float);

const int MAX_SIZE = 100;
const int MAX_BOOKS = 1000;

struct book
{
	char title[MAX_SIZE];
	char author[MAX_SIZE];
	float cost;
};

struct book my_book;

int count = 0;
int fibo[7] = {0,1,1,2,3,5,8};

struct book my_book = {
	"Harry Potter and the Socerer's Stone",
	"Joanne Kathleen Rowling",
	13.89
};
int foo(void)
{
typedef struct 
{
	char title[MAX_SIZE];
	char author[MAX_SIZE];
	float cost;
} Book;

Book library[MAX_BOOKS];
Book leavesOfGrass, nineTeenEightyFour;

char bookTitle[100];
strcpy(bookTitle, leavesOfGrass.title);
float cart_item = leavesOfGrass.cost;

struct book library[MAX_BOOKS];

Book library2[MAX_BOOKS];

typedef unsigned char BYTE;
typedef short WORD;

}