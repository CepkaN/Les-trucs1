#include<iostream>
#include<cstdlib>
#include<ctime>

template<typename T>
void sor(T bloc[], const int eterno) {
    srand(time(NULL));
    for (int i = 0; i < eterno; i++)
        bloc[i] = rand() % 100 - 50;
}
template<typename T>
void riemp(T bloc[], const int eterno) {
    std::cout << "[ ";
    for (int i = 0; i < eterno; i++)
        std::cout << bloc[i] << ", ";
    std::cout << "\b\b ]\n";
}
template<typename T>
void srav(T bloc1[], const int eterno1, T bloc2[], const int eterno2) {
    for (int i = 0; i < eterno1; i++) {
        for (int j = 0; j < eterno2; j++)
            if (bloc1[i] == bloc2[j])
                std::cout << '[' << i << "] è [" << j << "]\n";
    }
}
int main() {
	setlocale(LC_ALL, "Russian");

    srand(time(NULL));
    const int n = 10;

    double a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = (double)(rand()) / 100000;
        std::cout << a[i] << " ";
    }
    std::cout << "\n\n";
    const int y = 10;
    const int x = 12;
    int mass1[y]{23,23,1,42,12,12,1,77,43,7};
    int mass2[x];
    sor(mass2, x);
    riemp(mass1, y);
    riemp(mass2, x);
    srav(mass1, y, mass2, x);


   
      
	return 0;
}