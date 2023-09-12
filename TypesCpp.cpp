
#include <iostream>
	
int main()
{
	setlocale(LC_ALL, "rus");
	int q = INT_MAX;
	int q2 = INT_MIN;
	long long q3 = LONG_MAX;
	long long q4 = LONG_MIN;
	unsigned int q5 = 0;
	unsigned int q6 = UINT32_MAX;
	unsigned short q7 = USHRT_MAX;
		unsigned long long q8 = ULONG_MAX;
		short q9 = SHRT_MAX;
		short q10 = SHRT_MIN;
		float q11 = FLT_MAX;
		float q12 = FLT_MIN;
		double q13 = DBL_MAX;
		double q14 = DBL_MIN;
		char q15 = CHAR_MAX;
		char q16 = CHAR_MIN;
		bool q17 = 0;
		bool q18 = 1;
			std::cout << "type\t\t|byte\t|min\t\t\t|max\n";
			std::cout << "int\t\t|" << sizeof(q) << "\t|" << q << "\t\t|" << q2 << "\n";
			std::cout << "long\t\t|" << sizeof(q3) << "\t|" << q3 << "\t\t|" << q4 << "\n";
			std::cout << "short\t\t|" << sizeof(q9) << "\t|" << q9 << "\t\t\t|" << q10 << "\n";
			std::cout << "unsigned int\t|" << sizeof(q5) << "\t|" << q5 << "\t\t\t|" << q6 << "\n";
			std::cout << "unsigned short\t|" << sizeof(q7) << "\t|" << 0 << "\t\t\t|" << q7 << "\n";
			std::cout << "unsigned int\t|" << sizeof(q5) << "\t|" << q5 << "\t\t\t|" << q6 << "\n";
			std::cout << "unsigned ll\t|" << sizeof(q8) << "\t|" << 0 << "\t\t\t|" << q8 << "\n";
			std::cout << "float\t\t|" << sizeof(q11) << "\t|" << q11 << "\t\t|" << q12 << "\n";
			std::cout << "double\t\t|" << sizeof(q13) << "\t|" << q13 << "\t\t|" << q14 << "\n";
				std::cout << "char\t\t|" << sizeof(q15) << "\t|" << q15 << "\t\t\t|" << q16 << "\n";
			std::cout << "bool\t\t|" << sizeof(q17) << "\t|" << 0 << "\t\t\t|" << q18 << "\n";
}
