#ifndef UNITED_HPP
#define UNITED_HPP

class United{
	public:
		United(int, char, double);
		United();
		void printAll();
		void setVar(int, char, double);
		const bool operator==(United Other) const;
		const bool operator<(United Other) const;
		const bool operator>(United Other) const;
	private:
		int m_int;
		char m_char;
		double m_double;
};

#endif //UNITED_HPP
