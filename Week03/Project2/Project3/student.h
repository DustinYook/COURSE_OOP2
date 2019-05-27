struct date
{
	int year;
	int month;
	int day;
};

struct student
{
	int num;
	char name[20];
	char sex;
	date birthday;
};

student st[4] = 
{
	{ 1001, "Kim", 'M',{ 1990,01,01 } },
	{ 1002, "Tom", 'M',{ 1992,01,01 } },
	{ 1003, "May", 'F',{ 1993,01,01 } },
	{ 1004, "Lee", 'M',{ 1994,01,01 } },
};