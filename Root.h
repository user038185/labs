#pragma once
class Root {
protected:
	double* roots;
	size_t nRoots;
	double* koef;
	size_t nKoef;
public:
	virtual void get_root_calc() = 0;
	virtual void print() = 0;
	double* getRoots(size_t& nCount) { nCount = nRoots; return roots; }
};