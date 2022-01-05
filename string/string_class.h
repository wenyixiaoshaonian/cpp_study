#ifndef STR_H_
#define STR_H_

#include <iostream>

template<typename T,int n> void counts();
template<typename T> void reports(T &);
template<typename T,int n>
class Greap
{
private:
	T ai[n];
	static int num;
public:
	Greap();
	explicit Greap(const T *v);
	void show();
	friend void reports<Greap<T,n>>(Greap<T,n> &);
	friend void counts<T,n>();

};

template<typename T,int n>
int Greap<T,n>::num = 11;

template<typename T,int n>
Greap<T,n>::Greap(const T *v)
{
	int i;
	for(i = 0;i < n;i++)
		ai[i] = v[i];
	num = 11;
}
template<typename T,int n>
void Greap<T,n>::show()
{
	int i;
	for(i = 0;i < n;i++)
		std::cout << "ai[" << i << "] : " << ai[i] << std::endl;
}
template<typename T,int n>
void reports(Greap<T,n> & hfs)
{
	int i;
	for(i = 0;i < n;i++)
		std::cout << "ai[" << i << "] : " << 1 << std::endl;
}
template<typename T,int n>
void counts()
{
	std::cout << "cout : " << Greap<T,n>::num << std::endl;
}

#endif
