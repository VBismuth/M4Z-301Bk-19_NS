#ifndef UNITED_HPP
#define UNITED_HPP

class United{
	public:
		United();
		United(int, char, double);
		void printAll(bool newline = false);
		void setVar(int newInt=0, char newChar=' ', double newDouble=0.);
		const bool operator==(const United &Other) const;
		const bool operator<(const United &Other) const;
		const bool operator>(const United &Other) const;
		void operator=(const United &Other);
	private:
		int m_int;
		char m_char;
		double m_double;
		long double someSum() const;
};

#endif //UNITED_HPP
