#ifndef STR_H_
#define STR_H_

#include <iostream>

template<class T,int n>
class Greap
{
private:
	T ai[n];
public:
	Greap();
	explicit Greap(const T *v);
	void show();
};

template<class T,int n>
Greap<T,n>::Greap(const T *v)
{
	int i;
	for(i = 0;i < n;i++)
		ai[i] = v[i];	
}
template<class T,int n>
void Greap<T,n>::show()
{
	int i;
	for(i = 0;i < n;i++)
		std::cout << "ai[" << i << "] : " << ai[i] << std::endl;
}


#endif