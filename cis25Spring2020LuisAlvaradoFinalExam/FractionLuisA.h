#pragma once
class FractionLuisA {
public:
	FractionLuisA();
	FractionLuisA(int n, int d);
	FractionLuisA(const FractionLuisA& copy) {
		num = copy.num;
		denom = copy.denom;
	};
	void setDenom(int);
	int getDenom(void)const;
	void setNum(int);
	int getNum(void)const;
	void print(void)const;
	FractionLuisA add(FractionLuisA*& that) const;
	FractionLuisA subtract(FractionLuisA*& that) const;
	FractionLuisA multiply(FractionLuisA*& that) const;
	FractionLuisA divide(FractionLuisA*& that) const;
	friend FractionLuisA add(FractionLuisA*&, FractionLuisA*&);
	friend void print(FractionLuisA*& ref1, FractionLuisA*& ref2);
	void init(FractionLuisA*& ref1);
	~FractionLuisA();
private:
	int num;
	int denom;
	int gcdBF(int, int);
};